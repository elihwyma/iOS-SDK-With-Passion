/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NTPBDeviceInfo : PBCodable

{
    long long _deviceDstOffset;
    long long _deviceUtcOffset;
    NSString *_deviceAppBundleId;
    NSString *_deviceAppVersion;
    NSString *_deviceOsVersion;
    NSMutableArray *_devicePreferredLanguages;
    NSString *_devicePushToken;
    NSString *_deviceTimezone;
    int _deviceTokenEnv;
    NSString *_deviceType;
    struct {
        unsigned int deviceDstOffset:1;
        unsigned int deviceUtcOffset:1;
        unsigned int deviceTokenEnv:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasDevicePushToken;
@property (retain, nonatomic) NSString *devicePushToken;
@property (nonatomic, readonly) _Bool hasDeviceType;
@property (retain, nonatomic) NSString *deviceType;
@property (nonatomic, readonly) _Bool hasDeviceTimezone;
@property (retain, nonatomic) NSString *deviceTimezone;
@property (nonatomic) _Bool hasDeviceTokenEnv;
@property (nonatomic) int deviceTokenEnv;
@property (retain, nonatomic) NSMutableArray *devicePreferredLanguages;
@property (nonatomic, readonly) _Bool hasDeviceOsVersion;
@property (retain, nonatomic) NSString *deviceOsVersion;
@property (nonatomic) _Bool hasDeviceUtcOffset;
@property (nonatomic) long long deviceUtcOffset;
@property (nonatomic) _Bool hasDeviceDstOffset;
@property (nonatomic) long long deviceDstOffset;
@property (nonatomic, readonly) _Bool hasDeviceAppVersion;
@property (retain, nonatomic) NSString *deviceAppVersion;
@property (nonatomic, readonly) _Bool hasDeviceAppBundleId;
@property (retain, nonatomic) NSString *deviceAppBundleId;

+ (Class)devicePreferredLanguageType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addDevicePreferredLanguage:(id)arg1;
- (void)clearDevicePreferredLanguages;
- (unsigned long long)devicePreferredLanguagesCount;
- (id)devicePreferredLanguageAtIndex:(unsigned long long)arg1;

@end
