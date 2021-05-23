/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class BSAnimationSettings;

@protocol _UIBasicAnimationFactory;

@interface UIStatusBarAnimationParameters : NSObject

{
    double _duration;
    double _delay;
    long long _curve;
    id <_UIBasicAnimationFactory> _animationFactory;
    _Bool _skipFencing;
    double _startTime;
}

@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic) long long curve;
@property (retain, nonatomic) id <_UIBasicAnimationFactory> animationFactory;
@property (nonatomic) _Bool skipFencing;
@property (nonatomic) double startTime;
@property (nonatomic, readonly) BSAnimationSettings *bsAnimationSettings;

+ (void)animateWithParameters:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)fencingAnimation;
+ (void)animateWithParameters:(id)arg1 fromCurrentState:(_Bool)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)animateWithParameters:(id)arg1 fromCurrentState:(_Bool)arg2 frameInterval:(double)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;

- (id)init;
- (id)initWithDefaultParameters;
- (id)initWithEmptyParameters;
- (_Bool)shouldAnimate;

@end
