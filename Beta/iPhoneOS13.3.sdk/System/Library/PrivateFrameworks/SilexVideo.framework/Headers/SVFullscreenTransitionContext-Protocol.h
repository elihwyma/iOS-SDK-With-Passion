/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@class UIView;

@protocol SVFullscreenTransitionContext <Swift>

@property (nonatomic, readonly) UIView *contentOverlayView;
@property (nonatomic, readonly) UIView *fromView;
@property (nonatomic, readonly) UIView *toView;
@property (nonatomic, readonly) double transitionDuration;
@property (nonatomic, readonly, getter=isInteractive) _Bool interactive;

@end
