/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRAVOutputDevice.h>

@class MRAVOutputDeviceSourceInfo, NSDictionary, _MRAVOutputDeviceDescriptorProtobuf;

@interface MRAVDistantOutputDevice : MRAVOutputDevice

{
    _MRAVOutputDeviceDescriptorProtobuf *_protobuf;
    MRAVOutputDeviceSourceInfo *_sourceInfo;
    NSDictionary *_modelSpecificInfo;
}

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)uid;
- (unsigned int)deviceType;
- (id)groupID;
- (id)descriptor;
- (id)firmwareVersion;
- (float)volume;
- (float)batteryLevel;
- (id)initWithDescriptor:(id)arg1;
- (id)sourceInfo;
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
- (_Bool)hasBatteryLevel;
- (_Bool)isVolumeControlAvailable;
- (unsigned int)volumeCapabilities;
- (_Bool)isProxyGroupPlayer;
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
- (id)initWithSkeleton:(id)arg1;

@end
