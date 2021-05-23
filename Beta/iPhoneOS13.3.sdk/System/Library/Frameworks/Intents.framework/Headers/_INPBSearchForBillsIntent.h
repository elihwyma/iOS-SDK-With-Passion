/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBBillPayeeValue, _INPBDateTimeRange, _INPBIntentMetadata;

@interface _INPBSearchForBillsIntent : PBCodable <Swift>

{
    CDStruct_c8e9def3 _has;
    _Bool __encodeLegacyGloryData;
    int _billType;
    int _status;
    _INPBBillPayeeValue *_billPayee;
    _INPBDateTimeRange *_dueDateRange;
    _INPBIntentMetadata *_intentMetadata;
    _INPBDateTimeRange *_paymentDateRange;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBBillPayeeValue *billPayee;
@property (nonatomic, readonly) _Bool hasBillPayee;
@property (nonatomic) int billType;
@property (nonatomic) _Bool hasBillType;
@property (retain, nonatomic) _INPBDateTimeRange *dueDateRange;
@property (nonatomic, readonly) _Bool hasDueDateRange;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBDateTimeRange *paymentDateRange;
@property (nonatomic, readonly) _Bool hasPaymentDateRange;
@property (nonatomic) int status;
@property (nonatomic) _Bool hasStatus;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (id)billTypeAsString:(int)arg1;
- (int)StringAsBillType:(id)arg1;

@end
