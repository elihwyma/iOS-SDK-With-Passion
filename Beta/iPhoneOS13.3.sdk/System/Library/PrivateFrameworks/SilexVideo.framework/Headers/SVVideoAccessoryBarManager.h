/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, NSTimer, SVTimeBasedAction, SVTimeline, SVVideoAccessoryBarView;

@protocol SVAccessoryItem, SVAccessoryItemContentManager, SVVideoControlsTimingProviding, SVVideoLoadingStateObserverFactory, SVVideoLoadingStateObserving, SVVideoPlaybackProgressObserverFactory, SVVideoPlaybackProgressObserving, SVVideoPlaybackStateObserverFactory, SVVideoPlaybackStateObserving, SVVideoQueueProviding;

@interface SVVideoAccessoryBarManager : NSObject

{
    SVVideoAccessoryBarView *_accessoryBarView;
    SVTimeline *_timeline;
    id <SVVideoControlsTimingProviding> _timingProvider;
    id <SVAccessoryItem> _nowPlayingItem;
    id <SVAccessoryItem> _moreFromItem;
    id <SVAccessoryItem> _upNextItem;
    id <SVAccessoryItem> _discoverMoreItem;
    id <SVVideoQueueProviding> _queueProvider;
    id <SVVideoPlaybackProgressObserverFactory> _playbackProgressObserverFactory;
    id <SVVideoPlaybackStateObserverFactory> _playbackStateObserverFactory;
    id <SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
    id <SVAccessoryItemContentManager> _contentManager;
    id <SVVideoPlaybackProgressObserving> _playbackProgressObserver;
    id <SVVideoPlaybackStateObserving> _playbackStateObserver;
    id <SVVideoLoadingStateObserving> _loadingStateObserver;
    SVTimeBasedAction *_upNextItemDisplayAction;
    NSTimer *_timer;
}

@property (nonatomic, readonly) SVVideoAccessoryBarView *accessoryBarView;
@property (nonatomic, readonly) SVTimeline *timeline;
@property (nonatomic, readonly) id <SVVideoControlsTimingProviding> timingProvider;
@property (nonatomic, readonly) id <SVAccessoryItem> nowPlayingItem;
@property (nonatomic, readonly) id <SVAccessoryItem> moreFromItem;
@property (nonatomic, readonly) id <SVAccessoryItem> upNextItem;
@property (nonatomic, readonly) id <SVAccessoryItem> discoverMoreItem;
@property (nonatomic, readonly) id <SVVideoQueueProviding> queueProvider;
@property (nonatomic, readonly) id <SVVideoPlaybackProgressObserverFactory> playbackProgressObserverFactory;
@property (nonatomic, readonly) id <SVVideoPlaybackStateObserverFactory> playbackStateObserverFactory;
@property (nonatomic, readonly) id <SVVideoLoadingStateObserverFactory> loadingStateObserverFactory;
@property (nonatomic, readonly) id <SVAccessoryItemContentManager> contentManager;
@property (retain, nonatomic) id <SVVideoPlaybackProgressObserving> playbackProgressObserver;
@property (retain, nonatomic) id <SVVideoPlaybackStateObserving> playbackStateObserver;
@property (retain, nonatomic) id <SVVideoLoadingStateObserving> loadingStateObserver;
@property (retain, nonatomic) SVTimeBasedAction *upNextItemDisplayAction;
@property (retain, nonatomic) NSTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithAccessoryBarView:(id)arg1 timeline:(id)arg2 timingProvider:(id)arg3 nowPlayingAccessoryItem:(id)arg4 moreFromAccessoryItem:(id)arg5 upNextAccessoryItem:(id)arg6 discoverMoreAccessoryItem:(id)arg7 playbackProgressObserverFactory:(id)arg8 playbackStateObserverFactory:(id)arg9 queueProvider:(id)arg10 loadingStateObserverFactory:(id)arg11 contentManager:(id)arg12;
- (void)updateAccessoryBarToStateForVideo:(id)arg1;
- (void)cancelScheduledNowPlayingOrMoreFromTransition;
- (void)cancelDisplayOfUpNextItem;
- (void)scheduleNowPlayingOrMoreFromTransitionIfNeeded;
- (void)scheduleDisplayOfUpNextItemWithInterval:(double)arg1;
- (void)scheduleMoreFromTransitionIfNeeded;
- (void)scheduleNowPlayingTransitionIfNeeded;
- (void)scheduleTransitionToLeadingItem:(id)arg1 withTimeInterval:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
