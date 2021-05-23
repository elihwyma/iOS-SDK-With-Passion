/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class FMXPCServiceDescription, FMXPCSession, NSDate, NSDictionary, NSOperationQueue, NSSet, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source, SPOwnerSessionXPCProtocol;

@interface SPOwnerSession : NSObject

{
    CDUnknownBlockType beaconAddedBlock;
    CDUnknownBlockType beaconRemovedBlock;
    CDUnknownBlockType beaconsChangedBlock;
    CDUnknownBlockType latestLocationsUpdatedBlock;
    NSSet *_locationSources;
    FMXPCServiceDescription *_serviceDescription;
    FMXPCSession *_session;
    id <SPOwnerSessionXPCProtocol> _proxy;
    id <SPOwnerSessionXPCProtocol> _userAgentProxy;
    NSSet *_allBeaconsCache;
    NSSet *_clientObservedBeacons;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_notificationQueue;
    id _beaconsChangedNotificationToken;
    id _tagSeparationBeaconsChangedNotificationToken;
    id _beaconEstimatedLocationChangedNotificationToken;
    NSDictionary *_locationCache;
    NSObject<OS_dispatch_source> *_locationFetchDispatchTimer;
    NSObject<OS_dispatch_source> *_connectionExpiryDispatchTimer;
    NSDate *_fetchLimit;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id <SPOwnerSessionXPCProtocol> proxy;
@property (retain, nonatomic) id <SPOwnerSessionXPCProtocol> userAgentProxy;
@property (retain, nonatomic) NSSet *allBeaconsCache;
@property (retain, nonatomic) NSSet *clientObservedBeacons;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSOperationQueue *notificationQueue;
@property (weak, nonatomic) id beaconsChangedNotificationToken;
@property (weak, nonatomic) id tagSeparationBeaconsChangedNotificationToken;
@property (weak, nonatomic) id beaconEstimatedLocationChangedNotificationToken;
@property (retain, nonatomic) NSDictionary *locationCache;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *locationFetchDispatchTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *connectionExpiryDispatchTimer;
@property (copy, nonatomic) NSDate *fetchLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSSet *locationSources;
@property (copy, nonatomic) CDUnknownBlockType beaconsChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType beaconAddedBlock;
@property (copy, nonatomic) CDUnknownBlockType beaconRemovedBlock;
@property (copy, nonatomic) CDUnknownBlockType latestLocationsUpdatedBlock;
@property (copy, nonatomic, readonly) NSSet *allBeacons;

- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (id)remoteInterface;
- (oneway void)beaconForUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)forceDistributeKeysWithCompletion:(CDUnknownBlockType)arg1;
- (void)allBeaconsWithCompletion:(CDUnknownBlockType)arg1;
- (void)unacceptedBeaconsWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeBeacon:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)executeCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)locationFetchTimerFired;
- (void)updateAllBeaconLocations;
- (void)connectionExpiryTimerFired;
- (void)updateAllBeacons;
- (void)setConnectionExpiryDispatchTimerWithInterval:(double)arg1;
- (void)startRefreshing;
- (void)finishBeaconFuture:(id)arg1 beaconUUID:(id)arg2;
- (void)addBeaconChangedListener:(id)arg1 beaconUUID:(id)arg2 taskName:(id)arg3 commandIdentifier:(id)arg4 commandIssueDate:(id)arg5;
- (void)setLocationFetchDispatchTimerWithInterval:(double)arg1;
- (void)locationsForBeacons:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateConnectionExpiryDispatchTimerWithBeacons:(id)arg1;
- (void)startRefreshingBeacons:(id)arg1;
- (void)stopRefreshing;
- (id)executeCommand:(id)arg1;
- (void)shareBeacon:(id)arg1 handles:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)rawSearchResultsForBeacon:(id)arg1 dateInterval:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
