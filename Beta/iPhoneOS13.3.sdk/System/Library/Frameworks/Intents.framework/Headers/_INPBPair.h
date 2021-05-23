/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@interface _INPBPair : PBCodable <Swift>

{
    struct {
        unsigned int repeated:1;
    } _has;
    _Bool _repeated;
    _Bool __encodeLegacyGloryData;
    NSString *_key;
    NSArray *_pairCurrencyAmountValues;
    NSArray *_pairCustomObjects;
    NSArray *_pairDataStrings;
    NSArray *_pairDistanceValues;
    NSArray *_pairDoubleValues;
    NSArray *_pairImageValues;
    NSArray *_pairIntegerValues;
    NSArray *_pairLocationValues;
    NSArray *_pairPaymentMethodValues;
    NSArray *_pairPersonValues;
    NSArray *_pairStringValues;
    NSArray *_pairTemperatureValues;
    NSArray *_pairUrlValues;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *key;
@property (nonatomic, readonly) _Bool hasKey;
@property (copy, nonatomic) NSArray *pairCurrencyAmountValues;
@property (nonatomic, readonly) unsigned long long pairCurrencyAmountValuesCount;
@property (copy, nonatomic) NSArray *pairCustomObjects;
@property (nonatomic, readonly) unsigned long long pairCustomObjectsCount;
@property (copy, nonatomic) NSArray *pairDataStrings;
@property (nonatomic, readonly) unsigned long long pairDataStringsCount;
@property (copy, nonatomic) NSArray *pairDistanceValues;
@property (nonatomic, readonly) unsigned long long pairDistanceValuesCount;
@property (copy, nonatomic) NSArray *pairDoubleValues;
@property (nonatomic, readonly) unsigned long long pairDoubleValuesCount;
@property (copy, nonatomic) NSArray *pairImageValues;
@property (nonatomic, readonly) unsigned long long pairImageValuesCount;
@property (copy, nonatomic) NSArray *pairIntegerValues;
@property (nonatomic, readonly) unsigned long long pairIntegerValuesCount;
@property (copy, nonatomic) NSArray *pairLocationValues;
@property (nonatomic, readonly) unsigned long long pairLocationValuesCount;
@property (copy, nonatomic) NSArray *pairPaymentMethodValues;
@property (nonatomic, readonly) unsigned long long pairPaymentMethodValuesCount;
@property (copy, nonatomic) NSArray *pairPersonValues;
@property (nonatomic, readonly) unsigned long long pairPersonValuesCount;
@property (copy, nonatomic) NSArray *pairStringValues;
@property (nonatomic, readonly) unsigned long long pairStringValuesCount;
@property (copy, nonatomic) NSArray *pairTemperatureValues;
@property (nonatomic, readonly) unsigned long long pairTemperatureValuesCount;
@property (copy, nonatomic) NSArray *pairUrlValues;
@property (nonatomic, readonly) unsigned long long pairUrlValuesCount;
@property (nonatomic) _Bool repeated;
@property (nonatomic) _Bool hasRepeated;

+ (_Bool)supportsSecureCoding;
+ (Class)pairCurrencyAmountValueType;
+ (Class)pairCustomObjectType;
+ (Class)pairDataStringType;
+ (Class)pairDistanceValueType;
+ (Class)pairDoubleValueType;
+ (Class)pairImageValueType;
+ (Class)pairIntegerValueType;
+ (Class)pairLocationValueType;
+ (Class)pairPaymentMethodValueType;
+ (Class)pairPersonValueType;
+ (Class)pairStringValueType;
+ (Class)pairTemperatureValueType;
+ (Class)pairUrlValueType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearPairCurrencyAmountValues;
- (void)addPairCurrencyAmountValue:(id)arg1;
- (id)pairCurrencyAmountValueAtIndex:(unsigned long long)arg1;
- (void)clearPairCustomObjects;
- (void)addPairCustomObject:(id)arg1;
- (id)pairCustomObjectAtIndex:(unsigned long long)arg1;
- (void)clearPairDataStrings;
- (void)addPairDataString:(id)arg1;
- (id)pairDataStringAtIndex:(unsigned long long)arg1;
- (void)clearPairDistanceValues;
- (void)addPairDistanceValue:(id)arg1;
- (id)pairDistanceValueAtIndex:(unsigned long long)arg1;
- (void)clearPairDoubleValues;
- (void)addPairDoubleValue:(id)arg1;
- (id)pairDoubleValueAtIndex:(unsigned long long)arg1;
- (void)clearPairImageValues;
- (void)addPairImageValue:(id)arg1;
- (id)pairImageValueAtIndex:(unsigned long long)arg1;
- (void)clearPairIntegerValues;
- (void)addPairIntegerValue:(id)arg1;
- (id)pairIntegerValueAtIndex:(unsigned long long)arg1;
- (void)clearPairLocationValues;
- (void)addPairLocationValue:(id)arg1;
- (id)pairLocationValueAtIndex:(unsigned long long)arg1;
- (void)clearPairPaymentMethodValues;
- (void)addPairPaymentMethodValue:(id)arg1;
- (id)pairPaymentMethodValueAtIndex:(unsigned long long)arg1;
- (void)clearPairPersonValues;
- (void)addPairPersonValue:(id)arg1;
- (id)pairPersonValueAtIndex:(unsigned long long)arg1;
- (void)clearPairStringValues;
- (void)addPairStringValue:(id)arg1;
- (id)pairStringValueAtIndex:(unsigned long long)arg1;
- (void)clearPairTemperatureValues;
- (void)addPairTemperatureValue:(id)arg1;
- (id)pairTemperatureValueAtIndex:(unsigned long long)arg1;
- (void)clearPairUrlValues;
- (void)addPairUrlValue:(id)arg1;
- (id)pairUrlValueAtIndex:(unsigned long long)arg1;

@end
