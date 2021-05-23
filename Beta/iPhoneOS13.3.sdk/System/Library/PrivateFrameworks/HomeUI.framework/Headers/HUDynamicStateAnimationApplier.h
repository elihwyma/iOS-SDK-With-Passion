/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUDisplayLinkApplier.h>

@class HUAnimationSettings;

@interface HUDynamicStateAnimationApplier : HUDisplayLinkApplier

{
    _Bool _hasUpdatedProgress;
    HUAnimationSettings *_animationSettings;
    double _initialProgress;
    double _targetProgress;
    double _preInterpolatedProgress;
    double _lastTargetChangeTime;
}

@property (nonatomic) double initialProgress;
@property (nonatomic) double targetProgress;
@property (nonatomic) double preInterpolatedProgress;
@property (nonatomic) double lastTargetChangeTime;
@property (nonatomic) _Bool hasUpdatedProgress;
@property (copy, nonatomic, readonly) HUAnimationSettings *animationSettings;

- (_Bool)start;
- (void)updateProgress:(double)arg1;
- (id)initWithAnimationSettings:(id)arg1 initialProgress:(double)arg2 progressInputBlock:(CDUnknownBlockType)arg3;
- (double)effectiveInputProgressForBlock:(CDUnknownBlockType)arg1;

@end
