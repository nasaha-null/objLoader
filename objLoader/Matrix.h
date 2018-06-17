#ifndef MATRIX_H_INCLUDE
#define MATRIX_H_INCLUDE

/* �s��̊��蓖�� */
float *alloc_matrix(void);

/* �s��̉�� */
void free_matrix(float *mat);

/* �s��̃N���A */
void clear_matrix(float *mat);

/* �P�ʍs��̐��� */
void set_identity_matrix(float *mat);

/* �����ϊ��s��̐��� */
void set_perspective_matrix(float *mat,
	float fov, float aspect, float near, float far);

/* ����ϊ��s��̐��� */
void set_lookat_matrix(float *mat,
	float eye_x, float eye_y, float eye_z,
	float center_x, float center_y, float center_z,
	float up_x, float up_y, float up_z);

/* �s��̐� */
void multiply_matrix(float *result, float *mat1, float *mat2);

#endif