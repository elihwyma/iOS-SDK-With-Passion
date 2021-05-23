/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INCurrencyAmount, NSSet, NSString, NSUserActivity;

@interface INRideCompletionStatus : NSObject <Swift>

{
    _Bool _completed;
    _Bool _missedPickup;
    _Bool _outstanding;
    _Bool _canceledByService;
    NSUserActivity *_completionUserActivity;
    INCurrencyAmount *_paymentAmount;
    unsigned long long _feedbackType;
    NSSet *_defaultTippingOptions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isCanceledByService) _Bool canceledByService;
@property (retain, nonatomic) NSUserActivity *completionUserActivity;
@property (nonatomic, readonly, getter=isCompleted) _Bool completed;
@property (nonatomic, readonly, getter=isCanceled) _Bool canceled;
@property (nonatomic, readonly, getter=isMissedPickup) _Bool missedPickup;
@property (nonatomic, readonly) INCurrencyAmount *paymentAmount;
@property (nonatomic, readonly) unsigned long long feedbackType;
@property (nonatomic, readonly, getter=isOutstanding) _Bool outstanding;
@property (retain, nonatomic) NSSet *defaultTippingOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)completed;
+ (id)canceledByService;
+ (id)completedWithSettledPaymentAmount:(id)arg1;
+ (id)completedWithOutstandingPaymentAmount:(id)arg1;
+ (id)canceledByUser;
+ (id)canceledMissedPickup;
+ (id)completedWithOutstandingFeedbackType:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_newValue;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)_initCompleted:(_Bool)arg1 canceledByService:(_Bool)arg2 missedPickup:(_Bool)arg3 amount:(id)arg4 feedbackType:(unsigned long long)arg5 outstanding:(_Bool)arg6;
- (id)_initWithValue:(id)arg1;

@end
