/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

@interface ARUICountdownController

{
    unsigned long long _countdownOrigin;
}

@property (nonatomic) unsigned long long countdownOrigin;
@property (nonatomic) double countdownPercent;

+ (id)animationTimingFunction;

- (id)init;
- (void)setCountdownPercent:(double)arg1 animated:(_Bool)arg2;
- (void)setTrackOpacity:(double)arg1 animated:(_Bool)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setCountdownPercent:(double)arg1 animated:(_Bool)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setRingDiameter:(double)arg1 animated:(_Bool)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setRingThickness:(double)arg1 animated:(_Bool)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setCountdownOrigin:(unsigned long long)arg1 animated:(_Bool)arg2;
- (double)_zRotationFromCountdownOrigin:(unsigned long long)arg1;
- (void)setFloatValue:(double)arg1 forRingGroupPropertyType:(unsigned long long)arg2 animated:(_Bool)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setTopColor:(id)arg1 bottomColor:(id)arg2;
- (void)setCountdownPercent:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
