/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSData, NSString;

@interface HDCodableProvenance : PBCodable <Swift>

{
    NSData *_deviceUUID;
    NSString *_originBuild;
    int _originMajorVersion;
    int _originMinorVersion;
    int _originPatchVersion;
    NSString *_originProductType;
    NSData *_sourceUUID;
    NSString *_sourceVersion;
    NSString *_timeZoneName;
    struct {
        unsigned int originMajorVersion:1;
        unsigned int originMinorVersion:1;
        unsigned int originPatchVersion:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasOriginBuild;
@property (retain, nonatomic) NSString *originBuild;
@property (nonatomic, readonly) _Bool hasSourceUUID;
@property (retain, nonatomic) NSData *sourceUUID;
@property (nonatomic, readonly) _Bool hasDeviceUUID;
@property (retain, nonatomic) NSData *deviceUUID;
@property (nonatomic, readonly) _Bool hasSourceVersion;
@property (retain, nonatomic) NSString *sourceVersion;
@property (nonatomic, readonly) _Bool hasOriginProductType;
@property (retain, nonatomic) NSString *originProductType;
@property (nonatomic, readonly) _Bool hasTimeZoneName;
@property (retain, nonatomic) NSString *timeZoneName;
@property (nonatomic) _Bool hasOriginMajorVersion;
@property (nonatomic) int originMajorVersion;
@property (nonatomic) _Bool hasOriginMinorVersion;
@property (nonatomic) int originMinorVersion;
@property (nonatomic) _Bool hasOriginPatchVersion;
@property (nonatomic) int originPatchVersion;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)decodedSourceUUID;
- (id)decodedDeviceUUID;

@end
