/*
 Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
 */

#import <Foundation/NSObject.h>

@class CoreTelephonyClient, NPSManager, NSString, NSUserDefaults;

@interface NPHCarrierInfoCompanionReplication : NSObject

{
    CoreTelephonyClient *_coreTelephonyClient;
    NSUserDefaults *_mobilePhoneUserDefaults;
    NSUserDefaults *_nanoPhoneUserDefaults;
    NPSManager *_npsManager;
}

@property (nonatomic, readonly) CoreTelephonyClient *coreTelephonyClient;
@property (nonatomic, readonly) NSUserDefaults *mobilePhoneUserDefaults;
@property (nonatomic, readonly) NSUserDefaults *nanoPhoneUserDefaults;
@property (nonatomic, readonly) NPSManager *npsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)carrierBundleChange:(id)arg1;
- (void)_visualVMSubscriptionStateStatusChanged:(id)arg1;
- (void)_updateShouldHideVoicemailUI;
- (void)_updateIsVisualVoicemailServiceSubscribed;
- (void)_getShouldHideVoicemailUI:(CDUnknownBlockType)arg1;

@end
