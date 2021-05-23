/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@interface AMSCardEnrollment : NSObject

+ (id)paymentServicesMerchantURL;
+ (id)_paymentServicesMerchantURLPromise;
+ (id)_shouldAttemptApplePayWithCountryCode:(id)arg1 paymentNetworks:(id)arg2;
+ (id)_currentIdentifier;
+ (id)_cardEligibilityStatusForCountryCode:(id)arg1;
+ (_Bool)shouldAttemptApplePayClassicWithCountryCode:(id)arg1 paymentNetworks:(id)arg2 accessControlRef:(struct __SecAccessControl *)arg3;
+ (void)clearAutoEnrollmentIdentifier;
+ (_Bool)shouldAttemptAutoEnrollmentWithCountryCode:(id)arg1;
+ (_Bool)shouldUseAutoEnrollmentWithPercentage:(double)arg1 sessionDuration:(double)arg2;
+ (void)updateAutoEnrollmentIdentifier;
+ (_Bool)isBiometricACLUpgradeRequired;
+ (_Bool)shouldAttemptAutoEnrollment;
+ (_Bool)shouldAttemptApplePayClassicWithCountryCode:(id)arg1 paymentNetworks:(id)arg2;

@end
