/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyPreferences/TPSCloudCallingURLController.h>

@class NSString;

@interface TPSCloudCallingEmergencyAddressURLController : TPSCloudCallingURLController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)didChangeWiFiCallingProvisionalURLForSenderIdentityWithUUID:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1;
- (void)enableCapability;
- (void)webSheetCompletion;
- (_Bool)isCapabilityEnabled;
- (int)capabilityProvisioningStatus;
- (id)capabilityProvisioningURL;
- (_Bool)isCapabilityProvisioningURLInvalid;
- (id)capabilityProvisioningPostData;

@end
