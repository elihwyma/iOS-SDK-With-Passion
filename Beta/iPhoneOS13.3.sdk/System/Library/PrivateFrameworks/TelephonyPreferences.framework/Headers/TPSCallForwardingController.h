/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Foundation/NSObject.h>

@class CTCallForwardingValue, CTXPCServiceSubscriptionContext, NSArray, NSDictionary, NSString, TPSCallForwardingRequestController, TPSCarrierBundleController;

@protocol TPSCallForwardingControllerDelegate;

@interface TPSCallForwardingController : NSObject

{
    _Bool _unloading;
    NSArray *_conditionalServiceRequests;
    NSString *_subscriptionISOCountryCode;
    NSArray *_unconditionalServiceRequests;
    id <TPSCallForwardingControllerDelegate> _delegate;
    TPSCarrierBundleController *_carrierBundleController;
    TPSCallForwardingRequestController *_requestController;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    long long _currentServiceType;
    long long _pendingServiceType;
    CTCallForwardingValue *_conditionalServiceBusyValue;
    CTCallForwardingValue *_conditionalServiceUnansweredValue;
    CTCallForwardingValue *_conditionalServiceUnreachableValue;
    CTCallForwardingValue *_unconditionalServiceValue;
}

@property (nonatomic, getter=isUnloading) _Bool unloading;
@property (nonatomic, readonly) TPSCarrierBundleController *carrierBundleController;
@property (nonatomic, readonly) TPSCallForwardingRequestController *requestController;
@property (copy, nonatomic, readonly) NSDictionary *carrierBundleLocalizedStringKeys;
@property (copy, nonatomic, readonly) NSString *subscriptionISOCountryCode;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (nonatomic) long long currentServiceType;
@property (nonatomic) long long pendingServiceType;
@property (nonatomic, readonly, getter=isConditionalServiceLoading) _Bool conditionalServiceLoading;
@property (copy, nonatomic, readonly) NSArray *conditionalServiceRequests;
@property (retain, nonatomic) CTCallForwardingValue *conditionalServiceBusyValue;
@property (retain, nonatomic) CTCallForwardingValue *conditionalServiceUnansweredValue;
@property (retain, nonatomic) CTCallForwardingValue *conditionalServiceUnreachableValue;
@property (nonatomic, readonly, getter=isUnconditionalServiceLoading) _Bool unconditionalServiceLoading;
@property (copy, nonatomic, readonly) NSArray *unconditionalServiceRequests;
@property (retain, nonatomic) CTCallForwardingValue *unconditionalServiceValue;
@property (nonatomic, readonly, getter=isLoading) _Bool loading;
@property (weak, nonatomic) id <TPSCallForwardingControllerDelegate> delegate;
@property (nonatomic, readonly) long long serviceType;
@property (nonatomic, readonly, getter=isConditionalServiceAvailable) _Bool conditionalServiceAvailable;
@property (nonatomic, readonly) long long conditionalServiceState;
@property (copy, nonatomic) NSString *conditionalServiceBusyPhoneNumber;
@property (copy, nonatomic) NSString *conditionalServiceUnansweredPhoneNumber;
@property (copy, nonatomic) NSString *conditionalServiceUnreachablePhoneNumber;
@property (copy, nonatomic, readonly) NSString *localizedConditionalBusyTitle;
@property (copy, nonatomic, readonly) NSString *localizedConditionalUnansweredTitle;
@property (copy, nonatomic, readonly) NSString *localizedConditionalUnreachableTitle;
@property (nonatomic, readonly) long long unconditionalServiceState;
@property (copy, nonatomic) NSString *unconditionalServicePhoneNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithSubscriptionContext:(id)arg1;
- (void)requestController:(id)arg1 didReceiveResponse:(id)arg2;
- (void)sendServicesRequest;
- (void)sendSetAllServicesDisabledRequest;
- (void)enableUnconditionalServiceIfNeeded;
- (void)sendSetUnconditionalServiceDisabledRequest;
- (void)enableConditionalServiceIfNeeded;
- (void)sendEnableSetRequestForValue:(id)arg1;
- (void)sendSetRequestForValue:(id)arg1;
- (id)localizedCarrierBundleStringForKey:(id)arg1;
- (void)sendConditionalServicesRequest;
- (void)sendUnconditionalServicesRequest;
- (void)resetPendingServiceType;
- (void)updateServiceType:(long long)arg1;

@end
