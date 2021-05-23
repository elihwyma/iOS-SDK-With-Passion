/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Foundation/NSObject.h>

@class CTXPCServiceSubscriptionContext, NSDictionary, NSString, TPSCarrierBundleController, TUSenderIdentityCapabilities;

@protocol TPSCloudCallingThumperControllerDelegate;

@interface TPSCloudCallingThumperController : NSObject

{
    id <TPSCloudCallingThumperControllerDelegate> _delegate;
    TPSCarrierBundleController *_carrierBundleController;
    NSDictionary *_encryptedIdentityInfo;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    TUSenderIdentityCapabilities *_subscriptionCapabilities;
}

@property (retain, nonatomic) TPSCarrierBundleController *carrierBundleController;
@property (copy, nonatomic) NSDictionary *encryptedIdentityInfo;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (retain, nonatomic) TUSenderIdentityCapabilities *subscriptionCapabilities;
@property (weak, nonatomic) id <TPSCloudCallingThumperControllerDelegate> delegate;
@property (nonatomic, getter=isThumperCallingEnabled) _Bool thumperCallingEnabled;
@property (nonatomic, readonly) _Bool supportsThumperCalling;
@property (copy, nonatomic, readonly) NSString *localizedCarrierName;

- (id)init;
- (id)initWithSubscriptionContext:(id)arg1;

@end
