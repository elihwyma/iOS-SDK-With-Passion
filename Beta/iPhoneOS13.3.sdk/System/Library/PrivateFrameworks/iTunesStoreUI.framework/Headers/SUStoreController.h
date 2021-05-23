/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class ISOperation, MFMailComposeViewController, NSArray, NSDictionary, NSString, NSURL, SUClient, SUSectionsResponse, SUTabBarController, UINavigationController, UIWindow;

@interface SUStoreController : NSObject

{
    SUClient *_client;
    SUSectionsResponse *_lastBackgroundSectionsResponse;
    SUSectionsResponse *_lastSectionsResponse;
    NSURL *_launchURL;
    ISOperation *_loadSectionsOperation;
    NSString *_localStoreFrontAtLastSuspend;
    id _locationObserver;
    NSArray *_overlayConfigurations;
    _Bool _reloadForStorefrontChangeAfterAccountSetup;
    _Bool _reloadSectionsOnNextLaunch;
    NSString *_synchedStoreFrontAtLastSuspend;
    SUTabBarController *_tabBarController;
    MFMailComposeViewController *_mailComposeViewController;
    NSDictionary *_storeFrontLanguages;
}

@property (retain, nonatomic) NSURL *launchURL;
@property (nonatomic, readonly) NSString *defaultPNGNameForSuspend;
@property (nonatomic, readonly, getter=isTabBarControllerLoaded) _Bool tabBarControllerLoaded;
@property (nonatomic, readonly) SUTabBarController *tabBarController;
@property (nonatomic, readonly) UINavigationController *topNavigationController;
@property (nonatomic, readonly, getter=isStoreEnabled) _Bool storeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIWindow *window;

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)cancelAllOperations;
- (void)connect;
- (double)defaultImageSnapshotExpiration;
- (void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(_Bool)arg3;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)setupUI;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)prepareForSuspend;
- (void)purchaseManager:(id)arg1 didAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
- (void)purchaseManagerDidEndUpdates:(id)arg1;
- (void)purchaseManagerWillBeginUpdates:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (id)copySuspendSettings;
- (void)exitStoreAfterDialogsDismiss;
- (id)overlayBackgroundViewController;
- (_Bool)presentOverlayBackgroundViewController:(id)arg1;
- (void)dismissOverlayBackgroundViewController;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (_Bool)selectSectionWithIdentifier:(id)arg1;
- (void)handleApplicationURL:(id)arg1;
- (void)_reloadForNetworkTypeChange:(id)arg1;
- (_Bool)matchesClientApplication:(id)arg1;
- (id)overlayConfigurationForStorePage:(id)arg1;
- (id)newScriptInterface;
- (void)_bagDidLoadNotification:(id)arg1;
- (_Bool)client:(id)arg1 presentModalViewController:(id)arg2 animated:(_Bool)arg3;
- (id)topViewControllerForClient:(id)arg1;
- (_Bool)client:(id)arg1 presentAccountViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)client:(id)arg1 openInternalURL:(id)arg2;
- (void)exitStoreWithReason:(long long)arg1;
- (_Bool)libraryContainsItemIdentifier:(unsigned long long)arg1;
- (void)_selectFooterSectionNotification:(id)arg1;
- (void)_storeFrontChangedNotification:(id)arg1;
- (void)_accountControllerDisappearedNotification:(id)arg1;
- (void)tearDownUI;
- (void)_cancelLoadSectionsOperation;
- (void)_handleFinishedBackgroundLoadSectionsOperation:(id)arg1;
- (_Bool)_loadSectionsAllowingCache:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_presentSectionFetchUI;
- (void)_handleFinishedLoadSectionsOperation:(id)arg1;
- (void)_cancelSuspendAfterDialogsDismissed;
- (void)_dialogDidFinishNotification:(id)arg1;
- (_Bool)_isAccountViewControllerVisible;
- (void)_saveArchivedNavigationPath;
- (id)_resumableViewController;
- (_Bool)_reloadForStorefrontChange;
- (void)_reloadOverlayConfigurations;
- (void)_retrySectionsAfterNetworkTransition;
- (void)_mainThreadStoreFrontChangedNotification:(id)arg1;
- (_Bool)_showWildcatAccountViewController:(id)arg1 animated:(_Bool)arg2;
- (void)endPurchaseBatch;
- (void)beginPurchaseBatch;
- (void)_handleSearchURL:(id)arg1;
- (void)_handleAccountURL:(id)arg1;
- (void)_defaultHandleApplicationURLRequestProperties:(id)arg1;
- (void)composeEmailByRestoringAutosavedMessage;
- (void)_handleSectionsLoadFailedWithError:(id)arg1;
- (void)_reloadWithSectionsResponse:(id)arg1;
- (void)presentExternalURLViewController:(id)arg1;
- (_Bool)isComposingEmail;
- (void)presentMailComposeViewController:(id)arg1 animated:(_Bool)arg2;
- (void)dismissMailComposeViewControllerAnimated:(_Bool)arg1;
- (id)downloadQueueForClient:(id)arg1 downloadKinds:(id)arg2;
- (_Bool)reloadSectionWithIdentifier:(id)arg1 url:(id)arg2;
- (_Bool)showDialogForCapabilities:(id)arg1 mismatches:(id)arg2;
- (id)storeContentLanguage;

@end
