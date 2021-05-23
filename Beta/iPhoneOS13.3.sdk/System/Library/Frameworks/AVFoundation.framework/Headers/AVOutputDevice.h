/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVOutputDeviceInternal;

@interface AVOutputDevice : NSObject

{
    AVOutputDeviceInternal *_outputDevice;
}

+ (void)initialize;
+ (id)sharedLocalDevice;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary *)arg1;
+ (_Bool)prefersRouteDescriptors;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary *)arg1 volumeController:(struct OpaqueFigVolumeControllerState *)arg2;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary *)arg1 routeDiscoverer:(struct OpaqueFigRouteDiscoverer *)arg2;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary *)arg1 routingContextFactory:(id)arg2;
+ (id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint *)arg1;
+ (id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint *)arg1 volumeController:(struct OpaqueFigVolumeControllerState *)arg2;
+ (id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint *)arg1 routingContextFactory:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)name;
- (long long)deviceType;
- (id)deviceID;
- (id)groupID;
- (id)deviceName;
- (id)serialNumber;
- (id)firmwareVersion;
- (id)impl;
- (float)volume;
- (void)setVolume:(float)arg1;
- (float)batteryLevel;
- (id)manufacturer;
- (id)ID;
- (double)frecencyScore;
- (id)modelID;
- (long long)deviceSubType;
- (unsigned long long)deviceFeatures;
- (id)initWithOutputDeviceImpl:(id)arg1;
- (id)identifyingMACAddress;
- (id)airPlayProperties;
- (_Bool)isInUseByPairedDevice;
- (id)connectedPairedDevices;
- (_Bool)requiresAuthorization;
- (_Bool)automaticallyAllowsConnectionsFromPeersInHomeGroup;
- (_Bool)onlyAllowsConnectionsFromPeersInHomeGroup;
- (_Bool)canAccessRemoteAssets;
- (_Bool)canAccessAppleMusic;
- (_Bool)canAccessiCloudMusicLibrary;
- (_Bool)supportsBufferedAirPlay;
- (void)setSecondDisplayEnabled:(_Bool)arg1;
- (_Bool)canSetVolume;
- (_Bool)canBeGrouped;
- (_Bool)canBeGroupLeader;
- (_Bool)isGroupLeader;
- (_Bool)participatesInGroupPlayback;
- (_Bool)groupContainsGroupLeader;
- (id)logicalDeviceID;
- (_Bool)isLogicalDeviceLeader;
- (_Bool)canCommunicateWithAllLogicalDeviceMembers;
- (_Bool)canRelayCommunicationChannel;
- (_Bool)canPlayEncryptedProgressiveDownloadAssets;
- (_Bool)canFetchMediaDataFromSender;
- (_Bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (_Bool)supportsBluetoothSharing;
- (id)availableBluetoothListeningModes;
- (id)currentBluetoothListeningMode;
- (_Bool)setCurrentBluetoothListeningMode:(id)arg1 error:(id *)arg2;
- (void)configureUsingBlock:(CDUnknownBlockType)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)hasBatteryLevel;
- (id)modelSpecificInformation;
- (void)outputDeviceImplDidChangeVolume:(id)arg1;
- (void)outputDeviceImplDidChangeCanChangeVolume:(id)arg1;
- (void)setCurrentBluetoothListeningMode:(id)arg1;
- (void)configureUsingBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateFrecencyScore;
- (id)figEndpointOutputDeviceImpl;

@end
