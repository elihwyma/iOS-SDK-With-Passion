/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _TVNavigationCrossfadeAnimator : NSObject

{
    _Bool _fadeOutFromView;
}

@property (nonatomic) _Bool fadeOutFromView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_beginCrossfadeAnimationFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 delay:(double)arg4 fadeOutFromView:(_Bool)arg5 removeFromView:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)_beginCrossfadeAnimationFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
