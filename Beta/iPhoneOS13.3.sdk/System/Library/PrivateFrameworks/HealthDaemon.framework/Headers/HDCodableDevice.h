/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSData, NSString;

@interface HDCodableDevice : PBCodable <Swift>

{
    double _creationDate;
    NSString *_fDAUDI;
    NSString *_firmwareVersion;
    NSString *_hardwareVersion;
    NSString *_localIdentifier;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_name;
    NSString *_softwareVersion;
    NSData *_uuid;
    struct {
        unsigned int creationDate:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasManufacturer;
@property (retain, nonatomic) NSString *manufacturer;
@property (nonatomic, readonly) _Bool hasModel;
@property (retain, nonatomic) NSString *model;
@property (nonatomic, readonly) _Bool hasHardwareVersion;
@property (retain, nonatomic) NSString *hardwareVersion;
@property (nonatomic, readonly) _Bool hasFirmwareVersion;
@property (retain, nonatomic) NSString *firmwareVersion;
@property (nonatomic, readonly) _Bool hasSoftwareVersion;
@property (retain, nonatomic) NSString *softwareVersion;
@property (nonatomic, readonly) _Bool hasLocalIdentifier;
@property (retain, nonatomic) NSString *localIdentifier;
@property (nonatomic, readonly) _Bool hasFDAUDI;
@property (retain, nonatomic) NSString *fDAUDI;
@property (nonatomic, readonly) _Bool hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) _Bool hasCreationDate;
@property (nonatomic) double creationDate;

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
