#include "GraphicsEngine.h"

int main() {
    GraphicsEngine engine;
    std::vector<Vector3> vertices = {
        // Define 3D model vertices
        // ...
    };
    engine.setGeometry(vertices);
    Vector3 lightPosition(0, 0, 10);
    Vector3 lightColor(1, 1, 1);
    engine.setLighting(lightPosition, lightColor);
    std::vector<unsigned char> textureData;
    // Load texture data
    // ...
    engine.setTexture(textureData);
    engine.setShadingAlgorithm("Phong");
    engine.render();
    return 0;
}
