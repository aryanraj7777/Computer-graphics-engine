#ifndef GRAPHICSENGINE_H
#define GRAPHICSENGINE_H

class GraphicsEngine {
public:
    GraphicsEngine();
    void render();
    void setGeometry(const std::vector<Vector3>& vertices);
    void setLighting(const Vector3& lightPosition, const Vector3& lightColor);
    void setTexture(const std::vector<unsigned char>& textureData);
    void setShadingAlgorithm(const std::string& algorithm);
};

#endif // GRAPHICSENGINE_H
