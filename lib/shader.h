#ifndef EJOY_2D_SHADER_H
#define EJOY_2D_SHADER_H

#include <stdint.h>
#include <lua.h>

#define PROGRAM_PICTURE 0
#define PROGRAM_TEXT 1

void shader_init();
void shader_load(int prog, const char *fs, const char *vs);
void shader_unload();
void shader_blend(int mode);
void shader_texture(int id);
void shader_draw(const float vb[16],uint32_t color);
void shader_drawpolygon(int n, const float *vb, uint32_t color);
void shader_program(int n, uint32_t arg);
void shader_flush();

int ejoy2d_shader(lua_State *L);

#endif
