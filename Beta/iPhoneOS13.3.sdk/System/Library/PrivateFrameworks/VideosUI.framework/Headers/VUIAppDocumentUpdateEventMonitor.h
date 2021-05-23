/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMapTable;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentUpdateEventMonitor : NSObject

{
    _Bool _appIsInForeground;
    _Bool _pendingPlayactivity;
    _Bool _ignoreWLKPlaybackReportNotification;
    int _playbackReportToken;
    NSMapTable *_observerMapTable;
    NSDate *_lastProcesssedPlayActivity;
}

@property (retain, nonatomic) NSMapTable *observerMapTable;
@property (nonatomic) int playbackReportToken;
@property (retain, nonatomic) NSDate *lastProcesssedPlayActivity;

+ (id)sharedMonitor;
+ (_Bool)_isAppRefreshEventType:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void)removeObserver:(id)arg1;
- (void)_handleLocationDidChangeNotification:(id)arg1;
- (void)_notifyObserversOfEvent:(id)arg1;
- (void)_handleAppWillEnterForegroundNotification:(id)arg1;
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;
- (void)_handleSettingsDidChangeNotification:(id)arg1;
- (void)_handleAppLibraryDidChangeNotification:(id)arg1;
- (void)_handleUpNextRequestDidFinishNotification:(id)arg1;
- (void)_handlePurchaseFlowDidFinishNotification:(id)arg1;
- (void)_handleSubscriptionDidChangeNotification:(id)arg1;
- (void)_handleFavoritesRequestDidFinishNotification:(id)arg1;
- (void)_handleRemoveFromPlayHistoryRequestDidFinishNotification:(id)arg1;
- (void)_handleClearFromPlayHistoryRequestDidFinishNotification:(id)arg1;
- (void)_handleAccountDidChangeNotification:(id)arg1;
- (void)_handleRestrictionsDidChangeNotification:(id)arg1;
- (void)_handleUTSKDidChangeNotification:(id)arg1;
- (void)_handlePreferredVideoFormatDidChangeNotification:(id)arg1;
- (void)_handlePlayHistoryUpdatedNotification:(id)arg1;
- (void)_handleLocationAuthorizationDidChangeNotification:(id)arg1;
- (void)_handleAppDidEnterBackgroundNotification:(id)arg1;
- (void)_handleClearPlayHistoryNotification:(id)arg1;
- (void)_handleNowPlayingWillStartNotification:(id)arg1;
- (void)_handleNowPlayingDidEndNotification:(id)arg1;
- (void)_handlePurchaseRequestSucceededNotification:(id)arg1;
- (void)_handlePlaybackReportNotification;
- (void)_notifyObserver:(id)arg1 ofRefreshEvent:(id)arg2;
- (void)_postSubscriptionNotification:(id)arg1 interruptedOfferDetails:(id)arg2 error:(id)arg3;
- (void)addObserver:(id)arg1 forEventDescriptors:(id)arg2;
- (void)_handleEntitlementsDidChangeNotification:(id)arg1;

@end
