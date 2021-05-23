/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _TVPlaybackFadeAnimator : NSObject

{
    _Bool _usesCustomEasing;
    _Bool _shouldAnimateHalfwayThenPopIn;
    double _transitionDuration;
}

@property (nonatomic) double transitionDuration;
@property (nonatomic) _Bool usesCustomEasing;
@property (nonatomic) _Bool shouldAnimateHalfwayThenPopIn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)_beginFadeAnimationFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
