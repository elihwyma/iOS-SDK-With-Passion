/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPAVController, MPAVItem, MPQueueFeeder, MPRTCReportingSessionSummaryEvent, NSMutableDictionary, NSNumber, NSString;

@interface MPRTCReportingController : NSObject

{
    long long _currentInterfaceType;
    MPAVItem *_currentItem;
    _Bool _isReloadingWithPlaybackContext;
    MPQueueFeeder *_pendingFailureQueueFeeder;
    NSNumber *_tracklistStartUptime;
    MPRTCReportingSessionSummaryEvent *_tracklistSummaryEvent;
    NSMutableDictionary *_uniqueIdentifierToReportingSession;
    NSMutableDictionary *_uniqueIdentifierToSummaryEvent;
    int _clientType;
    NSString *_clientName;
    long long _clientVersion;
    MPAVController *_player;
}

@property (copy, nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) int clientType;
@property (nonatomic, readonly) long long clientVersion;
@property (weak, nonatomic, readonly) MPAVController *player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newHierarchyTokenFromParentToken:(id)arg1;
+ (long long)defaultClientVersion;

- (void)dealloc;
- (id)initWithPlayer:(id)arg1 clientName:(id)arg2 clientType:(int)arg3 clientVersion:(long long)arg4;
- (void)_avControllerBufferingStateDidChangeNotification:(id)arg1;
- (void)_avControllerDidReloadWithPlaybackContextNotification:(id)arg1;
- (void)_avControllerPlaylistManagerFailedToQueueNotification:(id)arg1;
- (void)_avControllerItemWillChangeNotification:(id)arg1;
- (void)_avControllerWillReloadWithPlaybackContextNotification:(id)arg1;
- (void)_avItemAssetLoadedNotification:(id)arg1;
- (void)_avItemSecureKeyDeliveryRequestDidFinishNotification:(id)arg1;
- (void)_avItemTypeDidChangeNotification:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_configureBaseEventPropertiesForEvent:(id)arg1;
- (void)_completeSetupForReportingSession:(id)arg1 avItem:(id)arg2;
- (void)_completeSetupForReportingSession:(id)arg1 avItem:(id)arg2 fallbackQueueFeeder:(id)arg3;
- (void)_initializeReportingSession:(id)arg1 forAVItem:(id)arg2;
- (void)_configureStartupStateForSummaryEvent:(id)arg1 withItem:(id)arg2;
- (void)_handleDeallocationForUniqueIdentifier:(id)arg1;
- (_Bool)_isAVItemReadyForReportingSessionInitialization:(id)arg1;
- (_Bool)_isAVItemReadyForReportingSessionSetupCompletion:(id)arg1;
- (id)_newReportingSession;
- (id)_preparedSummaryEventForAVItem:(id)arg1;
- (id)_reportingSessionForAVItem:(id)arg1;
- (void)_setPerceivedTotalStartupTimeForItem:(id)arg1 withSummaryEvent:(id)arg2;
- (id)_uniqueIdentifierForAVItem:(id)arg1;

@end
