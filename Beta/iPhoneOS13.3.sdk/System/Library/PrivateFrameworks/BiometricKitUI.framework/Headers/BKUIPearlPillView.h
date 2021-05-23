/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

#import <UIKit/UIView.h>

@class CADisplayLink, CAShapeLayer, NSDate, NSTimer;

@interface BKUIPearlPillView : UIView

{
    double _radius;
    unsigned long long _state;
    double _ringHeight;
    double _numberOfPills;
    double _pillInitialHeight;
    double _pillCompletedHeight;
    double _pillCornerRadius;
    CADisplayLink *_displayLink;
    CAShapeLayer *_shapeLayer;
    NSTimer *_stateDelayTimer;
    NSDate *_stateAnimationStart;
    double _stateAnimationDuration;
    CDUnknownBlockType _stateAnimationCompletion;
    double _arc;
    double _startArc;
    double _targetArc;
    double _height;
    double _startHeight;
    double _targetHeight;
    double _cornerRadius;
    double _startCornerRadius;
    double _targetCornerRadius;
    NSDate *_radiusAnimationStart;
    double _radiusAnimationDuration;
    CDUnknownBlockType _radiusAnimationCompletion;
    double _startRadius;
    double _targetRadius;
}

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) NSTimer *stateDelayTimer;
@property (retain, nonatomic) NSDate *stateAnimationStart;
@property (nonatomic) double stateAnimationDuration;
@property (copy, nonatomic) CDUnknownBlockType stateAnimationCompletion;
@property (nonatomic) double arc;
@property (nonatomic) double startArc;
@property (nonatomic) double targetArc;
@property (nonatomic) double height;
@property (nonatomic) double startHeight;
@property (nonatomic) double targetHeight;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double startCornerRadius;
@property (nonatomic) double targetCornerRadius;
@property (retain, nonatomic) NSDate *radiusAnimationStart;
@property (nonatomic) double radiusAnimationDuration;
@property (copy, nonatomic) CDUnknownBlockType radiusAnimationCompletion;
@property (nonatomic) double startRadius;
@property (nonatomic) double targetRadius;
@property (nonatomic) double radius;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly, getter=isCompleted) _Bool completed;
@property (nonatomic) double ringHeight;
@property (nonatomic) double numberOfPills;
@property (nonatomic) double pillInitialHeight;
@property (nonatomic) double pillCompletedHeight;
@property (nonatomic) double pillCornerRadius;

- (id)init;
- (void)layoutSubviews;
- (void)setState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setRadius:(double)arg1 animationDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setState:(unsigned long long)arg1 animated:(_Bool)arg2 animationDelay:(double)arg3 completion:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)displayTick;
- (struct CGPath *)pillPath;
- (void)setState:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (double)ringArcLength;
- (void)startAnimationWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (double)pillMaxLength;

@end
