/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBCurrencyAmountValue;

@protocol _INPBPaymentAmountValue <Swift>

@property (nonatomic) int amountType;
@property (nonatomic) _Bool hasAmountType;
@property (retain, nonatomic) _INPBCurrencyAmountValue *value;
@property (nonatomic, readonly) _Bool hasValue;

- (unsigned short)amountTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsAmountType: /* Error: Ran out of types for this method. */;

@end
