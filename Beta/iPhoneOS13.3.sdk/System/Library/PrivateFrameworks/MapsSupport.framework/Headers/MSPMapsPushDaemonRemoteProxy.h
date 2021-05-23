/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class MSPUserRoutingPreferences, NSHashTable, NSString, NSXPCConnection;

@interface MSPMapsPushDaemonRemoteProxy : NSObject

{
    NSXPCConnection *_connection;
    NSHashTable *_observers;
    MSPUserRoutingPreferences *_cachedUserRoutingPreferences;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)_connection;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)checkin;
- (void)openConnection;
- (void)closeConnection;
- (void)_connectToDaemonIfNeeded;
- (id)_remoteObjectProxy;
- (void)_clearConnection;
- (void)fetchHistorySerializedRepresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)commitHistorySerializedRepresentation:(id)arg1 reapingTombstones:(_Bool)arg2 earliestKnownSyncDate:(id)arg3 operationIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)eraseHistorySerializedRepresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchLastKnownHistoryOperationIdentifier:(CDUnknownBlockType)arg1;
- (void)favoritesDidChange;
- (void)historyDidChange;
- (void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3;
- (void)fetchPinnedPlacesSerializedRepresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)commitPinnedPlacesSerializedRepresentation:(id)arg1 operationIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)erasePinnedPlacesSerializedRepresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchLastKnownPinnedPlacesOperationIdentifier:(CDUnknownBlockType)arg1;
- (void)fetchCollectionsSerializedRepresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)commitCollectionsSerializedRepresentation:(id)arg1 operationIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchLastKnownCollectionsOperationIdentifier:(CDUnknownBlockType)arg1;
- (void)eraseCollectionsSerializedRepresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchFavoritesSerializedRepresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)commitFavoritesSerializedRepresentation:(id)arg1 reapingTombstones:(_Bool)arg2 operationIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchLastKnownFavoritesOperationIdentifier:(CDUnknownBlockType)arg1;
- (void)eraseFavoritesSerializedRepresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)testByNotingHistoryChangedOnDisk;
- (void)noteMapstoolChangedHistoryOnDisk;
- (void)noteMapstoolChangedFavoritesOnDisk;
- (void)registerForTopic;
- (void)simulateProblemResolution;
- (void)fetchProblemStatus;
- (void)shouldUseDevAPNS:(CDUnknownBlockType)arg1;
- (void)setShouldUseDevAPNS:(_Bool)arg1;
- (void)fetchDevicePushToken:(CDUnknownBlockType)arg1;
- (void)fetchDownloadedAnnouncements:(CDUnknownBlockType)arg1;
- (void)fetchAnnouncementsFilePath:(CDUnknownBlockType)arg1;
- (void)fetchAnnouncementsURLPath:(CDUnknownBlockType)arg1;
- (void)updateAnnouncements:(CDUnknownBlockType)arg1;
- (void)updateActiveAnnouncement;
- (void)simulateAnnouncement:(id)arg1 afterDelay:(double)arg2;
- (void)clearCurrentAnnouncement;
- (void)clearShownAnnouncements;
- (void)resetAnnouncements;
- (void)fetchCurrentAnnouncement:(CDUnknownBlockType)arg1;
- (void)fetchShownAnnouncements:(CDUnknownBlockType)arg1;
- (void)clearBulletinWithRecordID:(id)arg1;
- (void)problemStatusResponseWithNotificationID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeProblemStatusResponseWithNotificationID:(id)arg1;
- (void)showTrafficConditionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;
- (void)clearTrafficConditionsBulletin;
- (void)showMapsSuggestionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;
- (void)clearMapsSuggestionsBulletin;
- (void)showTrafficIncidentAlertWithID:(id)arg1 withReroute:(_Bool)arg2 title:(id)arg3 description:(id)arg4;
- (void)clearTrafficIncidentBulletinWithAlertID:(id)arg1;
- (void)clearTrafficIncidentsBulletin;
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1;
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1 afterDelay:(double)arg2;
- (void)clearPredictedRouteTrafficIncidentBulletin;
- (void)showLowFuelAlertBulletinForLowFuelDetails:(id)arg1;
- (void)clearLowFuelAlertBulletin;
- (void)showParkedCarBulletinForEvent:(id)arg1;
- (void)showParkedCarBulletinForEvent:(id)arg1 afterDelay:(double)arg2;
- (void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2;
- (void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 afterDelay:(double)arg3;
- (void)clearParkedCarBulletin;
- (oneway void)updateMapsModelBackupAttributesIfNeeded;
- (void)eraseRAPData;
- (void)handleMapsApplicationRemoval:(CDUnknownBlockType)arg1;
- (void)fetchUserRoutingPreferencesWithCompletion:(CDUnknownBlockType)arg1;
- (id)userRoutingPrefrencesFromSettingsWithFreshness:(double)arg1;
- (void)clearCachedUserRoutingPreferences;

@end
