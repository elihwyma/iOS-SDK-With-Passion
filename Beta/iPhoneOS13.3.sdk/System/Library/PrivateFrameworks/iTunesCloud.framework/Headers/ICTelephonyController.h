/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSString;

@protocol OS_dispatch_queue;

@interface ICTelephonyController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_telephonyCallbackQueue;
    NSString *_phoneNumber;
    CoreTelephonyClient *_telephonyClient;
    CTXPCServiceSubscriptionContext *_telephonySubscriptionContext;
}

@property (copy, nonatomic, readonly) NSString *phoneNumber;
@property (copy, nonatomic, readonly) NSString *providerName;
@property (copy, nonatomic, readonly) NSString *mobileSubscriberCountryCode;
@property (copy, nonatomic, readonly) NSString *mobileSubscriberNetworkCode;
@property (copy, nonatomic, readonly) NSString *IMEI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedController;

- (void)dealloc;
- (id)_init;
- (void)activeSubscriptionsDidChange;
- (void)phoneNumberAvailable:(id)arg1;
- (void)phoneNumberChanged:(id)arg1;
- (id)_telephonyClient;
- (_Bool)_ensureTelephonyHandlesAreReady;
- (id)_telephonySubscriptionContext;
- (_Bool)sendSMSWithText:(id)arg1 toPhoneNumber:(id)arg2 error:(id *)arg3;
- (void)_updatePhoneNumberAllowingDidChangeNotification:(_Bool)arg1;
- (void)_handleActiveSubscriptionsDidChange;

@end
