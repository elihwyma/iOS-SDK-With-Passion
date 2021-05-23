/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface _MRDeviceInfoMessageProtobuf : PBCodable

{
    unsigned long long _protocolVersion;
    NSMutableArray *_airplayReceivers;
    NSString *_applicationBundleIdentifier;
    NSString *_applicationBundleVersion;
    NSData *_bluetoothAddress;
    int _deviceClass;
    NSString *_deviceUID;
    NSString *_groupName;
    NSString *_groupUID;
    NSMutableArray *_groupedDevices;
    unsigned int _lastSupportedMessageType;
    NSString *_linkAgent;
    NSString *_localizedModelName;
    unsigned int _logicalDeviceCount;
    NSString *_managedConfigDeviceID;
    NSString *_name;
    NSString *_senderDefaultGroupUID;
    unsigned int _sharedQueueVersion;
    NSString *_systemBuildVersion;
    NSString *_systemMediaApplication;
    NSString *_systemPodcastApplication;
    NSString *_tightSyncUID;
    NSString *_uniqueIdentifier;
    _Bool _allowsPairing;
    _Bool _connected;
    _Bool _isAirplayActive;
    _Bool _isGroupLeader;
    _Bool _isProxyGroupPlayer;
    _Bool _supportsACL;
    _Bool _supportsExtendedMotion;
    _Bool _supportsSharedQueue;
    _Bool _supportsSystemPairing;
    _Bool _tightlySyncedGroup;
    struct {
        unsigned int protocolVersion:1;
        unsigned int deviceClass:1;
        unsigned int lastSupportedMessageType:1;
        unsigned int logicalDeviceCount:1;
        unsigned int sharedQueueVersion:1;
        unsigned int allowsPairing:1;
        unsigned int connected:1;
        unsigned int isAirplayActive:1;
        unsigned int isGroupLeader:1;
        unsigned int isProxyGroupPlayer:1;
        unsigned int supportsACL:1;
        unsigned int supportsExtendedMotion:1;
        unsigned int supportsSharedQueue:1;
        unsigned int supportsSystemPairing:1;
        unsigned int tightlySyncedGroup:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasUniqueIdentifier;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasLocalizedModelName;
@property (retain, nonatomic) NSString *localizedModelName;
@property (nonatomic, readonly) _Bool hasSystemBuildVersion;
@property (retain, nonatomic) NSString *systemBuildVersion;
@property (nonatomic, readonly) _Bool hasApplicationBundleIdentifier;
@property (retain, nonatomic) NSString *applicationBundleIdentifier;
@property (nonatomic, readonly) _Bool hasApplicationBundleVersion;
@property (retain, nonatomic) NSString *applicationBundleVersion;
@property (nonatomic) _Bool hasProtocolVersion;
@property (nonatomic) unsigned long long protocolVersion;
@property (nonatomic) _Bool hasLastSupportedMessageType;
@property (nonatomic) unsigned int lastSupportedMessageType;
@property (nonatomic) _Bool hasSupportsSystemPairing;
@property (nonatomic) _Bool supportsSystemPairing;
@property (nonatomic) _Bool hasAllowsPairing;
@property (nonatomic) _Bool allowsPairing;
@property (nonatomic) _Bool hasConnected;
@property (nonatomic) _Bool connected;
@property (nonatomic, readonly) _Bool hasSystemMediaApplication;
@property (retain, nonatomic) NSString *systemMediaApplication;
@property (nonatomic) _Bool hasSupportsACL;
@property (nonatomic) _Bool supportsACL;
@property (nonatomic) _Bool hasSupportsSharedQueue;
@property (nonatomic) _Bool supportsSharedQueue;
@property (nonatomic) _Bool hasSupportsExtendedMotion;
@property (nonatomic) _Bool supportsExtendedMotion;
@property (nonatomic, readonly) _Bool hasBluetoothAddress;
@property (retain, nonatomic) NSData *bluetoothAddress;
@property (nonatomic) _Bool hasSharedQueueVersion;
@property (nonatomic) unsigned int sharedQueueVersion;
@property (nonatomic, readonly) _Bool hasDeviceUID;
@property (retain, nonatomic) NSString *deviceUID;
@property (nonatomic, readonly) _Bool hasManagedConfigDeviceID;
@property (retain, nonatomic) NSString *managedConfigDeviceID;
@property (nonatomic) _Bool hasDeviceClass;
@property (nonatomic) int deviceClass;
@property (nonatomic) _Bool hasLogicalDeviceCount;
@property (nonatomic) unsigned int logicalDeviceCount;
@property (nonatomic) _Bool hasTightlySyncedGroup;
@property (nonatomic) _Bool tightlySyncedGroup;
@property (nonatomic) _Bool hasIsProxyGroupPlayer;
@property (nonatomic) _Bool isProxyGroupPlayer;
@property (nonatomic, readonly) _Bool hasTightSyncUID;
@property (retain, nonatomic) NSString *tightSyncUID;
@property (nonatomic, readonly) _Bool hasGroupUID;
@property (retain, nonatomic) NSString *groupUID;
@property (nonatomic, readonly) _Bool hasGroupName;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSMutableArray *groupedDevices;
@property (nonatomic) _Bool hasIsGroupLeader;
@property (nonatomic) _Bool isGroupLeader;
@property (nonatomic) _Bool hasIsAirplayActive;
@property (nonatomic) _Bool isAirplayActive;
@property (nonatomic, readonly) _Bool hasSystemPodcastApplication;
@property (retain, nonatomic) NSString *systemPodcastApplication;
@property (nonatomic, readonly) _Bool hasSenderDefaultGroupUID;
@property (retain, nonatomic) NSString *senderDefaultGroupUID;
@property (retain, nonatomic) NSMutableArray *airplayReceivers;
@property (nonatomic, readonly) _Bool hasLinkAgent;
@property (retain, nonatomic) NSString *linkAgent;

+ (Class)groupedDevicesType;
+ (Class)airplayReceiversType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addGroupedDevices:(id)arg1;
- (void)addAirplayReceivers:(id)arg1;
- (unsigned long long)groupedDevicesCount;
- (void)clearGroupedDevices;
- (id)groupedDevicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)airplayReceiversCount;
- (void)clearAirplayReceivers;
- (id)airplayReceiversAtIndex:(unsigned long long)arg1;
- (id)deviceClassAsString:(int)arg1;
- (int)StringAsDeviceClass:(id)arg1;

@end
