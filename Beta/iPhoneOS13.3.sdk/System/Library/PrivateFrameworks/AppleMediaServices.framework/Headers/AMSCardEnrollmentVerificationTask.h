/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class NSString;

@interface AMSCardEnrollmentVerificationTask : AMSTask <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)performPaymentVerificationForPayment:(id)arg1 isDefault:(_Bool)arg2;
+ (id)performPaymentVerificationForPayment:(id)arg1 isDefault:(_Bool)arg2 bag:(id)arg3;
+ (id)_bagKeySet;
+ (id)_performSilentEnrollmentPaymentSessionWithContext:(id)arg1;
+ (void)verifyPayment:(id)arg1 isDefault:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)verifyPayment:(id)arg1 isDefault:(_Bool)arg2 bag:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
