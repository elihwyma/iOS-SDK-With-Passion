/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAESharedDefaultBase.h>

@interface PAETransitionDefaultBase : PAESharedDefaultBase

{
    _Bool _haveEase;
    _Bool _haveMotionBlur;
    int _initGap;
}

- (_Bool)addParameters;
- (_Bool)parameterChanged:(unsigned int)arg1;
- (_Bool)addEaseParametersWithDefault:(float)arg1 andFlags:(unsigned int)arg2;
- (_Bool)convertTimeFraction:(double)arg1 toLocal:(double *)arg2 andDerivative:(double *)arg3 atTime:(CDUnion_baaf6063)arg4;
- (_Bool)isFrontGap;
- (_Bool)isEndGap;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfoA:(CDStruct_da8610d8)arg2 inputInfoB:(CDStruct_da8610d8)arg3 timeFraction:(float)arg4 hardware:(_Bool *)arg5 software:(_Bool *)arg6;
- (_Bool)canThrowRenderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withInfo:(CDStruct_f5b31fc1)arg5;
- (_Bool)finishInitialSetup:(id *)arg1;
- (_Bool)getEaseIn:(double *)arg1 easeOut:(double *)arg2 atTime:(CDUnion_baaf6063)arg3;
- (_Bool)canThrowRenderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withSpeed:(float)arg5 withInfo:(CDStruct_f5b31fc1)arg6;
- (_Bool)getOutputWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 withInputA:(CDStruct_da8610d8)arg3 withInputB:(CDStruct_da8610d8)arg4 withTimeFraction:(float)arg5 withInfo:(CDStruct_f5b31fc1)arg6;
- (_Bool)renderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withInfo:(CDStruct_f5b31fc1)arg5;
- (_Bool)addMotionBlurParameters;
- (double)relativeShutterAtTime:(CDUnion_baaf6063)arg1;

@end
