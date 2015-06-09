#ifndef MODEL_H
#define MODEL_H
#include<QGLFunctions>
#include<vector>

using namespace std;

class Model
{
private:
public:
    vector<GLint> position;
    vector<GLfloat> color;
    vector<GLubyte> index;
    Model();

};

#endif // MODEL_H
