/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class MSPSharedTripBlacklist, MSPSharedTripRelay, MapsNotificationCenter, NSArray, NSMutableDictionary, NSString, NSTimer;

@protocol MSPReceiverETAControllerDelegate;

__attribute__((visibility("hidden")))
@interface MSPReceiverETAController : NSObject

{
    NSMutableDictionary *_sharedSessions;
    NSMutableDictionary *_sharedNavStates;
    NSMutableDictionary *_temporaryNavStates;
    MapsNotificationCenter *_mapsNotificationCenter;
    MSPSharedTripRelay *_idsRelay;
    MSPSharedTripBlacklist *_blockedList;
    NSTimer *_cleanupTimer;
    id <MSPReceiverETAControllerDelegate> _delegate;
}

@property (nonatomic, readonly) NSArray *allTrips;
@property (weak, nonatomic) id <MSPReceiverETAControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cleanTimer;
- (void)blockSharedTrip:(id)arg1;
- (id)initWithRelay:(id)arg1;
- (void)_setNotificationCenter:(id)arg1;
- (void)subscribeToUpdatesToSharedTrip:(id)arg1;
- (void)unsubscribeFromUpdatesToSharedTrip:(id)arg1;
- (void)updateContacts;
- (void)_cleanGroup:(id)arg1;
- (void)_resolveContactIfNeeded:(id)arg1 fromId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_allowMessageWithState:(id)arg1 forGroup:(id)arg2 fromID:(id)arg3;
- (_Bool)_cleanUpNecessaryForGroup:(id)arg1;
- (void)_cleanupIfNecessary;
- (void)_updateDelegateWithUpdateState:(id)arg1 to:(id)arg2 freshAvailable:(_Bool)arg3;
- (void)_showOrUpdateNotificationIfNeeded:(id)arg1;
- (void)_updateData:(id)arg1 forGroup:(id)arg2 fromID:(id)arg3;
- (void)storageController:(id)arg1 updatedSharedTripGroupStorage:(id)arg2;
- (void)relay:(id)arg1 receiveData:(id)arg2 info:(id)arg3 fromID:(id)arg4;
- (void)relay:(id)arg1 sharingClosed:(id)arg2;
- (void)groupSession:(id)arg1 participantDidJoin:(id)arg2;
- (void)groupSession:(id)arg1 participantDidLeave:(id)arg2;
- (void)groupSessionEnded:(id)arg1;

@end
