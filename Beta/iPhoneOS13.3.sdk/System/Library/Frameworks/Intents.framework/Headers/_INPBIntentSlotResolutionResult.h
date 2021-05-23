/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBPayloadConfirmation, _INPBPayloadNeedsDisambiguation, _INPBPayloadNeedsExecuteIntent, _INPBPayloadNeedsValue, _INPBPayloadSuccess, _INPBPayloadUnsupported;

@interface _INPBIntentSlotResolutionResult : PBCodable <Swift>

{
    CDStruct_f953fb60 _has;
    _Bool __encodeLegacyGloryData;
    int _type;
    _INPBPayloadConfirmation *_payloadConfirmation;
    _INPBPayloadNeedsDisambiguation *_payloadNeedsDisambiguation;
    _INPBPayloadNeedsExecuteIntent *_payloadNeedsExecuteIntent;
    _INPBPayloadNeedsValue *_payloadNeedsValue;
    _INPBPayloadSuccess *_payloadSuccess;
    _INPBPayloadUnsupported *_payloadUnsupported;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBPayloadConfirmation *payloadConfirmation;
@property (nonatomic, readonly) _Bool hasPayloadConfirmation;
@property (retain, nonatomic) _INPBPayloadNeedsDisambiguation *payloadNeedsDisambiguation;
@property (nonatomic, readonly) _Bool hasPayloadNeedsDisambiguation;
@property (retain, nonatomic) _INPBPayloadNeedsExecuteIntent *payloadNeedsExecuteIntent;
@property (nonatomic, readonly) _Bool hasPayloadNeedsExecuteIntent;
@property (retain, nonatomic) _INPBPayloadNeedsValue *payloadNeedsValue;
@property (nonatomic, readonly) _Bool hasPayloadNeedsValue;
@property (retain, nonatomic) _INPBPayloadSuccess *payloadSuccess;
@property (nonatomic, readonly) _Bool hasPayloadSuccess;
@property (retain, nonatomic) _INPBPayloadUnsupported *payloadUnsupported;
@property (nonatomic, readonly) _Bool hasPayloadUnsupported;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasType;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;

@end
