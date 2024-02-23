#ifndef SRC_3D_VIEWER_V1_H
#define SRC_3D_VIEWER_V1_H

#include <float.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERROR 1
#define OK 0

typedef struct facets {
  unsigned int *vertexes;
  unsigned int numbers_of_vertexes_for_polygon;
} polygon_t;

typedef struct matrix_struct {
  double **matrix;
  unsigned int rows;
  unsigned int columns;
} matrix_t;

typedef struct data {
  unsigned int count_of_vertexes;
  unsigned int count_of_polygons;
  matrix_t matrix_of_vertexes;
  polygon_t *array_of_polygon;
  double minX, minY, minZ;
  double maxX, maxY, maxZ;
} data_t;

int core_parser(const char *file_name, data_t *viewer);
int first_read_parser(const char *file_name, data_t *viewer);
int second_read_parser(const char *file_name, data_t *viewer);
int create_matrix_of_vertexes(data_t *viewer);
int polygon_memory_allocation(data_t *viewer);
void print_matrix(data_t *viewer);
int count_vertexes_for_polygon(char *str, data_t *viewer, int j);
int vertexes_for_polygon_memory_allocation(data_t *viewer, int j);
int parser_vertexes_for_polygon(char *str, data_t *viewer, int j);
void print_vertex_of_polygon(data_t *viewer);
void free_data_t_memory(data_t *viewer);
void init(data_t *viewer);
void min_max(data_t *viewer, int i);
void set_in_center(data_t *viewer);

void s21_rotation_x(data_t *data, double a);
void s21_rotation_y(data_t *data, double a);
void s21_rotation_z(data_t *data, double a);

void s21_moving_x(data_t *data, double a);
void s21_moving_y(data_t *data, double a);
void s21_moving_z(data_t *data, double a);

void s21_affine_transform(double transform_data[3][3], struct data *ptr_obj1);
void s21_scaling(data_t *data, double a);

#endif  // SRC_3D_VIEWER_V1_H