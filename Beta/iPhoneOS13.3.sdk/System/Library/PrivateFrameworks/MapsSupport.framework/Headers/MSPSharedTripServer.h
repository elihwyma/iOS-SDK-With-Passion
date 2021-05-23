/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class MSPReceiverETAController, MSPSenderETAController, MSPSharedTripRelay, NSMutableSet, NSString, NSXPCListener;

@protocol OS_dispatch_queue;

@interface MSPSharedTripServer : NSObject

{
    MSPSenderETAController *_sendingController;
    MSPReceiverETAController *_receivingController;
    MSPSharedTripRelay *_idsRelay;
    NSXPCListener *_listener;
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)connections;
- (void)checkin;
- (void)createXPCListener;
- (void)createControllers;
- (void)cleanConnections;
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
- (void)_setNotificationCenter:(id)arg1;
- (void)etaController:(id)arg1 sharedTripDidBecomeAvailable:(id)arg2;
- (void)etaController:(id)arg1 didUpdateDestinationForSharedTrip:(id)arg2;
- (void)etaController:(id)arg1 didUpdateETAForSharedTrip:(id)arg2;
- (void)etaController:(id)arg1 didUpdateRouteForSharedTrip:(id)arg2;
- (void)etaController:(id)arg1 didUpdateReachedDestinationForSharedTrip:(id)arg2;
- (void)etaController:(id)arg1 sharedTripDidClose:(id)arg2;
- (void)etaController:(id)arg1 sharedTripDidBecomeUnavailable:(id)arg2;
- (void)senderController:(id)arg1 didInvalidateSharedTripWithError:(id)arg2;
- (void)invalidateActiveHandlesForSenderController:(id)arg1;
- (void)senderController:(id)arg1 sendMessage:(id)arg2 toParticipant:(id)arg3;
- (void)senderController:(id)arg1 sendMessage:(id)arg2 toGroup:(id)arg3;
- (void)relay:(id)arg1 accountStatusChanged:(_Bool)arg2;

@end
