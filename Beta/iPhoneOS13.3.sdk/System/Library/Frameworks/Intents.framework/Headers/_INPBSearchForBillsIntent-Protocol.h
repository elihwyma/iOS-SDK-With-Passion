/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBBillPayeeValue, _INPBDateTimeRange, _INPBIntentMetadata;

@protocol _INPBSearchForBillsIntent <Swift>

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

- (unsigned short)statusAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)billTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsBillType: /* Error: Ran out of types for this method. */;

@end
