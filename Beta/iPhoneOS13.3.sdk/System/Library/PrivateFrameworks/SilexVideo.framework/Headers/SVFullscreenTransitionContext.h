/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, UIView;

@interface SVFullscreenTransitionContext : NSObject

{
    _Bool _interactive;
    UIView *_contentOverlayView;
    UIView *_fromView;
    UIView *_toView;
    double _transitionDuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *contentOverlayView;
@property (nonatomic, readonly) UIView *fromView;
@property (nonatomic, readonly) UIView *toView;
@property (nonatomic, readonly) double transitionDuration;
@property (nonatomic, readonly, getter=isInteractive) _Bool interactive;

- (id)initWithContentOverlayView:(id)arg1 fromView:(id)arg2 toView:(id)arg3 transitionDuration:(double)arg4 interactive:(_Bool)arg5;

@end
