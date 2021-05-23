/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <HearingUtilities/HUDeviceController.h>

@class AXDispatchTimer, AXRemoteHearingAidDevice, NSArray, NSObject, NSString, RPCompanionLinkClient, SFDeviceDiscovery;

@protocol HUNearbyControllerDelegate, OS_dispatch_queue;

@interface HUNearbyController : HUDeviceController

{
    _Bool _searching;
    _Bool _holdingMediaForConnection;
    _Bool _holdingPhoneForConnection;
    NSArray *_availableDevices;
    long long _state;
    id <HUNearbyControllerDelegate> _delegate;
    SFDeviceDiscovery *_deviceDiscovery;
    RPCompanionLinkClient *_client;
    AXRemoteHearingAidDevice *_localDevice;
    NSObject<OS_dispatch_queue> *_mediaQueue;
    AXDispatchTimer *_sendConnectionToCompanionTimer;
}

@property (copy, nonatomic) NSArray *availableDevices;
@property (retain, nonatomic) SFDeviceDiscovery *deviceDiscovery;
@property (retain, nonatomic) RPCompanionLinkClient *client;
@property (retain, nonatomic) AXRemoteHearingAidDevice *localDevice;
@property (nonatomic, getter=isSearching) _Bool searching;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaQueue;
@property (retain, nonatomic) AXDispatchTimer *sendConnectionToCompanionTimer;
@property (nonatomic) _Bool holdingMediaForConnection;
@property (nonatomic) _Bool holdingPhoneForConnection;
@property (nonatomic) long long state;
@property (weak, nonatomic) id <HUNearbyControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)stop;
- (void)start;
- (void)updateState;
- (void)mediaServerDied;
- (id)hearingAidForDeviceID:(id)arg1;
- (_Bool)representsLocalDevices;
- (void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2;
- (void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 andDeviceID:(id)arg3;
- (void)sendConnectionUpdateToPeers;
- (void)sendWriteToAllDevices:(id)arg1;
- (void)checkConnectionToHearingDevice:(CDUnknownBlockType)arg1;
- (void)checkConnectionPeers:(CDUnknownBlockType)arg1;
- (void)requestHandoffForMedia;
- (void)sendMessageToAllDevices:(id)arg1;
- (void)callStatusDidChange:(id)arg1;
- (void)routesDidChange:(id)arg1;
- (void)mediaPlaybackDidChange:(id)arg1;
- (void)unregisterMediaNotifications;
- (void)registerMediaNotifications;
- (_Bool)hasConnectionToHearingDevice;
- (void)requestConnectionForReason:(long long)arg1;
- (void)sendConnectionToCompanionIfPossible;
- (void)shouldRequestAudioConnectionForCall:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sendConnectionToCompanionIfPossible:(_Bool)arg1;
- (void)sendMessage:(id)arg1 toDevices:(id)arg2;
- (void)getConnectedPeer:(CDUnknownBlockType)arg1;
- (_Bool)shouldRelinquishConnectionForReason:(long long)arg1;
- (void)updateStateOnDeviceQueue;
- (id)connectedPeer;
- (id)nearbyDeviceWithIdentifier:(id)arg1;
- (id)nearbyDeviceWithPeerDevice:(id)arg1;
- (id)deviceWithIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
- (unsigned long long)currentConnectionStatus;
- (void)relinquishConnectionForReason:(long long)arg1;
- (void)sendWrite:(id)arg1 toDevices:(id)arg2;
- (id)hearingDevice;
- (void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 andDeviceID:(id)arg3 toDevices:(id)arg4;
- (void)checkPairedPeerExists:(CDUnknownBlockType)arg1;

@end
