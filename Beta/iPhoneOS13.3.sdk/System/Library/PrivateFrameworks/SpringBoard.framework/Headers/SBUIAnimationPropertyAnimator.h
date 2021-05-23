/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSMutableArray, NSString, UIViewPropertyAnimator;

@interface SBUIAnimationPropertyAnimator : NSObject <Swift>

{
    NSMutableArray *_completionBlocks;
    _Bool _wasStarted;
    unsigned long long _reverseCount;
    UIViewPropertyAnimator *_propertyAnimator;
    double _duration;
    CDUnknownBlockType _generator;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType generator;
@property (nonatomic, readonly) UIViewPropertyAnimator *propertyAnimator;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) _Bool isReversed;
@property (nonatomic, readonly) _Bool wasReversed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (id)initWithPropertyAnimatorGenerator:(CDUnknownBlockType)arg1;
- (void)reverseAnimation;
- (void)_executeGenerator:(id)arg1;
- (void)prepareToRunAnimation:(id)arg1;
- (id)initWithPropertyAnimator:(id)arg1 duration:(double)arg2;

@end
