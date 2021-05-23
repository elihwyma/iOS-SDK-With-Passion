/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class CoreTelephonyClient, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TUCoreTelephonyClient : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_client;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) CoreTelephonyClient *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)RTTTelephonyUtilitiesClass;
+ (Class)RTTSettingsClass;
+ (id)sharedRTTTelephonyUtilities;

- (id)init;
- (id)initWithQueue:(id)arg1;
- (_Bool)isRTTSupportedForSubscriptionUUID:(id)arg1;
- (_Bool)isTTYEnabledForSubscriptionUUID:(id)arg1;
- (_Bool)isTTYSupportedForSubscriptionUUID:(id)arg1;
- (_Bool)isTTYHardwareAvailableForSubscriptionUUID:(id)arg1;
- (_Bool)isTTYHardwareEnabledForSubscriptionUUID:(id)arg1;
- (_Bool)isTTYHardwareSupportedForSubscriptionUUID:(id)arg1;
- (_Bool)isTTYSoftwareAvailableForSubscriptionUUID:(id)arg1;
- (_Bool)isTTYSoftwareEnabledForSubscriptionUUID:(id)arg1;
- (_Bool)isTTYSoftwareSupportedForSubscriptionUUID:(id)arg1;
- (id)subscriptionForUUID:(id)arg1;
- (_Bool)isRTTSupportedForSubscription:(id)arg1;
- (_Bool)isTTYSoftwareEnabledForSubscription:(id)arg1;
- (_Bool)isTTYHardwareEnabledForSubscription:(id)arg1;
- (_Bool)isTTYEnabledForSubscription:(id)arg1;
- (_Bool)isTTYSupportedForSubscription:(id)arg1;
- (unsigned long long)preferredTransportMethodForSubscription:(id)arg1;
- (_Bool)isTTYHardwareAvailableForSubscription:(id)arg1;
- (_Bool)isTTYHardwareSupportedForSubscription:(id)arg1;
- (_Bool)isTTYSoftwareAvailableForSubscription:(id)arg1;
- (_Bool)isTTYSoftwareSupportedForSubscription:(id)arg1;
- (_Bool)isEmergencyNumberForDigits:(id)arg1 subscription:(id)arg2 error:(id *)arg3;
- (_Bool)isWhitelistedEmergencyNumberForDigits:(id)arg1 subscription:(id)arg2 error:(id *)arg3;
- (_Bool)shouldShowEmergencyCallbackModeAlertForSubscription:(id)arg1 error:(id *)arg2;
- (_Bool)inEmergencyMode;
- (_Bool)isEmergencyNumberForDigits:(id)arg1 subscriptionUUID:(id)arg2 error:(id *)arg3;
- (_Bool)isWhitelistedEmergencyNumberForDigits:(id)arg1 subscriptionUUID:(id)arg2 error:(id *)arg3;
- (_Bool)shouldShowEmergencyCallbackModeAlertForSubscriptionUUID:(id)arg1 error:(id *)arg2;

@end
