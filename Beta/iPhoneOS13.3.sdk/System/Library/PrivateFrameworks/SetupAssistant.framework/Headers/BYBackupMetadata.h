/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <PBCodable.h>

@class NSData;

@interface BYBackupMetadata : PBCodable

{
    long long _userInterfaceStyleMode;
    unsigned int _appAnalyticsOptIn;
    unsigned int _deviceAnalyticsOptIn;
    unsigned int _homeButtonHapticKind;
    NSData *_nanoRegistryData;
    unsigned int _version;
    NSData *_walletData;
    _Bool _autoUpdateEnabled;
    _Bool _didSeeTrueTonePane;
    _Bool _findMyiPhoneOptIn;
    _Bool _locationServicesOptIn;
    _Bool _screenTimeEnabled;
    _Bool _siriOptIn;
    struct {
        unsigned int userInterfaceStyleMode:1;
        unsigned int appAnalyticsOptIn:1;
        unsigned int deviceAnalyticsOptIn:1;
        unsigned int homeButtonHapticKind:1;
        unsigned int autoUpdateEnabled:1;
        unsigned int didSeeTrueTonePane:1;
        unsigned int findMyiPhoneOptIn:1;
        unsigned int locationServicesOptIn:1;
        unsigned int screenTimeEnabled:1;
        unsigned int siriOptIn:1;
    } _has;
}

@property (nonatomic) unsigned int version;
@property (nonatomic, readonly) _Bool hasNanoRegistryData;
@property (retain, nonatomic) NSData *nanoRegistryData;
@property (nonatomic) _Bool hasHomeButtonHapticKind;
@property (nonatomic) unsigned int homeButtonHapticKind;
@property (nonatomic) _Bool hasDeviceAnalyticsOptIn;
@property (nonatomic) unsigned int deviceAnalyticsOptIn;
@property (nonatomic) _Bool hasAppAnalyticsOptIn;
@property (nonatomic) unsigned int appAnalyticsOptIn;
@property (nonatomic) _Bool hasLocationServicesOptIn;
@property (nonatomic) _Bool locationServicesOptIn;
@property (nonatomic) _Bool hasFindMyiPhoneOptIn;
@property (nonatomic) _Bool findMyiPhoneOptIn;
@property (nonatomic) _Bool hasSiriOptIn;
@property (nonatomic) _Bool siriOptIn;
@property (nonatomic) _Bool hasScreenTimeEnabled;
@property (nonatomic) _Bool screenTimeEnabled;
@property (nonatomic) _Bool hasAutoUpdateEnabled;
@property (nonatomic) _Bool autoUpdateEnabled;
@property (nonatomic) _Bool hasDidSeeTrueTonePane;
@property (nonatomic) _Bool didSeeTrueTonePane;
@property (nonatomic) _Bool hasUserInterfaceStyleMode;
@property (nonatomic) long long userInterfaceStyleMode;
@property (nonatomic, readonly) _Bool hasWalletData;
@property (retain, nonatomic) NSData *walletData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
