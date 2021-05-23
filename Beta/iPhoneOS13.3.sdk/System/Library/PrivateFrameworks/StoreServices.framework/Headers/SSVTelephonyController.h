/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSString;

@protocol OS_dispatch_queue;

@interface SSVTelephonyController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_queue> *_telephonyCallbackQueue;
    _Bool _hasTelephonyCapability;
    NSString *_phoneNumber;
    NSString *_operatorName;
    NSString *_registrationStatus;
    CoreTelephonyClient *_telephonyClient;
    CTXPCServiceSubscriptionContext *_telephonySubscriptionContext;
}

@property (copy, nonatomic, readonly) NSString *phoneNumber;
@property (copy, nonatomic, readonly) NSString *operatorName;
@property (copy, nonatomic, readonly) NSString *providerName;
@property (copy, nonatomic, readonly) NSString *mobileSubscriberCountryCode;
@property (copy, nonatomic, readonly) NSString *mobileSubscriberNetworkCode;
@property (copy, nonatomic, readonly) NSString *registrationStatus;
@property (copy, nonatomic, readonly) NSString *IMEI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedController;
+ (_Bool)_hasRequiredTelephonyEntitlement;

- (void)dealloc;
- (id)_init;
- (id)_phoneNumber;
- (void)activeSubscriptionsDidChange;
- (void)operatorNameChanged:(id)arg1 name:(id)arg2;
- (void)displayStatusChanged:(id)arg1 status:(id)arg2;
- (void)phoneNumberAvailable:(id)arg1;
- (void)phoneNumberChanged:(id)arg1;
- (id)_telephonyClient;
- (id)_registrationStatus;
- (_Bool)_ensureTelephonyHandlesAreReady;
- (id)_operatorName;
- (void)_updateRegistrationStatus;
- (void)_updateOperatorName;
- (void)_updatePhoneNumber;
- (id)_telephonySubscriptionContext;
- (_Bool)sendSMSWithText:(id)arg1 toPhoneNumber:(id)arg2 countryCode:(id)arg3 error:(id *)arg4;

@end
