/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSOperation, NSOperationQueue, UIViewController, VSAppSettingsViewModel, VSIdentityProvider, VSOptional, VSPersistentStorage, VSRestrictionsCenter;

@interface VSAppSettingsFacade : NSObject

{
    _Bool _hasChannelApps;
    _Bool _needsUpdateApps;
    _Bool _needsPresentationOfMVPDAppInstallPromptIfAvailable;
    int _registrationToken;
    VSIdentityProvider *_identityProvider;
    NSArray *_decidedApps;
    NSArray *_availableApps;
    NSOperationQueue *_privateQueue;
    NSOperation *_currentPresentationOperation;
    VSPersistentStorage *_storage;
    VSRestrictionsCenter *_restrictionsCenter;
    VSOptional *_identityProviderID;
    NSArray *_featuredAdamIDs;
    NSArray *_knownAppBundles;
    NSArray *_unredeemedVouchers;
    VSAppSettingsViewModel *_mvpdAppSettingsViewModel;
    UIViewController *_mvpdInstallPromptPresentingViewController;
}

@property (copy, nonatomic) NSArray *decidedApps;
@property (copy, nonatomic) NSArray *availableApps;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) NSOperation *currentPresentationOperation;
@property (retain, nonatomic) VSPersistentStorage *storage;
@property (retain, nonatomic) VSRestrictionsCenter *restrictionsCenter;
@property (copy, nonatomic) VSOptional *identityProviderID;
@property (copy, nonatomic) NSArray *featuredAdamIDs;
@property (copy, nonatomic) NSArray *knownAppBundles;
@property (copy, nonatomic) NSArray *unredeemedVouchers;
@property (nonatomic) _Bool needsUpdateApps;
@property (nonatomic) int registrationToken;
@property (retain, nonatomic) VSAppSettingsViewModel *mvpdAppSettingsViewModel;
@property (nonatomic) _Bool needsPresentationOfMVPDAppInstallPromptIfAvailable;
@property (retain, nonatomic) UIViewController *mvpdInstallPromptPresentingViewController;
@property (retain, nonatomic) VSIdentityProvider *identityProvider;
@property (nonatomic) _Bool hasChannelApps;

- (id)init;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)_fetchOperationForAdamIDs:(id)arg1;
- (void)_updateApps;
- (void)_setNeedsUpdateApps;
- (_Bool)shouldShowMVPDAppInstallPrompt;
- (void)presentMVPDAppInstallPromptFromViewController:(id)arg1;
- (id)initWithStorage:(id)arg1 restrictionsCenter:(id)arg2;
- (_Bool)shouldShowMVPDAppInstallPromptFromViewController:(id)arg1;

@end
