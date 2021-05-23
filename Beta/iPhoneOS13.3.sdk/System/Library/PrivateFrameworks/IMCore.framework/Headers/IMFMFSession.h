/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class FMFDevice, FMFSession, NSString;

@interface IMFMFSession : NSObject

{
    NSString *_establishingAccountID;
    FMFSession *_session;
    FMFDevice *_activeDevice;
    unsigned long long _fmfProvisionedState;
}

@property (retain, nonatomic) FMFDevice *activeDevice;
@property (retain, nonatomic) FMFSession *session;
@property (retain, nonatomic) NSString *establishingAccountID;
@property (nonatomic) unsigned long long fmfProvisionedState;
@property (nonatomic, readonly) _Bool restrictLocationSharing;
@property (nonatomic, readonly) _Bool disableLocationSharing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)_accountStore;
- (void)didReceiveLocation:(id)arg1;
- (void)didStartSharingMyLocationWithHandle:(id)arg1;
- (void)didStopSharingMyLocationWithHandle:(id)arg1;
- (void)didStartAbilityToGetLocationForHandle:(id)arg1;
- (void)didStopAbilityToGetLocationForHandle:(id)arg1;
- (void)didUpdateHidingStatus:(_Bool)arg1;
- (void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (id)locationForHandleOrSibling:(id)arg1;
- (void)makeThisDeviceActiveDevice;
- (id)timedOfferExpirationForChat:(id)arg1;
- (_Bool)handleIsFollowingMyLocation:(id)arg1;
- (void)stopSharingWithHandle:(id)arg1 inChat:(id)arg2;
- (void)startSharingWithHandle:(id)arg1 inChat:(id)arg2 untilDate:(id)arg3;
- (_Bool)fmfHandleIsSharingLocationWithMe:(id)arg1;
- (id)locationForHandle:(id)arg1;
- (void)refreshLocationForHandle:(id)arg1 inChat:(id)arg2;
- (id)_bestAccountForAddresses:(id)arg1;
- (_Bool)handleIsSharingLocationWithMe:(id)arg1;
- (id)fmfHandlesForChat:(id)arg1;
- (id)allSiblingFMFHandlesForChat:(id)arg1;
- (_Bool)chatHasParticipantsFollowingMyLocation:(id)arg1;
- (_Bool)allChatParticipantsFollowingMyLocation:(id)arg1;
- (_Bool)chatHasParticipantsSharingLocationWithMe:(id)arg1;
- (_Bool)chatHasSiblingParticipantsSharingLocationWithMe:(id)arg1;
- (_Bool)allChatParticipantsSharingLocationWithMe:(id)arg1;
- (void)startSharingWithChat:(id)arg1 untilDate:(id)arg2;
- (void)stopSharingWithChat:(id)arg1;
- (void)startTrackingLocationForChat:(id)arg1;
- (void)stopTrackingLocationForChat:(id)arg1;
- (Class)__FMFSessionClass;
- (void)_updateActiveDevice;
- (_Bool)imIsProvisionedForLocationSharing;
- (void)_startSharingWithFMFHandles:(id)arg1 inChat:(id)arg2 untilDate:(id)arg3;
- (void)_stopSharingWithFMFHandles:(id)arg1 inChat:(id)arg2;
- (id)locationForFMFHandle:(id)arg1;
- (id)_callerIDForChat:(id)arg1;
- (void)_postNotification:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (_Bool)fmfHandleIsFollowingMyLocation:(id)arg1;
- (id)fmfGroupIdGroup;
- (id)fmfGroupIdOneToOne;
- (void)_postRelationshipStatusDidChangeNotificationWithHandle:(id)arg1;
- (void)startTrackingLocationForHandle:(id)arg1;
- (void)stopTrackingLocationForHandle:(id)arg1;
- (void)refreshLocationForChat:(id)arg1;
- (void)friendshipRequestReceived:(id)arg1;
- (void)friendshipWasRemoved:(id)arg1;

@end
