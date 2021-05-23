/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAAnimationGroup;

@interface CAMTorchPattern : NSObject

{
    float _torchLevel;
    long long __type;
    CAAnimationGroup *__animationGroup;
    double __lastUpdateTime;
    double _startTime;
}

@property (nonatomic, readonly) long long _type;
@property (nonatomic, readonly) CAAnimationGroup *_animationGroup;
@property (nonatomic, readonly) double _lastUpdateTime;
@property (nonatomic) double startTime;
@property (nonatomic, readonly) float torchLevel;

- (id)init;
- (id)initWithType:(long long)arg1;
- (void)_updateAnimationGroup;
- (void)updateAtTime:(double)arg1;
- (id)_patternAnimationWithBeginTime:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3;
- (id)_blinkAnimationWithBeginTime:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3;
- (id)_shortPatternAnimationGroup;
- (id)_longPatternAnimationGroup;
- (id)_blinkAnimationGroup;
- (id)_doubleBlinkAnimationGroup;

@end
