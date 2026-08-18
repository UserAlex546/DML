#ifndef DML_AUDIO_H
#define DML_AUDIO_H

#include <SDL3/SDL.h>
#include <SDL3_mixer/SDL_mixer.h>

class AudioManager
{
public:
    AudioManager();
    ~AudioManager();

    MIX_Audio* load_audio(const char* path, bool predecode = false);
    MIX_Track* create_track(MIX_Audio* audio);

    bool play_track(MIX_Track* track, int loops = 0) const;

    static void set_track_gain(MIX_Track* track, float gain);
    static void stop_track(MIX_Track* track, int fade_ms = 0);
    static void destroy_track(MIX_Track* track);
    static void free_audio(MIX_Audio* audio);

    void cleanUp();

private:
    MIX_Mixer* mixer = nullptr;
    SDL_PropertiesID props = 0;
};

#endif //DML_AUDIO_H
