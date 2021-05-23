/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSOrderedSet, NSSNewsAnalyticsEventAnnotator, NSString, NTPBEvent, NUNewsAnalyticsVideoPlayerEventTrackerConfiguration;

@protocol NSSNewsAnalyticsPBEventStreamObserver, NSSNewsAnalyticsSessionManager, NUVideoItem;

@interface NUNewsAnalyticsVideoPlayerEventTracker : NSObject <Swift>

{
    _Bool _playbackFinishedForLastVideo;
    _Bool _videoPlayerIsVisible;
    int _currentVideoPlayMethod;
    id <NSSNewsAnalyticsPBEventStreamObserver> _observer;
    NUNewsAnalyticsVideoPlayerEventTrackerConfiguration *_configuration;
    NSSNewsAnalyticsEventAnnotator *_eventAnnotator;
    id <NSSNewsAnalyticsSessionManager> _sessionManager;
    NSOrderedSet *_videoItems;
    id <NUVideoItem> _currentVideo;
    NTPBEvent *_articleHostViewExposureEvent;
}

@property (copy, nonatomic, readonly) NUNewsAnalyticsVideoPlayerEventTrackerConfiguration *configuration;
@property (weak, nonatomic, readonly) id <NSSNewsAnalyticsPBEventStreamObserver> observer;
@property (nonatomic, readonly) NSSNewsAnalyticsEventAnnotator *eventAnnotator;
@property (weak, nonatomic, readonly) id <NSSNewsAnalyticsSessionManager> sessionManager;
@property (copy, nonatomic, readonly) NSOrderedSet *videoItems;
@property (nonatomic) _Bool playbackFinishedForLastVideo;
@property (copy, nonatomic) id <NUVideoItem> currentVideo;
@property (nonatomic) int currentVideoPlayMethod;
@property (retain, nonatomic) NTPBEvent *articleHostViewExposureEvent;
@property (nonatomic, getter=isVideoPlayerVisible) _Bool videoPlayerIsVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)videoDidAppearWithVideoItem:(id)arg1;
- (void)videoDidDisappearWithVideoItem:(id)arg1;
- (void)playbackInitiatedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackPausedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackResumedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackFinishedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackFailedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)muteStateChanged:(_Bool)arg1 withVideoItem:(id)arg2 metadata:(id)arg3;
- (void)userEngagedWithCallToActionBarWithVideoItem:(id)arg1;
- (void)userEngagedWithDiscoverMoreButtonWithVideoItem:(id)arg1;
- (void)userEngagedWithNowPlayingButtonWithVideoItem:(id)arg1;
- (void)userEngagedWithReplayButtonWithVideoItem:(id)arg1;
- (void)userEngagedWithAdvanceButtonWithVideoItem:(id)arg1;
- (void)impressionThresholdReachedForVideoAdWithMetadata:(id)arg1;
- (void)playbackPausedForVideoAdWithMetadata:(id)arg1;
- (void)playbackFinishedForVideoAdWithMetadata:(id)arg1;
- (void)userSkippedPlaybackOfVideoAdWithMetadata:(id)arg1;
- (void)userEngagedWithCallToActionOfVideoAdWithMetadata:(id)arg1;
- (void)videoPlayerDidBecomeVisible;
- (void)videoPlayerDidBecomeInvisible;
- (id)initWithConfiguration:(id)arg1 observer:(id)arg2 sessionManager:(id)arg3 userIDProvider:(id)arg4 videoItems:(id)arg5;
- (id)articleViewingSessionIDForArticleWithID:(id)arg1;
- (void)_createArticleHostViewExposureEventConfiguredForVideoItem:(id)arg1 withArticlePresentationReason:(int)arg2;
- (void)_finishAndSubmitArticleHostViewExposureEvent;
- (id)_mediaEngageEventWithUserAction:(int)arg1 configuredForVideoItem:(id)arg2;
- (id)_eventObjectWithMediaEngageEvent:(id)arg1;
- (void)_submitEventForEventObject:(id)arg1;
- (id)_mediaEngageCompleteEventConfiguredForVideoItem:(id)arg1;
- (int)_rankInVideoPlaylistOfVideoItem:(id)arg1;
- (id)_widgetEngagementForVideoItem:(id)arg1;
- (id)_adImpressionEventConfiguredWithMetadata:(id)arg1;
- (id)_eventObjectWithAdImpressionEvent:(id)arg1;
- (id)_adEngagementEventWithType:(int)arg1 configuredWithMetadata:(id)arg2;
- (id)_eventObjectWithAdEngagementEvent:(id)arg1;
- (id)_currentArticleID;
- (id)_currentArticleViewingSessionID;
- (id)_eventForEventObject:(id)arg1;
- (void)_submitEvent:(id)arg1;
- (id)_articleViewingSessionIDForVideoItem:(id)arg1;
- (id)_linkTapEventWithLinkType:(int)arg1 forVideoItem:(id)arg2;
- (id)_eventObjectWithLinkTapEvent:(id)arg1;

@end
