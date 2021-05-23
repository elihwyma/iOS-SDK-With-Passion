/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <NSObject.h>

@class AXDispatchTimer, HCXPCMessage, NSDictionary, NSString;

@protocol OS_os_transaction;

@interface AXHAController : NSObject

{
    _Bool _isListening;
    AXDispatchTimer *_liveListenLevelsTimer;
    NSString *_pairedDeviceUUID;
    NSObject<OS_os_transaction> *_transaction;
    NSDictionary *_availableDevicesDescription;
    HCXPCMessage *_liveListenMessage;
}

@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) NSString *pairedDeviceUUID;
@property (retain, nonatomic) NSDictionary *availableDevicesDescription;
@property (retain, nonatomic) HCXPCMessage *liveListenMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedController;

- (id)init;
- (void)dealloc;
- (void)willSwitchUser;
- (void)availableRemoteControllersDidChange;
- (id)connectToControllerWithID:(id)arg1;
- (void)setPairedHearingAid:(id)arg1;
- (_Bool)hearingAidsPaired;
- (void)setListenForAvailableDeviceUpdates:(_Bool)arg1;
- (id)currentDeviceController;
- (id)liveListenController;
- (void)readLiveListenLevels;
- (void)updateNearbyDeviceAvailability;
- (void)sendUpdatesForProperties:(id)arg1 excludingClient:(id)arg2;
- (void)connectToPairedDevice;
- (void)transitionToPeer;
- (void)liveListenControllerStateDidChange;
- (id)registerForAvailableDevicesUpdates:(id)arg1;
- (id)registerForDeviceUpdates:(id)arg1;
- (id)readDeviceProperty:(id)arg1;
- (id)writeDeviceProperty:(id)arg1;
- (id)readAvailableDevices:(id)arg1;
- (id)readAvailableControllers:(id)arg1;
- (id)disconnectAndForceSlave:(id)arg1;
- (id)toggleLiveListen:(id)arg1;
- (id)registerForLiveListenUpdates:(id)arg1;

@end
