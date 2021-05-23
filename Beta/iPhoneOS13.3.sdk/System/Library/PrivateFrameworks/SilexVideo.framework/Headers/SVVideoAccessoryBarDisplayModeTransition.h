/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class SVVideoAccessoryBarDisplayModeTransitionContext, SVVideoAccessoryBarDisplayState;

@protocol SVVideoAccessoryItemDisplayModeTransitioning;

@interface SVVideoAccessoryBarDisplayModeTransition : NSObject

{
    SVVideoAccessoryBarDisplayState *_fromState;
    SVVideoAccessoryBarDisplayState *_toState;
    id <SVVideoAccessoryItemDisplayModeTransitioning> _transitionCoordinator;
    SVVideoAccessoryBarDisplayModeTransitionContext *_context;
}

@property (retain, nonatomic) SVVideoAccessoryBarDisplayModeTransitionContext *context;
@property (nonatomic, readonly) SVVideoAccessoryBarDisplayState *fromState;
@property (nonatomic, readonly) SVVideoAccessoryBarDisplayState *toState;
@property (nonatomic, readonly) id <SVVideoAccessoryItemDisplayModeTransitioning> transitionCoordinator;

- (void)cancel;
- (id)initWithFromState:(id)arg1 toState:(id)arg2 transitionCoordinator:(id)arg3;
- (void)performTransitionWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
