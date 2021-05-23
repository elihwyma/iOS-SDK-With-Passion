/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBCurrencyAmountValue, _INPBDecimalNumberValue, _INPBValueMetadata;

@protocol _INPBBalanceAmountValue <Swift>

@property (retain, nonatomic) _INPBCurrencyAmountValue *currencyAmount;
@property (nonatomic, readonly) _Bool hasCurrencyAmount;
@property (retain, nonatomic) _INPBDecimalNumberValue *customAmount;
@property (nonatomic, readonly) _Bool hasCustomAmount;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasType;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

- (unsigned short)typeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsType: /* Error: Ran out of types for this method. */;

@end
