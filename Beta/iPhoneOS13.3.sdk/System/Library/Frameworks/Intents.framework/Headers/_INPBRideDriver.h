/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBContactValue, _INPBImageValue;

@interface _INPBRideDriver : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBImageValue *_image;
    _INPBContactValue *_person;
    NSString *_phoneNumber;
    NSString *_rating;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBImageValue *image;
@property (nonatomic, readonly) _Bool hasImage;
@property (retain, nonatomic) _INPBContactValue *person;
@property (nonatomic, readonly) _Bool hasPerson;
@property (copy, nonatomic) NSString *phoneNumber;
@property (nonatomic, readonly) _Bool hasPhoneNumber;
@property (copy, nonatomic) NSString *rating;
@property (nonatomic, readonly) _Bool hasRating;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
