/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSCardEnrollmentWallet : NSObject

+ (id)gsTokenForAccount:(id)arg1 error:(id *)arg2;
+ (id)headersForAccount:(id)arg1;
+ (id)countryCodeWithBagContract:(id)arg1;
+ (_Bool)shouldUseSilentEnrollmentWithBagContract:(id)arg1;
+ (id)silentEnrollmentEligibilityURLWithBagContract:(id)arg1;
+ (id)silentEnrollmentPaymentSessionURLWithBagContract:(id)arg1;
+ (id)silentEnrollmentVerificationURLWithBagContract:(id)arg1;

@end
