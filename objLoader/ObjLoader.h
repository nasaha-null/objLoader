#ifndef OBJLOADER_H_INCLUDE
#define OBJLOADER_H_INCLUDE

/* ���f���f�[�^ */
typedef struct {
	float *vertices;
	int num_vertices;
} model;

/* OBJ�t�@�C���̓ǂݍ��� */
void load_obj(model *m, const char *file_name);

#endif