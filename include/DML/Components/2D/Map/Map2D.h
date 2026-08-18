#ifndef DML_MAP2D_H
#define DML_MAP2D_H

#include <vector>

#include "DML/Graphics/Graphics.h"
#include "DML/Components/2D/Tiles/Tile2D.h"

class Map2D {
public:
    Map2D(Texture2D* texture);
    ~Map2D();

    bool loadFromFile(const char* path);
    void buildTiles();

    void render(Shader* shader, Camera2D* camera = nullptr);
    void removeTile(Tile2D* tile);

    const std::vector<Tile2D*>& getTiles() const { return tiles; };
    Tile2D* getTilesWithId(int id);

    int getWidth() const { return width; };
    int getHeight() const { return height; };

private:
    Texture2D* texture;
    int width, height;

    std::vector<Tile2D*> tiles;
    std::vector<std::vector<TileD>> map;
};


#endif //DML_MAP2D_H