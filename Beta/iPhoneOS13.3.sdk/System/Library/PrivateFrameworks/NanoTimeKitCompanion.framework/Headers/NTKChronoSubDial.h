/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <SpriteKit/SKEffectNode.h>

@class CLKDevice;

@interface NTKChronoSubDial : SKEffectNode

{
    CLKDevice *_device;
    double _labelsRadius;
    double _labelsFontSize;
    long long _labelsFont;
    double _radius;
    struct CGSize _smallOuter;
    struct CGSize _smallInner;
}

@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) double labelsRadius;
@property (nonatomic, readonly) double labelsFontSize;
@property (nonatomic, readonly) long long labelsFont;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) struct CGSize smallOuter;
@property (nonatomic, readonly) struct CGSize smallInner;

+ (id)upper:(double)arg1 forDevice:(id)arg2;
+ (id)lower:(double)arg1 forDevice:(id)arg2;

- (id)addNodes:(id)arg1;
- (void)applyTransitionFraction:(double)arg1 fromTimeScale:(unsigned long long)arg2 toTimeScale:(unsigned long long)arg3;
- (id)initWithRadius:(double)arg1 forDevice:(id)arg2;
- (void)updateTimeScale:(unsigned long long)arg1;
- (void)colorize:(id)arg1;
- (id)addNodes:(id)arg1 to:(id)arg2;

@end
