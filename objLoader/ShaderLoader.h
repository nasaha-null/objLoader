#ifndef SHADER_LOADER_H_INCLUDE
#define SHADER_LOADER_H_INCLUDE

#include <GL/glew.h>

/* �V�F�[�_�̓ǂݍ��� */
GLuint load_shader(
	const char *vertex_shader_fname,
	const char *fragment_shader_fname);

#endif