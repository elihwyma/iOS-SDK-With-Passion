/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Foundation/NSObject.h>

@class CTXPCServiceSubscriptionContext, NSDictionary, NSString, TPSCarrierBundleController, TPSCloudCallingEmergencyAddressURLController, TPSCloudCallingThumperProvisioningURLController, TPSEncryptedIdentityClient, TUSenderIdentityCapabilities;

@interface TPSWiFiCallingController : NSObject

{
    TPSCloudCallingEmergencyAddressURLController *_emergencyAddressURLController;
    TPSCloudCallingThumperProvisioningURLController *_thumperProvisioningURLController;
    TPSCarrierBundleController *_carrierBundleController;
    TPSEncryptedIdentityClient *_encryptedIdentityClient;
    NSDictionary *_encryptedIdentityInfo;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    TUSenderIdentityCapabilities *_subscriptionCapabilities;
}

@property (retain, nonatomic) TPSCarrierBundleController *carrierBundleController;
@property (retain, nonatomic) TPSEncryptedIdentityClient *encryptedIdentityClient;
@property (copy, nonatomic) NSDictionary *encryptedIdentityInfo;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (retain, nonatomic) TUSenderIdentityCapabilities *subscriptionCapabilities;
@property (nonatomic, readonly) _Bool supportsEncryptedIdentity;
@property (nonatomic, getter=isThumperCallingEnabled) _Bool thumperCallingEnabled;
@property (nonatomic, getter=isWiFiCallingEnabled) _Bool wiFiCallingEnabled;
@property (nonatomic, getter=isWiFiCallingRoamingEnabled) _Bool wiFiCallingRoamingEnabled;
@property (nonatomic, readonly) _Bool supportsThumperCalling;
@property (nonatomic, readonly) _Bool supportsWiFiCalling;
@property (nonatomic, readonly) _Bool supportsWiFiEmergencyCalling;
@property (copy, nonatomic, readonly) NSString *localizedCarrierName;
@property (retain, nonatomic) TPSCloudCallingEmergencyAddressURLController *emergencyAddressURLController;
@property (retain, nonatomic) TPSCloudCallingThumperProvisioningURLController *thumperProvisioningURLController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)didChangeWiFiCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1;
- (void)didChangeThumperCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1;
- (id)subscriptionCapabilitiesForSubscriptionContextUUID:(id)arg1;

@end
