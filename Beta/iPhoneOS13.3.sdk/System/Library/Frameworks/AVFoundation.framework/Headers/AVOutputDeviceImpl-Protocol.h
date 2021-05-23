/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/Swift-Protocol.h>

@class AVOutputDevice, NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol AVOutputDeviceImpl <Swift>

@property (weak) AVOutputDevice *parentOutputDevice;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly) long long deviceSubType;
@property (nonatomic, readonly) NSString *manufacturer;
@property (copy, nonatomic, readonly) NSString *modelID;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) NSString *firmwareVersion;
@property (copy, nonatomic, readonly) NSData *identifyingMACAddress;
@property (nonatomic, readonly) NSNumber *batteryLevel;
@property (nonatomic, readonly) NSNumber *caseBatteryLevel;
@property (nonatomic, readonly) NSNumber *leftBatteryLevel;
@property (nonatomic, readonly) NSNumber *rightBatteryLevel;
@property (nonatomic, readonly) NSNumber *supportsDataOverACLProtocol;
@property (nonatomic, readonly) NSNumber *isInEar;
@property (nonatomic, readonly) NSDictionary *airPlayProperties;
@property (nonatomic, readonly, getter=isInUseByPairedDevice) _Bool inUseByPairedDevice;
@property (copy, nonatomic, readonly) NSArray *connectedPairedDevices;
@property (nonatomic, readonly) unsigned long long deviceFeatures;
@property (nonatomic, readonly) _Bool requiresAuthorization;
@property (nonatomic, readonly) _Bool automaticallyAllowsConnectionsFromPeersInHomeGroup;
@property (nonatomic, readonly) _Bool onlyAllowsConnectionsFromPeersInHomeGroup;
@property (nonatomic, readonly) _Bool canAccessRemoteAssets;
@property (nonatomic, readonly) _Bool canAccessAppleMusic;
@property (nonatomic, readonly) _Bool canAccessiCloudMusicLibrary;
@property (nonatomic, readonly) _Bool supportsBufferedAirPlay;
@property (readonly) float volume;
@property (readonly) _Bool canSetVolume;
@property (nonatomic, readonly) _Bool canBeGrouped;
@property (copy, nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) _Bool canBeGroupLeader;
@property (nonatomic, readonly) _Bool isGroupLeader;
@property (nonatomic, readonly) _Bool participatesInGroupPlayback;
@property (nonatomic, readonly) _Bool groupContainsGroupLeader;
@property (nonatomic, readonly) NSString *logicalDeviceID;
@property (nonatomic, readonly) _Bool isLogicalDeviceLeader;
@property (nonatomic, readonly) _Bool canCommunicateWithAllLogicalDeviceMembers;
@property (nonatomic, readonly) _Bool canRelayCommunicationChannel;
@property (nonatomic, readonly) _Bool canPlayEncryptedProgressiveDownloadAssets;
@property (nonatomic, readonly) _Bool canFetchMediaDataFromSender;
@property (nonatomic, readonly) _Bool presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property (nonatomic, readonly) _Bool supportsBluetoothSharing;
@property (nonatomic, readonly) NSArray *availableBluetoothListeningModes;
@property (nonatomic, readonly) NSString *currentBluetoothListeningMode;

- (unsigned short)setVolume: /* Error: Ran out of types for this method. */;
- (unsigned short)setSecondDisplayEnabled: /* Error: Ran out of types for this method. */;
- (unsigned short)setCurrentBluetoothListeningMode:error: /* Error: Ran out of types for this method. */;
- (unsigned short)configureUsingBlock:options:completionHandler: /* Error: Ran out of types for this method. */;

@end
