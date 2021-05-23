/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, SVPlaybackTransition;

@protocol SVPlaybackTransitionCoordinatorFactory, SVVideo, SVVideoQueueProviding, SVVideoVisibilityMonitorProviding;

@interface SVVideoTransitionManager : NSObject

{
    id <SVPlaybackTransitionCoordinatorFactory> _transitionCoordinatorFactory;
    id <SVVideoVisibilityMonitorProviding> _visibilityMonitorProviding;
    id <SVVideoQueueProviding> _queueProvider;
    NSMutableArray *_pendingVideos;
    NSMutableArray *_transitionObservers;
    SVPlaybackTransition *_activeTransition;
    id <SVVideo> _visibleVideo;
}

@property (nonatomic, readonly) id <SVPlaybackTransitionCoordinatorFactory> transitionCoordinatorFactory;
@property (nonatomic, readonly) id <SVVideoVisibilityMonitorProviding> visibilityMonitorProviding;
@property (nonatomic, readonly) id <SVVideoQueueProviding> queueProvider;
@property (nonatomic, readonly) NSMutableArray *pendingVideos;
@property (nonatomic, readonly) NSMutableArray *transitionObservers;
@property (retain, nonatomic) SVPlaybackTransition *activeTransition;
@property (retain, nonatomic) id <SVVideo> visibleVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addTransitionObserver:(id)arg1;
- (void)removeTransitionObserver:(id)arg1;
- (void)transitionToVideo:(id)arg1;
- (id)initWithTransitionCoordinatorFactory:(id)arg1 visibilityMonitorProviding:(id)arg2;
- (void)performNextTransition;

@end
