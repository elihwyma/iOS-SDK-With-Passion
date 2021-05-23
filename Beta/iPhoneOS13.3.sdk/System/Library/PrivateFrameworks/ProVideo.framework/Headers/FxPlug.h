/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface FxPlug : NSObject

{
    struct FxPlugPriv *_priv;
}

+ (id)pinInPinList:(id)arg1 withUUID:(id)arg2;
+ (id)fxPlugWithDescriptor:(id)arg1 andHost:(id)arg2;
+ (unsigned int)leastCommonMultipleOfA:(unsigned int)arg1 andB:(unsigned int)arg2;

- (void)dealloc;
- (id)host;
- (id)descriptor;
- (id)inputPins;
- (id)outputPins;
- (id)initWithDescriptor:(id)arg1 andHost:(id)arg2;
- (id)createInputPinArray;
- (id)createOutputPinArray;
- (id)imageOutputPin;
- (Class)canvasControlClass;
- (void)setCanvasControlClass:(Class)arg1;
- (id)filterImageInputPin;
- (id)transitionImageAInputPin;
- (id)transitionImageBInputPin;
- (void)valueChangedForPin:(id)arg1;
- (unsigned int)timeScaleForStream:(id)arg1;
- (double)startTimeForStream:(id)arg1;
- (double)durationForStream:(id)arg1;
- (double)frameDurationForStream:(id)arg1;
- (_Bool)isStreamPremultiplied:(id)arg1;
- (double)pixelAspectForStream:(id)arg1;
- (_Bool)isContextTypeSupported:(int)arg1 bySample:(id)arg2;
- (unsigned long long)fieldOrderForSample:(id)arg1;
- (_Bool)isSamplePredetermined:(id)arg1;
- (id)requiredSamplesForSample:(id)arg1;
- (id)evaluateSample:(id)arg1 withOptions:(id)arg2;
- (id)domainOfDefinitionForSample:(id)arg1;
- (id)inputPinWithUUID:(id)arg1;
- (id)outputPinWithUUID:(id)arg1;
- (_Bool)renderImageOutputAtTime:(double)arg1 withOptions:(id)arg2 inFxContext:(id)arg3 inRegionOfInterest:(id)arg4;

@end
