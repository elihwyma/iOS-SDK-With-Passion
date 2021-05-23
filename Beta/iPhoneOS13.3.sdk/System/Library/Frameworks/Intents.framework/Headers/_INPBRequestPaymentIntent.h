/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBContact, _INPBCurrencyAmount, _INPBIntentMetadata, _INPBString;

@interface _INPBRequestPaymentIntent : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBCurrencyAmount *_currencyAmount;
    _INPBIntentMetadata *_intentMetadata;
    _INPBString *_note;
    _INPBContact *_payer;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBCurrencyAmount *currencyAmount;
@property (nonatomic, readonly) _Bool hasCurrencyAmount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBString *note;
@property (nonatomic, readonly) _Bool hasNote;
@property (retain, nonatomic) _INPBContact *payer;
@property (nonatomic, readonly) _Bool hasPayer;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
