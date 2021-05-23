/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@class NSSet;

@protocol SVVideoAccessoryItemDisplayModeTransitionContext <Swift>

@property (nonatomic, readonly) NSSet *views;
@property (nonatomic, readonly) NSSet *appearingViews;
@property (nonatomic, readonly) NSSet *disappearingViews;
@property (nonatomic, readonly) NSSet *transitioningViews;
@property (nonatomic, readonly) NSSet *containerViews;
@property (nonatomic, readonly) _Bool transitionWasCancelled;

- (unsigned short)completeTransition: /* Error: Ran out of types for this method. */;
- (unsigned short)initialFrameForView: /* Error: Ran out of types for this method. */;
- (unsigned short)initialDisplayModeForView: /* Error: Ran out of types for this method. */;
- (unsigned short)targetDisplayModeForView: /* Error: Ran out of types for this method. */;
- (unsigned short)targetFrameForView: /* Error: Ran out of types for this method. */;

@end
