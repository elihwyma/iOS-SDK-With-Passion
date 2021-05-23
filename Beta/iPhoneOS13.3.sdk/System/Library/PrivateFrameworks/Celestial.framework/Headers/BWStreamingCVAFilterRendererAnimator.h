/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWRamp;

@interface BWStreamingCVAFilterRendererAnimator : NSObject

{
    CDStruct_a89bfe68 _currentFrame;
    int _mostRecentEffectStatus;
    BWRamp *_simulatedApertureRamp;
    float _defaultSimulatedAperture;
}

@property (nonatomic, readonly, getter=isDepthAvailable) _Bool depthAvailable;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)initWithEffectStatus:(int)arg1 videoPipelineDevice:(unsigned long long)arg2;
- (CDStruct_a89bfe68 *)simulateNextFrameWithEffectStatus:(int)arg1 portraitStability:(float)arg2 clientSuppliedSimulatedAperture:(float)arg3;
- (void)_resetSimulatedApertureRampWithEffectStatus:(int)arg1 clientSuppliedSimulatedAperture:(float)arg2;

@end
