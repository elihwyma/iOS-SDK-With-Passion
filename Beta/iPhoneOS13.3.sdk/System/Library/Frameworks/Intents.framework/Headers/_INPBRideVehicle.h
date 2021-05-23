/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class GEOLocation, NSString, _INPBImageValue;

@interface _INPBRideVehicle : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    GEOLocation *_location;
    NSString *_manufacturer;
    _INPBImageValue *_mapAnnotationImage;
    NSString *_model;
    NSString *_registrationPlate;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic, readonly) _Bool hasLocation;
@property (copy, nonatomic) NSString *manufacturer;
@property (nonatomic, readonly) _Bool hasManufacturer;
@property (retain, nonatomic) _INPBImageValue *mapAnnotationImage;
@property (nonatomic, readonly) _Bool hasMapAnnotationImage;
@property (copy, nonatomic) NSString *model;
@property (nonatomic, readonly) _Bool hasModel;
@property (copy, nonatomic) NSString *registrationPlate;
@property (nonatomic, readonly) _Bool hasRegistrationPlate;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
