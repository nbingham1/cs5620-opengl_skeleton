/*
 * scene.cpp
 *
 *  Created on: Dec 3, 2014
 *      Author: nbingham
 */

#include "scene.h"
#include "camera.h"
#include "object.h"
#include "light.h"

#include "primitive.h"
#include "model.h"

scenehdl::scenehdl()
{
	active_camera = -1;
	active_object = -1;
	render_normals = none;
	render_lights = false;
	render_cameras = false;
}

scenehdl::~scenehdl()
{
	for (int i = 0; i < (int)objects.size(); i++)
		delete objects[i];
	objects.clear();

	for (int i = 0; i < (int)cameras.size(); i++)
		delete cameras[i];
	cameras.clear();

	for (int i = 0; i < (int)lights.size(); i++)
		delete lights[i];
	lights.clear();
}

/* draw
 *
 * Update the locations of all of the lights, draw all of the objects, and
 * if enabled, draw the normals, the lights, the cameras, etc.
 */
void scenehdl::draw()
{
	/* TODO Assignment 1: Draw all of the objects, and
	 * if enabled, draw the normals and the cameras.
	 */

	/* TODO Assignment 3: Clear the uniform variables and pass the vector of
	 * lights into the renderer as a uniform variable.
	 * TODO Assignment 3: Update the light positions and directions
	 * TODO Assignment 3: Render the lights
	 */
}

bool scenehdl::active_camera_valid()
{
	return (active_camera >= 0 && active_camera < cameras.size() && cameras[active_camera] != NULL);
}

bool scenehdl::active_object_valid()
{
	return (active_object >= 0 && active_object < objects.size() && objects[active_object] != NULL);
}
