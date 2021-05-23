/*
 Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PETMetadata : PBCodable

{
    unsigned long long _uploadTime;
    NSString *_build;
    unsigned int _configVersion;
    NSString *_country;
    NSString *_device;
    NSString *_language;
    NSString *_platform;
    NSString *_pseudoDeviceId;
    _Bool _isGm;
    _Bool _isInternal;
    _Bool _isInternalCarry;
    _Bool _isSeed;
    _Bool _isTestingData;
    _Bool _isTrialUpload;
    struct {
        unsigned int uploadTime:1;
        unsigned int configVersion:1;
        unsigned int isGm:1;
        unsigned int isInternal:1;
        unsigned int isInternalCarry:1;
        unsigned int isSeed:1;
        unsigned int isTestingData:1;
        unsigned int isTrialUpload:1;
    } _has;
}

@property (nonatomic) _Bool hasUploadTime;
@property (nonatomic) unsigned long long uploadTime;
@property (nonatomic, readonly) _Bool hasPlatform;
@property (retain, nonatomic) NSString *platform;
@property (nonatomic, readonly) _Bool hasDevice;
@property (retain, nonatomic) NSString *device;
@property (nonatomic, readonly) _Bool hasBuild;
@property (retain, nonatomic) NSString *build;
@property (nonatomic) _Bool hasIsInternal;
@property (nonatomic) _Bool isInternal;
@property (nonatomic) _Bool hasIsSeed;
@property (nonatomic) _Bool isSeed;
@property (nonatomic) _Bool hasIsGm;
@property (nonatomic) _Bool isGm;
@property (nonatomic, readonly) _Bool hasCountry;
@property (retain, nonatomic) NSString *country;
@property (nonatomic, readonly) _Bool hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) _Bool hasConfigVersion;
@property (nonatomic) unsigned int configVersion;
@property (nonatomic) _Bool hasIsTestingData;
@property (nonatomic) _Bool isTestingData;
@property (nonatomic, readonly) _Bool hasPseudoDeviceId;
@property (retain, nonatomic) NSString *pseudoDeviceId;
@property (nonatomic) _Bool hasIsTrialUpload;
@property (nonatomic) _Bool isTrialUpload;
@property (nonatomic) _Bool hasIsInternalCarry;
@property (nonatomic) _Bool isInternalCarry;

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
