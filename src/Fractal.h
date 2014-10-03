#pragma once
// include file for screensaver template


struct Fractal;
struct FractalController;

struct FractalSettings
{
  int frame;
  int nextTransition;
  int animationCountdown;
  
  int transitionTime;
  int animationTime;
  float presetChance;

  int iMaxObjects;
  int iMaxDepth;
  float morphSpeed;
  FractalController * fractalcontroller;
  Fractal * fractal;
};
