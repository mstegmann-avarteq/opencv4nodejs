#include "macros.h"
#include <opencv2/ml.hpp>

#ifndef __FF_PARAMGRID_H__
#define __FF_PARAMGRID_H__

class ParamGrid: public Nan::ObjectWrap {
public:
	cv::ml::ParamGrid paramGrid;

	static NAN_MODULE_INIT(Init);
	static NAN_METHOD(New);

	static FF_GETTER(ParamGrid, minVal, paramGrid.minVal);
	static FF_GETTER(ParamGrid, maxVal, paramGrid.maxVal);
	static FF_GETTER(ParamGrid, logStep, paramGrid.logStep);

  static Nan::Persistent<v8::FunctionTemplate> constructor;
};

#endif