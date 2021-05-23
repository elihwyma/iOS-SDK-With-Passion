/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSString;

@protocol NSSNewsAnalyticsSessionManager, NUExternalAnalyticsEventStreamObserver;

@interface NUExternalAnalyticsVideoPlayerEventTracker : NSObject <Swift>

{
    id <NSSNewsAnalyticsSessionManager> _sessionManager;
    id <NUExternalAnalyticsEventStreamObserver> _observer;
    NSString *_referrer;
}

@property (nonatomic, readonly) id <NSSNewsAnalyticsSessionManager> sessionManager;
@property (weak, nonatomic, readonly) id <NUExternalAnalyticsEventStreamObserver> observer;
@property (copy, nonatomic, readonly) NSString *referrer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)videoDidAppearWithVideoItem:(id)arg1;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackPausedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackResumedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackFinishedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (id)initWithSessionManager:(id)arg1 observer:(id)arg2 referrer:(id)arg3;
- (id)_articleViewEventWithQueryParametersForVideoItem:(id)arg1;
- (void)_submitEventWithQueryParameters:(id)arg1;
- (id)_videoPlaybackEventQueryParametersForVideoItem:(id)arg1 streamUserAction:(id)arg2;
- (id)_eventWithQueryParameters:(id)arg1;
- (id)_defaultQueryParametersWithEventType:(id)arg1;
- (void)_populateQueryParameters:(id)arg1 withVideoItem:(id)arg2;

@end
