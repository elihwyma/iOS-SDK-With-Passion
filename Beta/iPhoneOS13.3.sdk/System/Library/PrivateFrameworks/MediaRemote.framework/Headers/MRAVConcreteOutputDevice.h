/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRAVOutputDevice.h>

@class AVOutputDevice, MRAVOutputDeviceSourceInfo, NSData, NSDictionary, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface MRAVConcreteOutputDevice : MRAVOutputDevice

{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    AVOutputDevice *_avOutputDevice;
    MRAVOutputDeviceSourceInfo *_sourceInfo;
    NSString *_uid;
    _Bool _overrideUID;
    NSString *_modelID;
    NSString *_firmwareVersion;
    NSString *_logicalDeviceID;
    NSString *_groupID;
    _Bool _overrideGroupID;
    NSData *_MACAddress;
    NSDictionary *_modelSpecificInfo;
    NSString *_playingPairedDeviceName;
}

@property (retain, nonatomic, setter=setAVOutputDevice:) AVOutputDevice *avOutputDevice;
@property (retain, nonatomic) MRAVOutputDeviceSourceInfo *sourceInfo;

- (id)name;
- (id)uid;
- (unsigned int)deviceType;
- (id)groupID;
- (void)setGroupID:(id)arg1;
- (id)firmwareVersion;
- (float)volume;
- (void)setVolume:(float)arg1;
- (float)batteryLevel;
- (id)MACAddress;
- (id)parentGroupIdentifier;
- (id)bluetoothID;
- (id)modelID;
- (_Bool)requiresAuthorization;
- (_Bool)canAccessRemoteAssets;
- (_Bool)canAccessAppleMusic;
- (_Bool)canAccessiCloudMusicLibrary;
- (_Bool)supportsBufferedAirPlay;
- (_Bool)isGroupLeader;
- (_Bool)groupContainsGroupLeader;
- (id)logicalDeviceID;
- (_Bool)canRelayCommunicationChannel;
- (_Bool)canPlayEncryptedProgressiveDownloadAssets;
- (_Bool)canFetchMediaDataFromSender;
- (_Bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (_Bool)supportsBluetoothSharing;
- (id)availableBluetoothListeningModes;
- (id)currentBluetoothListeningMode;
- (_Bool)setCurrentBluetoothListeningMode:(id)arg1 error:(id *)arg2;
- (_Bool)hasBatteryLevel;
- (id)_outputContext;
- (_Bool)isVolumeControlAvailable;
- (_Bool)isProxyGroupPlayer;
- (id)playingPairedDeviceName;
- (_Bool)isPickedOnPairedDevice;
- (_Bool)isLocalDevice;
- (unsigned int)deviceSubtype;
- (_Bool)isRemoteControllable;
- (_Bool)isGroupable;
- (_Bool)isDeviceGroupable;
- (_Bool)isAirPlayReceiverSessionActive;
- (_Bool)parentGroupContainsDiscoverableLeader;
- (_Bool)isAddedToHomeKit;
- (id)modelSpecificInfo;
- (_Bool)supportsExternalScreen;
- (_Bool)supportsRapport;
- (void)_onqueue_clearCachedAVOutputDeviceProperties;
- (id)_playingPairedDeviceNameForAVOutputDevice:(id)arg1;
- (_Bool)_isOutputDevice:(id)arg1 belongToOutputContext:(id)arg2;
- (id)initWithAVOutputDevice:(id)arg1 sourceInfo:(id)arg2;

@end
