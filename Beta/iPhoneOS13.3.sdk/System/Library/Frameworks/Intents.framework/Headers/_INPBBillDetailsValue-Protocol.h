/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBBillPayeeValue, _INPBCurrencyAmountValue, _INPBDateTime, _INPBValueMetadata;

@protocol _INPBBillDetailsValue <Swift>

@property (retain, nonatomic) _INPBCurrencyAmountValue *amountDue;
@property (nonatomic, readonly) _Bool hasAmountDue;
@property (retain, nonatomic) _INPBBillPayeeValue *billPayee;
@property (nonatomic, readonly) _Bool hasBillPayee;
@property (nonatomic) int billType;
@property (nonatomic) _Bool hasBillType;
@property (retain, nonatomic) _INPBDateTime *dueDate;
@property (nonatomic, readonly) _Bool hasDueDate;
@property (retain, nonatomic) _INPBCurrencyAmountValue *lateFee;
@property (nonatomic, readonly) _Bool hasLateFee;
@property (retain, nonatomic) _INPBCurrencyAmountValue *minimumDue;
@property (nonatomic, readonly) _Bool hasMinimumDue;
@property (retain, nonatomic) _INPBDateTime *paymentDate;
@property (nonatomic, readonly) _Bool hasPaymentDate;
@property (nonatomic) int status;
@property (nonatomic) _Bool hasStatus;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

- (unsigned short)statusAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)billTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsBillType: /* Error: Ran out of types for this method. */;

@end
