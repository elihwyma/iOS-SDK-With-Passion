/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MRAVEndpoint, MRAVOutputDeviceSourceInfo, NSArray, NSData, NSDictionary, NSString, _MRAVOutputDeviceDescriptorProtobuf;

@interface MRAVOutputDevice : NSObject

{
    _Bool _canAccessRemoteAssets;
    _Bool _canAccessAppleMusic;
    _Bool _canAccessiCloudMusicLibrary;
    _Bool _canPlayEncryptedProgressiveDownloadAssets;
    _Bool _canFetchMediaDataFromSender;
    _Bool _presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
    _Bool _remoteControllable;
    _Bool _groupLeader;
    _Bool _groupContainsGroupLeader;
    _Bool _airPlayReceiverSessionActive;
    _Bool _groupable;
    _Bool _supportsBluetoothSharing;
    _Bool _proxyGroupPlayer;
    _Bool _canRelayCommunicationChannel;
    _Bool _supportsBufferedAirPlay;
    _Bool _supportsRapport;
    _Bool _isAddedToHomeKit;
    _Bool _deviceGroupable;
    _Bool _pickedOnPairedDevice;
    _Bool _hasBatteryLevel;
    _Bool _localDevice;
    _Bool _supportsExternalScreen;
    _Bool _requiresAuthorization;
    _Bool _parentGroupContainsDiscoverableLeader;
    _Bool _volumeControlAvailable;
    unsigned int _deviceType;
    unsigned int _deviceSubtype;
    float _batteryLevel;
    float _volume;
    NSString *_name;
    NSString *_uid;
    NSString *_modelID;
    NSString *_firmwareVersion;
    NSString *_groupID;
    NSString *_logicalDeviceID;
    NSData *_MACAddress;
    NSDictionary *_modelSpecificInfo;
    NSString *_playingPairedDeviceName;
    NSString *_parentGroupIdentifier;
    MRAVOutputDeviceSourceInfo *_sourceInfo;
    NSString *_bluetoothID;
    NSString *_currentBluetoothListeningMode;
    NSArray *_availableBluetoothListeningModes;
    MRAVEndpoint *_endpoint;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *uid;
@property (nonatomic, readonly) NSString *modelID;
@property (nonatomic, readonly) NSString *firmwareVersion;
@property (copy, nonatomic) NSString *groupID;
@property (nonatomic, readonly) NSString *logicalDeviceID;
@property (nonatomic, readonly) NSData *MACAddress;
@property (nonatomic, readonly) NSDictionary *modelSpecificInfo;
@property (nonatomic, readonly) NSString *playingPairedDeviceName;
@property (nonatomic, readonly) _Bool canAccessRemoteAssets;
@property (nonatomic, readonly) _Bool canAccessAppleMusic;
@property (nonatomic, readonly) _Bool canAccessiCloudMusicLibrary;
@property (nonatomic, readonly) _Bool canPlayEncryptedProgressiveDownloadAssets;
@property (nonatomic, readonly) _Bool canFetchMediaDataFromSender;
@property (nonatomic, readonly) _Bool presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property (nonatomic, readonly, getter=isRemoteControllable) _Bool remoteControllable;
@property (nonatomic, readonly, getter=isGroupLeader) _Bool groupLeader;
@property (nonatomic, readonly) _Bool groupContainsGroupLeader;
@property (nonatomic, readonly, getter=isAirPlayReceiverSessionActive) _Bool airPlayReceiverSessionActive;
@property (nonatomic, readonly, getter=isGroupable) _Bool groupable;
@property (nonatomic, readonly) _Bool supportsBluetoothSharing;
@property (nonatomic, readonly, getter=isProxyGroupPlayer) _Bool proxyGroupPlayer;
@property (nonatomic, readonly) _Bool canRelayCommunicationChannel;
@property (nonatomic, readonly) _Bool supportsBufferedAirPlay;
@property (nonatomic, readonly) _Bool supportsRapport;
@property (nonatomic, readonly) _Bool isAddedToHomeKit;
@property (nonatomic, readonly, getter=isDeviceGroupable) _Bool deviceGroupable;
@property (nonatomic, readonly, getter=isPickedOnPairedDevice) _Bool pickedOnPairedDevice;
@property (nonatomic, readonly) unsigned int deviceType;
@property (nonatomic, readonly) unsigned int deviceSubtype;
@property (nonatomic, readonly) float batteryLevel;
@property (nonatomic, readonly) _Bool hasBatteryLevel;
@property (nonatomic, readonly, getter=isLocalDevice) _Bool localDevice;
@property (nonatomic, readonly) _Bool supportsExternalScreen;
@property (nonatomic, readonly) _Bool requiresAuthorization;
@property (nonatomic, readonly) _Bool parentGroupContainsDiscoverableLeader;
@property (copy, nonatomic) NSString *parentGroupIdentifier;
@property (nonatomic, readonly, getter=isVolumeControlAvailable) _Bool volumeControlAvailable;
@property (nonatomic, readonly) unsigned int volumeCapabilities;
@property (nonatomic, readonly) MRAVOutputDeviceSourceInfo *sourceInfo;
@property (nonatomic) float volume;
@property (nonatomic, readonly) _Bool isPersonalRoute;
@property (nonatomic, readonly) NSString *bluetoothID;
@property (nonatomic, readonly) NSString *debugName;
@property (nonatomic, readonly) NSString *currentBluetoothListeningMode;
@property (nonatomic, readonly) NSArray *availableBluetoothListeningModes;
@property (weak, nonatomic) MRAVEndpoint *endpoint;
@property (nonatomic, readonly) _MRAVOutputDeviceDescriptorProtobuf *descriptor;
@property (nonatomic, readonly) NSString *capabilitiesDescription;
@property (nonatomic, readonly) NSString *composedTypeDescription;
@property (nonatomic, readonly) NSString *roleDescription;
@property (nonatomic, readonly) NSDictionary *jsonEncodableDictionaryRepresentation;

+ (id)localDeviceUID;
+ (id)localDeviceLocalizedName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
