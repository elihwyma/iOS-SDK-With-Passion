/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NTPBTelemetry : PBCodable

{
    long long _appBuild;
    NSString *_appVersion;
    NSString *_carrier;
    int _contentEnvironment;
    NSString *_countryCode;
    NSString *_deviceModel;
    NSString *_devicePlatform;
    NSString *_languageCode;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    NSMutableArray *_networkEventGroups;
    NSString *_osCountryCode;
    int _osInstallVariant;
    NSString *_osVersion;
    NSString *_userId;
    NSString *_userStorefrontId;
    struct {
        unsigned int appBuild:1;
        unsigned int contentEnvironment:1;
        unsigned int osInstallVariant:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;
@property (nonatomic, readonly) _Bool hasDevicePlatform;
@property (retain, nonatomic) NSString *devicePlatform;
@property (nonatomic, readonly) _Bool hasOsVersion;
@property (retain, nonatomic) NSString *osVersion;
@property (nonatomic, readonly) _Bool hasAppVersion;
@property (retain, nonatomic) NSString *appVersion;
@property (nonatomic) _Bool hasAppBuild;
@property (nonatomic) long long appBuild;
@property (nonatomic, readonly) _Bool hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic, readonly) _Bool hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;
@property (nonatomic, readonly) _Bool hasCarrier;
@property (retain, nonatomic) NSString *carrier;
@property (nonatomic, readonly) _Bool hasMobileCountryCode;
@property (retain, nonatomic) NSString *mobileCountryCode;
@property (nonatomic, readonly) _Bool hasMobileNetworkCode;
@property (retain, nonatomic) NSString *mobileNetworkCode;
@property (nonatomic, readonly) _Bool hasOsCountryCode;
@property (retain, nonatomic) NSString *osCountryCode;
@property (nonatomic) _Bool hasOsInstallVariant;
@property (nonatomic) int osInstallVariant;
@property (nonatomic) _Bool hasContentEnvironment;
@property (nonatomic) int contentEnvironment;
@property (nonatomic, readonly) _Bool hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (nonatomic, readonly) _Bool hasUserStorefrontId;
@property (retain, nonatomic) NSString *userStorefrontId;
@property (retain, nonatomic) NSMutableArray *networkEventGroups;

+ (Class)networkEventGroupsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addNetworkEventGroups:(id)arg1;
- (id)osInstallVariantAsString:(int)arg1;
- (int)StringAsOsInstallVariant:(id)arg1;
- (void)clearNetworkEventGroups;
- (unsigned long long)networkEventGroupsCount;
- (id)networkEventGroupsAtIndex:(unsigned long long)arg1;

@end
