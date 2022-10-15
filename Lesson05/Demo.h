#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>
#include <vector>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2;
	float angle = 0;
	/*float speed = 0;
	float updown = 0;
	float speedy = 0.5;*/
	float translateX = 0;
	float translateY = 0;
	float translateZ = 0;
	int segmentPoint = 100;
	std::vector<float> xCalculated;
	std::vector<float> zCalculated;
	int indexNow = 0;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);
	void BuildColoredCube();
	void BuildColoredPlane();
	void DrawColoredCube(float s1, float s2, float s3, float l1, float l2, float l3, float a);
	void DrawColoredPlane();
	void BuildPointBezier();

};

