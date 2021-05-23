/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ISOperation, NSString, NSURL, SKUIPassbookLoader, SKUIURL, SUMediaPlayerViewController, SUPlaceholderViewController, SUPreviewOverlayViewController, SUSectionsResponse, SUTabBarController, UINavigationController;

@interface SUClientApplicationController

{
    SUMediaPlayerViewController *_activeMediaPlayer;
    NSString *_exitStoreButtonTitle;
    SUPlaceholderViewController *_fetchSectionsPlaceholder;
    long long _ignoreDownloadQueueChangeCount;
    SKUIURL *_launchURL;
    SUSectionsResponse *_lastBackgroundSectionsResponse;
    SUSectionsResponse *_lastSectionsResponse;
    ISOperation *_loadSectionsOperation;
    id _locationObserver;
    SKUIPassbookLoader *_passbookLoader;
    NSString *_preMediaDefaultPNG;
    SUPreviewOverlayViewController *_previewOverlay;
    _Bool _reloadForStorefrontChangeAfterAccountSetup;
    _Bool _reloadSectionsOnNextLaunch;
    _Bool _shouldPrepareUserInterfaceWhenActivated;
    SUTabBarController *_tabBarController;
}

@property (retain, nonatomic, getter=_activeMediaPlayer, setter=_setActiveMediaPlayer:) SUMediaPlayerViewController *_activeMediaPlayer;
@property (nonatomic, readonly, getter=isIgnoringDownloadQueueChanges) _Bool ignoringDownloadQueueChanges;
@property (nonatomic, readonly) NSString *defaultPNGNameForSuspend;
@property (nonatomic, readonly) NSURL *launchURL;
@property (nonatomic, readonly, getter=wasLaunchedFromLibrary) _Bool launchedFromLibrary;
@property (nonatomic, readonly, getter=isTabBarControllerLoaded) _Bool tabBarControllerLoaded;
@property (nonatomic, readonly) SUTabBarController *tabBarController;
@property (nonatomic, readonly) UINavigationController *topNavigationController;
@property (nonatomic) _Bool shouldPrepareUserInterfaceWhenActivated;
@property (copy, nonatomic) NSString *exitStoreButtonTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancelAllOperations;
- (double)defaultImageSnapshotExpiration;
- (void)setupUI;
- (void)becomeActive;
- (void)resignActive;
- (id)_accountViewController;
- (void)_showPreviewOverlayAnimated:(_Bool)arg1;
- (void)clientInterface:(id)arg1 hidePreviewOverlayAnimated:(_Bool)arg2;
- (void)clientInterface:(id)arg1 showPreviewOverlayAnimated:(_Bool)arg2;
- (id)previewOverlayForClientInterface:(id)arg1;
- (void)returnToLibraryForClientInterface:(id)arg1;
- (id)tabBarControllerForClientInterface:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (id)presentationViewControllerForPassbookLoader:(id)arg1;
- (void)passbookLoaderDidFinish:(id)arg1;
- (_Bool)openClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3;
- (id)copySuspendSettings;
- (void)exitStoreAfterDialogsDismiss;
- (id)initWithClientInterface:(id)arg1;
- (id)overlayBackgroundViewController;
- (_Bool)tabBarController:(id)arg1 shouldShowSection:(id)arg2;
- (_Bool)presentOverlayBackgroundViewController:(id)arg1;
- (void)dismissOverlayBackgroundViewController;
- (id)_previewOverlayViewController;
- (_Bool)selectSectionWithIdentifier:(id)arg1;
- (void)_reloadForNetworkTypeChange:(id)arg1;
- (_Bool)dismissTopViewControllerAnimated:(_Bool)arg1;
- (void)returnToLibrary;
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
- (id)_resumableViewController;
- (_Bool)_reloadForStorefrontChange;
- (void)_retrySectionsAfterNetworkTransition;
- (_Bool)_showWildcatAccountViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_handleAccountURL:(id)arg1;
- (void)_defaultHandleApplicationURLRequestProperties:(id)arg1;
- (void)_handleSectionsLoadFailedWithError:(id)arg1;
- (void)_reloadWithSectionsResponse:(id)arg1;
- (void)presentExternalURLViewController:(id)arg1;
- (_Bool)reloadSectionWithIdentifier:(id)arg1 url:(id)arg2;
- (void)bagDidLoadNotification:(id)arg1;
- (_Bool)displayClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3;
- (_Bool)presentAccountViewController:(id)arg1 showNavigationBar:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_setupTabBarController;
- (void)_openClientURL:(id)arg1;
- (id)_showPageForExternalOriginatedURLBagKey:(id)arg1;
- (id)_newTabBarController;
- (void)_handleSearchURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
- (void)_handleDonationURL:(id)arg1;
- (void)_handleAddPassbookPassURL:(id)arg1;
- (_Bool)_displayClientURL:(id)arg1;
- (void)_restorePreMediaPlayerSettings;
- (void)_cancelSectionFetchPlaceholder;
- (void)beginIgnoringDownloadQueueChanges;
- (void)endIgnoringDownloadQueueChanges;
- (void)prepareUserInterface;
- (id)showMainPageForItemKind:(id)arg1 sectionIdentifiers:(id)arg2;

@end
