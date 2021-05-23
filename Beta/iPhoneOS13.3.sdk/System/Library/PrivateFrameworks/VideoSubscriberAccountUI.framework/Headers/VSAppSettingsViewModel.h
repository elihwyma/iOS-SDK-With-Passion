/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class LSApplicationWorkspace, NSString, NSURL, UIImage, VSAppDescription, VSOptional, VSPrivacyFacade, VSRestrictionsCenter;

@interface VSAppSettingsViewModel : NSObject

{
    int _registrationToken;
    NSString *_adamID;
    NSString *_bundleID;
    UIImage *_icon;
    NSString *_displayName;
    NSString *_storeName;
    long long _installState;
    long long _privacyState;
    VSPrivacyFacade *_privacyFacade;
    LSApplicationWorkspace *_workspace;
    VSRestrictionsCenter *_restrictionsCenter;
    struct __CFBundle *_bundle;
    VSAppDescription *_appDescription;
    NSString *_buyParams;
    VSOptional *_voucher;
}

@property (nonatomic) long long installState;
@property (nonatomic) long long privacyState;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) VSPrivacyFacade *privacyFacade;
@property (retain, nonatomic) LSApplicationWorkspace *workspace;
@property (nonatomic) int registrationToken;
@property (retain, nonatomic) VSRestrictionsCenter *restrictionsCenter;
@property (nonatomic) struct __CFBundle *bundle;
@property (retain, nonatomic) VSAppDescription *appDescription;
@property (copy, nonatomic) NSString *buyParams;
@property (retain, nonatomic) VSOptional *voucher;
@property (copy, nonatomic, readonly) NSString *adamID;
@property (copy, nonatomic, readonly) NSString *bundleID;
@property (copy, nonatomic, readonly) NSURL *appStoreURL;
@property (copy, nonatomic, readonly) NSString *storeName;
@property (copy, nonatomic, readonly) NSString *installationTitle;
@property (copy, nonatomic, readonly) NSString *unavailableTitle;
@property (copy, nonatomic, readonly) NSString *launchAppTitle;
@property (nonatomic, readonly) _Bool canChangePrivacyAccess;
@property (nonatomic, getter=isAccessGranted) _Bool accessGranted;
@property (nonatomic, readonly) _Bool canRevokeVoucher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingAccessGranted;

- (id)init;
- (void)dealloc;
- (id)name;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsDidFailToUninstall:(id)arg1;
- (id)initWithApplicationWorkspace:(id)arg1;
- (void)launchApp;
- (id)appAdamIDs;
- (id)appBundleIDs;
- (id)iconURLForSize:(struct CGSize)arg1;
- (void)_updatePrivacyState;
- (id)initWithBundle:(struct __CFBundle *)arg1 restrictionsCenter:(id)arg2 privacyFacade:(id)arg3;
- (void)_grantPrivacyAccess;
- (void)_denyPrivacyAccess;
- (id)initWithBundle:(struct __CFBundle *)arg1 restrictionsCenter:(id)arg2 privacyFacade:(id)arg3 adamID:(id)arg4;
- (id)initWithAppDescription:(id)arg1 privacyVoucher:(id)arg2 restrictionsCenter:(id)arg3 privacyFacade:(id)arg4;
- (void)revokeVoucher;
- (void)installApp;
- (id)appIconURLForSize:(struct CGSize)arg1;

@end
