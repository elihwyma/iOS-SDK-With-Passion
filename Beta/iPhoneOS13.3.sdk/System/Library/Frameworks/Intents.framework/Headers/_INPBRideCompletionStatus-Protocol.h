/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBCurrencyAmountValue, _INPBUserActivity;

@protocol _INPBRideCompletionStatus <Swift>

@property (nonatomic) _Bool canceled;
@property (nonatomic) _Bool hasCanceled;
@property (nonatomic) _Bool canceledByService;
@property (nonatomic) _Bool hasCanceledByService;
@property (nonatomic) _Bool completed;
@property (nonatomic) _Bool hasCompleted;
@property (retain, nonatomic) _INPBUserActivity *completionUserActivity;
@property (nonatomic, readonly) _Bool hasCompletionUserActivity;
@property (copy, nonatomic) NSArray *defaultTippingOptions;
@property (nonatomic, readonly) unsigned long long defaultTippingOptionsCount;
@property (nonatomic, readonly) int *feedbackTypes;
@property (nonatomic, readonly) unsigned long long feedbackTypesCount;
@property (nonatomic) _Bool missedPickup;
@property (nonatomic) _Bool hasMissedPickup;
@property (nonatomic) _Bool outstanding;
@property (nonatomic) _Bool hasOutstanding;
@property (retain, nonatomic) _INPBCurrencyAmountValue *paymentAmount;
@property (nonatomic, readonly) _Bool hasPaymentAmount;

+ (unsigned short)defaultTippingOptionsType;

- (unsigned short)clearDefaultTippingOptions;
- (unsigned short)addDefaultTippingOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)defaultTippingOptionsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearFeedbackTypes;
- (unsigned short)addFeedbackType: /* Error: Ran out of types for this method. */;
- (unsigned short)feedbackTypeAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setFeedbackTypes:count: /* Error: Ran out of types for this method. */;
- (unsigned short)feedbackTypesAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsFeedbackTypes: /* Error: Ran out of types for this method. */;

@end
