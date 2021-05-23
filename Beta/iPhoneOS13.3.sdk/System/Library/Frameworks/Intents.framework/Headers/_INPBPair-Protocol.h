/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@protocol _INPBPair <Swift>

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

+ (unsigned short)pairCurrencyAmountValueType;
+ (unsigned short)pairCustomObjectType;
+ (unsigned short)pairDataStringType;
+ (unsigned short)pairDistanceValueType;
+ (unsigned short)pairDoubleValueType;
+ (unsigned short)pairImageValueType;
+ (unsigned short)pairIntegerValueType;
+ (unsigned short)pairLocationValueType;
+ (unsigned short)pairPaymentMethodValueType;
+ (unsigned short)pairPersonValueType;
+ (unsigned short)pairStringValueType;
+ (unsigned short)pairTemperatureValueType;
+ (unsigned short)pairUrlValueType;

- (unsigned short)clearPairCurrencyAmountValues;
- (unsigned short)addPairCurrencyAmountValue: /* Error: Ran out of types for this method. */;
- (unsigned short)pairCurrencyAmountValueAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPairCustomObjects;
- (unsigned short)addPairCustomObject: /* Error: Ran out of types for this method. */;
- (unsigned short)pairCustomObjectAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPairDataStrings;
- (unsigned short)addPairDataString: /* Error: Ran out of types for this method. */;
- (unsigned short)pairDataStringAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPairDistanceValues;
- (unsigned short)addPairDistanceValue: /* Error: Ran out of types for this method. */;
- (unsigned short)pairDistanceValueAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPairDoubleValues;
- (unsigned short)addPairDoubleValue: /* Error: Ran out of types for this method. */;
- (unsigned short)pairDoubleValueAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPairImageValues;
- (unsigned short)addPairImageValue: /* Error: Ran out of types for this method. */;
- (unsigned short)pairImageValueAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPairIntegerValues;
- (unsigned short)addPairIntegerValue: /* Error: Ran out of types for this method. */;
- (unsigned short)pairIntegerValueAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPairLocationValues;
- (unsigned short)addPairLocationValue: /* Error: Ran out of types for this method. */;
- (unsigned short)pairLocationValueAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPairPaymentMethodValues;
- (unsigned short)addPairPaymentMethodValue: /* Error: Ran out of types for this method. */;
- (unsigned short)pairPaymentMethodValueAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPairPersonValues;
- (unsigned short)addPairPersonValue: /* Error: Ran out of types for this method. */;
- (unsigned short)pairPersonValueAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPairStringValues;
- (unsigned short)addPairStringValue: /* Error: Ran out of types for this method. */;
- (unsigned short)pairStringValueAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPairTemperatureValues;
- (unsigned short)addPairTemperatureValue: /* Error: Ran out of types for this method. */;
- (unsigned short)pairTemperatureValueAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPairUrlValues;
- (unsigned short)addPairUrlValue: /* Error: Ran out of types for this method. */;
- (unsigned short)pairUrlValueAtIndex: /* Error: Ran out of types for this method. */;

@end
