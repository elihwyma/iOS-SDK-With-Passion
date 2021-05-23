/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UISlidingBarStateRequest, UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface _UIPanelAnimationState : NSObject

{
    UISlidingBarStateRequest *_fromRequest;
    UISlidingBarStateRequest *_toRequest;
    double _progress;
    long long _affectedSides;
    UIViewPropertyAnimator *_animator;
}

@property (copy, nonatomic) UISlidingBarStateRequest *fromRequest;
@property (copy, nonatomic) UISlidingBarStateRequest *toRequest;
@property (nonatomic) double progress;
@property (nonatomic) long long affectedSides;
@property (nonatomic, readonly) UISlidingBarStateRequest *stateRequest;
@property (retain, nonatomic) UIViewPropertyAnimator *animator;

+ (id)timingCurveProvider;
+ (double)defaultDuration;

@end
