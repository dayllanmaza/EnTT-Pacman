//
//  sdl_quad_writer.hpp
//  EnTT Pacman
//
//  Created by Indi Kernick on 24/4/20.
//  Copyright © 2020 Indi Kernick. All rights reserved.
//

#ifndef UTIL_SDL_QUAD_WRITER_HPP
#define UTIL_SDL_QUAD_WRITER_HPP

#include <SDL_render.h>
#include <Simpleton/Sprite/sheet.hpp>

namespace SDL {

class QuadWriter {
public:
  QuadWriter(SDL_Renderer *, SDL_Texture *, const Sprite::Sheet &);

  void tilePos(glm::ivec2, glm::ivec2, double = 0.0);
  void tileTex(Sprite::Rect);
  void tileTex(Sprite::ID);

  void render() const;

  const Sprite::Sheet &sheet() const;

private:
  SDL_Renderer *renderer;
  SDL_Texture *texture;
  const Sprite::Sheet &spritesheet;

  SDL_Rect srcRect;
  SDL_Rect dstRect;
  double angle;
};

}

#endif