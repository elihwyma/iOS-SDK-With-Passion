/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class GEOObserverHashTable, NSArray, NSMutableArray, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface MSPSharedTripService : NSObject

{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    GEOObserverHashTable *_receivingObservers;
    GEOObserverHashTable *_sendingObservers;
    NSMutableArray *_receivedTrips;
    _Bool _sendingAccountAvailable;
}

@property (nonatomic, readonly) NSArray *receivedTrips;
@property (nonatomic, readonly) _Bool hasValidSharingAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)checkin;
- (id)_remoteObjectProxy;
- (void)fetchAccountValidWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSendingIdentityWithCompletion:(CDUnknownBlockType)arg1;
- (void)startSharingTripWithContacts:(id)arg1;
- (void)stopSharingTripWithContacts:(id)arg1;
- (void)startSharingTripWithMessagesContacts:(id)arg1;
- (void)stopSharingTripWithMessagesContacts:(id)arg1;
- (void)startSharingTripWithMessagesGroup:(id)arg1;
- (void)stopSharingTripWithMessagesGroup:(id)arg1;
- (void)stopSharingTrip;
- (void)fetchActiveHandlesWithCompletion:(CDUnknownBlockType)arg1;
- (void)subscribeToSharedTripUpdatesWithIdentifier:(id)arg1;
- (void)unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg1;
- (void)fetchSharedTripsWithCompletion:(CDUnknownBlockType)arg1;
- (void)blockSharedTrip:(id)arg1;
- (void)accountAvailabilityDidChange:(_Bool)arg1;
- (void)sharedTripInvalidatedWithError:(id)arg1;
- (void)invalidateActiveHandles;
- (void)sendMessage:(id)arg1 toParticipant:(id)arg2;
- (void)sendMessage:(id)arg1 toGroup:(id)arg2;
- (void)sharedTripDidBecomeAvailable:(id)arg1;
- (void)sharedTripDidBecomeUnavailable:(id)arg1;
- (void)sharedTripDidClose:(id)arg1;
- (void)destinationDidUpdateForSharedTrip:(id)arg1;
- (void)etaDidUpdateForSharedTrip:(id)arg1;
- (void)routeDidUpdateForSharedTrip:(id)arg1;
- (void)destinationReachedDidUpdateForSharedTrip:(id)arg1;
- (void)initializeTrips;
- (void)initializeAccountAvailability;
- (void)_fetchSharedTripsOnQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_fetchAccountValidWithCompletion:(CDUnknownBlockType)arg1;
- (void)_checkin;
- (void)_fetchSendingIdentityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startSharingTripWithContacts:(id)arg1;
- (void)_stopSharingTripWithContacts:(id)arg1;
- (void)_startSharingTripWithMessagesContacts:(id)arg1;
- (void)_stopSharingTripWithMessagesContacts:(id)arg1;
- (void)_startSharingTripWithMessagesGroup:(id)arg1;
- (void)_stopSharingTripWithMessagesGroup:(id)arg1;
- (void)_stopSharingTrip;
- (void)_fetchActiveHandlesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchActiveHandlesOnQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_fetchSharedTripsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_subscribeToSharedTripUpdatesWithIdentifier:(id)arg1;
- (void)_unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg1;
- (void)_blockSharedTrip:(id)arg1;
- (void)_insertOrUpdateTrip:(id)arg1;
- (void)_openConnectionIfNeeded;
- (void)addReceivingObserver:(id)arg1;
- (void)removeReceivingObserver:(id)arg1;
- (void)addSendingObserver:(id)arg1;
- (void)removeSendingObserver:(id)arg1;

@end
