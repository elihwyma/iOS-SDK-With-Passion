/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SSVPBPlayActivityEnqueuerProperties : PBCodable

{
    unsigned long long _storeAccountID;
    NSString *_buildVersion;
    NSString *_deviceGUID;
    NSString *_deviceName;
    NSString *_storeFrontID;
    int _systemReleaseType;
    NSString *_timeZoneName;
    _Bool _privateListeningEnabled;
    _Bool _sBEnabled;
    struct {
        unsigned int storeAccountID:1;
        unsigned int systemReleaseType:1;
        unsigned int privateListeningEnabled:1;
        unsigned int sBEnabled:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasBuildVersion;
@property (retain, nonatomic) NSString *buildVersion;
@property (nonatomic, readonly) _Bool hasDeviceGUID;
@property (retain, nonatomic) NSString *deviceGUID;
@property (nonatomic, readonly) _Bool hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic, readonly) _Bool hasTimeZoneName;
@property (retain, nonatomic) NSString *timeZoneName;
@property (nonatomic) _Bool hasSystemReleaseType;
@property (nonatomic) int systemReleaseType;
@property (nonatomic) _Bool hasSBEnabled;
@property (nonatomic) _Bool sBEnabled;
@property (nonatomic) _Bool hasStoreAccountID;
@property (nonatomic) unsigned long long storeAccountID;
@property (nonatomic, readonly) _Bool hasStoreFrontID;
@property (retain, nonatomic) NSString *storeFrontID;
@property (nonatomic) _Bool hasPrivateListeningEnabled;
@property (nonatomic) _Bool privateListeningEnabled;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)systemReleaseTypeAsString:(int)arg1;
- (int)StringAsSystemReleaseType:(id)arg1;

@end
