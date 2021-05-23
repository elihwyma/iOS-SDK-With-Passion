/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class NSString;

@interface AMSCardEnrollmentPaymentSessionTask : AMSTask <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)_bagKeySet;
+ (id)_performSilentEnrollmentPaymentSessionWithContext:(id)arg1;
+ (id)performPaymentSessionEnrollment;
+ (id)performPaymentSessionEnrollmentWithBag:(id)arg1;
+ (id)_paymentServiceURLStringForMerchantURL:(id)arg1;
+ (void)paymentSessionWithCompletion:(CDUnknownBlockType)arg1;
+ (void)paymentSessionWithBag:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
