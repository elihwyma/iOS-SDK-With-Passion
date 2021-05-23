/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPAVController, MPAVItem, MPCReportingController, NSData, NSOperationQueue, NSString;

@interface MPCReportingPlaybackObserver : NSObject

{
    NSData *_currentJingleReportingTimedMetadata;
    _Bool _hasPendingContainerChange;
    _Bool _hasSetLastPlayEventTimeStamp;
    _Bool _isReloadingWithPlaybackContext;
    _Bool _itemDidChangeWhenReloadingPlaybackContext;
    _Bool _isScrubbing;
    MPAVItem *_itemForCurrentTimeChange;
    NSOperationQueue *_recordEventOperationQueue;
    NSString *_itemContentItemIDForLastPlayEventEndTime;
    double _lastPlayEventEndTimeForCurrentItem;
    double _lastPlayEventTimeStamp;
    _Bool _shouldReportAsPlaying;
    double _startTimeForCurrentTimeChange;
    _Bool _offline;
    _Bool _SBEnabled;
    MPAVController *_player;
    MPCReportingController *_reportingController;
    unsigned long long _storeAccountID;
    NSString *_storeFrontID;
}

@property (nonatomic, readonly) MPAVController *player;
@property (nonatomic, getter=isOffline) _Bool offline;
@property (nonatomic, readonly) MPCReportingController *reportingController;
@property (nonatomic, getter=isSBEnabled) _Bool SBEnabled;
@property (nonatomic) unsigned long long storeAccountID;
@property (copy, nonatomic) NSString *storeFrontID;

- (void)dealloc;
- (void)_playerItemDidChangeNotification:(id)arg1;
- (void)_playerItemWillChangeNotification:(id)arg1;
- (id)initWithPlayer:(id)arg1 reportingController:(id)arg2;
- (id)newPlayActivityEvent;
- (void)recordPlayActivityEvents:(id)arg1 forEventSource:(id)arg2;
- (void)_itemReportingJingleTimedMetadataDidChangeNotification:(id)arg1;
- (void)_playerPlaybackStateDidChangeNotification:(id)arg1;
- (void)_playerDidReloadWithPlaybackContextNotification:(id)arg1;
- (void)_playerWillReloadWithPlaybackContextNotification:(id)arg1;
- (void)_playerDidSetCurrentTimeNotification:(id)arg1;
- (void)_playerWillSetCurrentTimeNotification:(id)arg1;
- (void)_playerItemDidChangeWhenReloadingPlaybackContextNotification:(id)arg1;
- (id)_newReportingPlaybackActivityEventForPlayActivityEvent:(id)arg1 eventSource:(id)arg2;
- (double)_itemStartTimeForItem:(id)arg1;
- (double)_itemEndTimeForItem:(id)arg1 withProposedEndTime:(double)arg2;
- (void)_setLastPlayEventEndTime:(double)arg1 forItemContentItemID:(id)arg2;
- (void)_reportPlaybackEndedForTimeoutWithItem:(id)arg1;
- (void)_sendPlaybackEndNotification:(double)arg1 endTime:(double)arg2;
- (void)_sendPlaybackStartNotification;
- (void)didHitPlaybackTimeoutEndingPlayback:(_Bool)arg1 withCurrentItem:(id)arg2;
- (void)didTransitionItemForBan:(id)arg1;
- (void)recordUserSeekFromTime:(double)arg1 toTime:(double)arg2 forItem:(id)arg3;
- (void)willHitPlaybackTimeoutEndingPlayback:(_Bool)arg1 withCurrentItem:(id)arg2;
- (void)willTransitionItemForBan:(id)arg1;

@end
