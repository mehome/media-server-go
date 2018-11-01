/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.0
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

// source: mediaserver.i

#ifndef SWIG_mediaserver_WRAP_H_
#define SWIG_mediaserver_WRAP_H_

class Swig_memory;

class SwigDirector_REMBListener : public REMBListener
{
 public:
  SwigDirector_REMBListener(int swig_p);
  void _swig_upcall_onREMB() {
    REMBListener::onREMB();
  }
  virtual void onREMB();
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

class SwigDirector_PlayerListener : public PlayerListener
{
 public:
  SwigDirector_PlayerListener(int swig_p);
  void _swig_upcall_onEnd() {
    PlayerListener::onEnd();
  }
  virtual void onEnd();
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

class SwigDirector_TargetBitrateListener : public TargetBitrateListener
{
 public:
  SwigDirector_TargetBitrateListener(int swig_p);
  void _swig_upcall_onBitrate() {
    TargetBitrateListener::onBitrate();
  }
  virtual void onBitrate();
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

#endif