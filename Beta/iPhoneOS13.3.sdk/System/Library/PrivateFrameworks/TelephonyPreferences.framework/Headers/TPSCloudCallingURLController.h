/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Foundation/NSObject.h>

@class CTXPCServiceSubscriptionContext, NSData, NSURL, TPSCarrierBundleController, TPSCloudCallingWebViewController, TUSenderIdentityCapabilities;

@protocol TPSCloudCallingURLControllerDelegate;

@interface TPSCloudCallingURLController : NSObject

{
    _Bool _capabilityEnabled;
    _Bool _capabilityProvisioningURLInvalid;
    int _capabilityProvisioningStatus;
    id <TPSCloudCallingURLControllerDelegate> _delegate;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    NSURL *_capabilityProvisioningURL;
    NSData *_capabilityProvisioningPostData;
    TPSCarrierBundleController *_carrierBundleController;
    TPSCloudCallingWebViewController *_webViewController;
}

@property (retain, nonatomic) TPSCarrierBundleController *carrierBundleController;
@property (weak, nonatomic) TPSCloudCallingWebViewController *webViewController;
@property (weak, nonatomic) id <TPSCloudCallingURLControllerDelegate> delegate;
@property (nonatomic, readonly) TUSenderIdentityCapabilities *subscriptionCapabilities;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (nonatomic, readonly) _Bool shouldEnableCapability;
@property (nonatomic, readonly, getter=isCapabilityEnabled) _Bool capabilityEnabled;
@property (nonatomic, readonly) int capabilityProvisioningStatus;
@property (copy, nonatomic, readonly) NSURL *capabilityProvisioningURL;
@property (nonatomic, readonly, getter=isCapabilityProvisioningURLInvalid) _Bool capabilityProvisioningURLInvalid;
@property (copy, nonatomic, readonly) NSData *capabilityProvisioningPostData;

- (id)init;
- (id)initWithSubscriptionContext:(id)arg1;
- (void)enableCapability;
- (void)reloadWebViewController;
- (void)webSheetCompletion;
- (id)subscriptionCapabilitiesForSubscriptionContextUUID:(id)arg1;
- (void)loadWebViewController;
- (id)genericErrorAlertController;
- (id)_webViewControllerWithType:(long long)arg1;
- (id)provisionCapabilityController;
- (id)updateEmergencyAddressController;

@end
