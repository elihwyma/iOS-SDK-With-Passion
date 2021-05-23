/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface _INPBRentalCar : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSString *_make;
    NSString *_model;
    NSString *_rentalCarDescription;
    NSString *_rentalCompanyName;
    NSString *_type;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *make;
@property (nonatomic, readonly) _Bool hasMake;
@property (copy, nonatomic) NSString *model;
@property (nonatomic, readonly) _Bool hasModel;
@property (copy, nonatomic) NSString *rentalCarDescription;
@property (nonatomic, readonly) _Bool hasRentalCarDescription;
@property (copy, nonatomic) NSString *rentalCompanyName;
@property (nonatomic, readonly) _Bool hasRentalCompanyName;
@property (copy, nonatomic) NSString *type;
@property (nonatomic, readonly) _Bool hasType;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
