/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INCurrencyAmount, NSUserActivity;

@protocol INRideCompletionStatusExport <Swift>

@property (retain, nonatomic) NSUserActivity *completionUserActivity;
@property (nonatomic, getter=isCompleted) _Bool completed;
@property (nonatomic, readonly, getter=isCanceled) _Bool canceled;
@property (nonatomic, getter=isMissedPickup) _Bool missedPickup;
@property (retain, nonatomic) INCurrencyAmount *paymentAmount;
@property (nonatomic, getter=isOutstanding) _Bool outstanding;
@property (nonatomic, getter=isCanceledByService) _Bool canceledByService;

+ (unsigned short)completed;
+ (unsigned short)canceledByService;
+ (unsigned short)completedWithSettledPaymentAmount: /* Error: Ran out of types for this method. */;
+ (unsigned short)completedWithOutstandingPaymentAmount: /* Error: Ran out of types for this method. */;
+ (unsigned short)canceledByUser;
+ (unsigned short)canceledMissedPickup;

- (unsigned short)init;

@end
