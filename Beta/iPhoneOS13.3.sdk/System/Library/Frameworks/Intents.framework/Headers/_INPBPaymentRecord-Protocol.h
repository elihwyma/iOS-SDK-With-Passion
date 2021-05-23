/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBContact, _INPBCurrencyAmount, _INPBPaymentMethodValue, _INPBString;

@protocol _INPBPaymentRecord <Swift>

@property (retain, nonatomic) _INPBCurrencyAmount *currencyAmount;
@property (nonatomic, readonly) _Bool hasCurrencyAmount;
@property (retain, nonatomic) _INPBCurrencyAmount *feeAmount;
@property (nonatomic, readonly) _Bool hasFeeAmount;
@property (retain, nonatomic) _INPBString *note;
@property (nonatomic, readonly) _Bool hasNote;
@property (retain, nonatomic) _INPBContact *payee;
@property (nonatomic, readonly) _Bool hasPayee;
@property (retain, nonatomic) _INPBContact *payer;
@property (nonatomic, readonly) _Bool hasPayer;
@property (retain, nonatomic) _INPBPaymentMethodValue *paymentMethod;
@property (nonatomic, readonly) _Bool hasPaymentMethod;
@property (nonatomic) int status;
@property (nonatomic) _Bool hasStatus;

- (unsigned short)statusAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsStatus: /* Error: Ran out of types for this method. */;

@end
