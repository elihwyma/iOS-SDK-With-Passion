/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, SVTimeBasedAction, SVTimeline;

@protocol SVVideoControlsTimingProviding, SVVideoLoadingStateObserverFactory, SVVideoLoadingStateObserving, SVVideoPlaybackStateObserverFactory, SVVideoPlaybackStateObserving, SVVideoQueueProviding, SVVideoViewControllerProviding;

@interface SVVideoControlsVisibilityManager : NSObject

{
    _Bool _autoHidingEnabled;
    _Bool _shouldIgnoreControlItemHideability;
    SVTimeline *_timeline;
    id <SVVideoQueueProviding> _queueProvider;
    id <SVVideoControlsTimingProviding> _timingProvider;
    id <SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
    id <SVVideoPlaybackStateObserverFactory> _playbackStateObserverFactory;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
    id <SVVideoLoadingStateObserving> _loadingStateObserver;
    id <SVVideoPlaybackStateObserving> _playbackStateObserver;
    NSMutableSet *_items;
    SVTimeBasedAction *_autoAppearanceAction;
}

@property (nonatomic, readonly) SVTimeline *timeline;
@property (nonatomic, readonly) id <SVVideoQueueProviding> queueProvider;
@property (nonatomic, readonly) id <SVVideoControlsTimingProviding> timingProvider;
@property (nonatomic, readonly) id <SVVideoLoadingStateObserverFactory> loadingStateObserverFactory;
@property (nonatomic, readonly) id <SVVideoPlaybackStateObserverFactory> playbackStateObserverFactory;
@property (nonatomic, readonly) id <SVVideoViewControllerProviding> videoViewControllerProvider;
@property (retain, nonatomic) id <SVVideoLoadingStateObserving> loadingStateObserver;
@property (retain, nonatomic) id <SVVideoPlaybackStateObserving> playbackStateObserver;
@property (nonatomic, readonly) NSMutableSet *items;
@property (retain, nonatomic) SVTimeBasedAction *autoAppearanceAction;
@property (nonatomic) _Bool autoHidingEnabled;
@property (nonatomic) _Bool shouldIgnoreControlItemHideability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithTimeline:(id)arg1 queueProvider:(id)arg2 timingProvider:(id)arg3 loadingStateObserverFactory:(id)arg4 playbackStateObserverFactory:(id)arg5 videoViewControllerProvider:(id)arg6;
- (void)updateAutoHidingState;
- (void)scheduleAutoAppearanceWithTimeInterval:(double)arg1;
- (id)itemsPassingTest:(CDUnknownBlockType)arg1;
- (void)videoViewController:(id)arg1 willTransitionToVisibilityOfPlaybackControls:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)videoViewControllerWillAppear:(id)arg1;
- (void)videoViewControllerDidAppear:(id)arg1;
- (void)videoViewControllerWillDisappear:(id)arg1;

@end
