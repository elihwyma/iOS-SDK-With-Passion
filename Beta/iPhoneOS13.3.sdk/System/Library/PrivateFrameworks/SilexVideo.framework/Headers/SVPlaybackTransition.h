/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class SVPlaybackTransitionContext;

@protocol SVInteractivePlaybackTransitioning, SVVideo;

@interface SVPlaybackTransition : NSObject

{
    id <SVVideo> _fromVideo;
    id <SVVideo> _toVideo;
    id <SVInteractivePlaybackTransitioning> _transitionCoordinator;
    SVPlaybackTransitionContext *_context;
}

@property (retain, nonatomic) SVPlaybackTransitionContext *context;
@property (nonatomic, readonly) id <SVVideo> fromVideo;
@property (nonatomic, readonly) id <SVVideo> toVideo;
@property (nonatomic, readonly) id <SVInteractivePlaybackTransitioning> transitionCoordinator;

- (void)cancel;
- (id)initWithFromVideo:(id)arg1 toVideo:(id)arg2 transitionCoordinator:(id)arg3;
- (void)performTransitionWithVisibilityMonitor:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
