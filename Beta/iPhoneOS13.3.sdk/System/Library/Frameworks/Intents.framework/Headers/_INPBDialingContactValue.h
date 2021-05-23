/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBContactValue, _INPBStringValue;

@interface _INPBDialingContactValue : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBContactValue *_dialingContact;
    _INPBStringValue *_dialingPhoneLabel;
    _INPBStringValue *_dialingPhoneNumber;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBContactValue *dialingContact;
@property (nonatomic, readonly) _Bool hasDialingContact;
@property (retain, nonatomic) _INPBStringValue *dialingPhoneLabel;
@property (nonatomic, readonly) _Bool hasDialingPhoneLabel;
@property (retain, nonatomic) _INPBStringValue *dialingPhoneNumber;
@property (nonatomic, readonly) _Bool hasDialingPhoneNumber;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
