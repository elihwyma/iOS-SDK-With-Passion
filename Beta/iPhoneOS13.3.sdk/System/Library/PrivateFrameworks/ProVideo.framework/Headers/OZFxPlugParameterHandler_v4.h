/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/OZFxPlugParameterHandler.h>

@class NSString;

@interface OZFxPlugParameterHandler_v4 : OZFxPlugParameterHandler

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)getFloatValue:(double *)arg1 fromParm:(unsigned int)arg2 atFxTime:(CDUnion_baaf6063)arg3;
- (_Bool)getIntValue:(int *)arg1 fromParm:(unsigned int)arg2 atFxTime:(CDUnion_baaf6063)arg3;
- (_Bool)getBoolValue:(_Bool *)arg1 fromParm:(unsigned int)arg2 atFxTime:(CDUnion_baaf6063)arg3;
- (_Bool)getRedValue:(double *)arg1 greenValue:(double *)arg2 blueValue:(double *)arg3 fromParm:(unsigned int)arg4 atFxTime:(CDUnion_baaf6063)arg5;
- (_Bool)getRedValue:(double *)arg1 greenValue:(double *)arg2 blueValue:(double *)arg3 alphaValue:(double *)arg4 fromParm:(unsigned int)arg5 atFxTime:(CDUnion_baaf6063)arg6;
- (_Bool)getXValue:(double *)arg1 YValue:(double *)arg2 fromParm:(unsigned int)arg3 atFxTime:(CDUnion_baaf6063)arg4;
- (_Bool)getBitmap:(id *)arg1 layerOffsetX:(double *)arg2 layerOffsetY:(double *)arg3 requestInfo:(CDStruct_f5b31fc1)arg4 fromParm:(unsigned int)arg5 atFxTime:(CDUnion_baaf6063)arg6;
- (_Bool)getTexture:(id *)arg1 layerOffsetX:(double *)arg2 layerOffsetY:(double *)arg3 requestInfo:(CDStruct_f5b31fc1)arg4 fromParm:(unsigned int)arg5 atFxTime:(CDUnion_baaf6063)arg6;
- (_Bool)getCustomParameterValue:(id *)arg1 fromParm:(unsigned int)arg2;
- (_Bool)getParameterFlags:(unsigned int *)arg1 fromParm:(unsigned int)arg2;
- (_Bool)getStringParameterValue:(id *)arg1 fromParm:(unsigned int)arg2;
- (_Bool)getCustomParameterValue:(id *)arg1 fromParm:(unsigned int)arg2 atFxTime:(CDUnion_baaf6063)arg3;
- (_Bool)getPathID:(void **)arg1 fromParm:(unsigned int)arg2 atFxTime:(CDUnion_baaf6063)arg3;
- (_Bool)getFontName:(id *)arg1 fromParm:(unsigned int)arg2 atFxTime:(CDUnion_baaf6063)arg3;
- (_Bool)addPushButtonWithName:(id)arg1 parmId:(unsigned int)arg2 selector:(SEL)arg3 parmFlags:(unsigned int)arg4;
- (_Bool)addHelpButtonWithName:(id)arg1 parmId:(unsigned int)arg2 selector:(SEL)arg3 parmFlags:(unsigned int)arg4;
- (_Bool)addFontMenuWithName:(id)arg1 parmId:(unsigned int)arg2 fontName:(id)arg3 parmFlags:(unsigned int)arg4;
- (_Bool)getHistogramBlackIn:(double *)arg1 BlackOut:(double *)arg2 WhiteIn:(double *)arg3 WhiteOut:(double *)arg4 Gamma:(double *)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned int)arg7 atFxTime:(CDUnion_baaf6063)arg8;
- (_Bool)getGradientSamples:(void *)arg1 numSamples:(unsigned long long)arg2 depth:(unsigned long long)arg3 fromParm:(unsigned int)arg4 atFxTime:(CDUnion_baaf6063)arg5;
- (_Bool)getGradientStartEnd:(double *)arg1 startY:(double *)arg2 endX:(double *)arg3 endY:(double *)arg4 type:(int *)arg5 fromParm:(unsigned int)arg6 atFxTime:(CDUnion_baaf6063)arg7;
- (_Bool)setFloatValue:(double)arg1 toParm:(unsigned int)arg2 atFxTime:(CDUnion_baaf6063)arg3;
- (_Bool)setIntValue:(int)arg1 toParm:(unsigned int)arg2 atFxTime:(CDUnion_baaf6063)arg3;
- (_Bool)setBoolValue:(_Bool)arg1 toParm:(unsigned int)arg2 atFxTime:(CDUnion_baaf6063)arg3;
- (_Bool)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 toParm:(unsigned int)arg4 atFxTime:(CDUnion_baaf6063)arg5;
- (_Bool)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 alphaValue:(double)arg4 toParm:(unsigned int)arg5 atFxTime:(CDUnion_baaf6063)arg6;
- (_Bool)setXValue:(double)arg1 YValue:(double)arg2 toParm:(unsigned int)arg3 atFxTime:(CDUnion_baaf6063)arg4;
- (_Bool)setCustomParameterValue:(id)arg1 toParm:(unsigned int)arg2;
- (_Bool)setParameterFlags:(unsigned int)arg1 toParm:(unsigned int)arg2;
- (_Bool)setStringParameterValue:(id)arg1 toParm:(unsigned int)arg2;
- (_Bool)setCustomParameterValue:(id)arg1 toParm:(unsigned int)arg2 atFxTime:(CDUnion_baaf6063)arg3;
- (_Bool)setPathID:(void *)arg1 toParm:(unsigned int)arg2 atFxTime:(CDUnion_baaf6063)arg3;
- (_Bool)_getFontName:(id *)arg1 fromParm:(unsigned int)arg2 atTime:(CDUnion_baaf6063)arg3;
- (_Bool)getFontName:(id *)arg1 fromParm:(unsigned int)arg2 atTime:(double)arg3;
- (_Bool)setHistogramBlackIn:(double)arg1 blackOut:(double)arg2 whiteIn:(double)arg3 whiteOut:(double)arg4 gamma:(double)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned int)arg7 atFxTime:(CDUnion_baaf6063)arg8;
- (id)pushButtonSelectorNameForParameterID:(unsigned int)arg1;

@end
