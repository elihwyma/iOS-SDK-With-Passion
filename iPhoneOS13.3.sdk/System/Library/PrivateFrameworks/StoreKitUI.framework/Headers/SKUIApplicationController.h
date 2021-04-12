//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/IKAppContextDelegate-Protocol.h>
#import <StoreKitUI/IKApplication-Protocol.h>
#import <StoreKitUI/SKUIModalDocumentDelegate-Protocol.h>
#import <StoreKitUI/SKUIModalSourceViewProvider-Protocol.h>
#import <StoreKitUI/SKUINavigationControllerDelegate-Protocol.h>
#import <StoreKitUI/SKUINavigationDocumentDelegate-Protocol.h>
#import <StoreKitUI/SKUITabBarControllerDelegate-Protocol.h>
#import <StoreKitUI/SKUIURLResolverDelegate-Protocol.h>

@class IKAppContext, NSArray, NSDictionary, NSMutableArray, NSOperationQueue, NSURL, SKUIAppDeviceConfig, SKUIApplicationControllerOptions, SKUIClientContext, SKUIMetricsController, SKUIModalDocumentController, SKUINavigationDocumentController, SKUIPreviewDocumentController, SKUIScrollingTabBarController, SKUISimpleContainerViewController, SKUITabBarController, SKUIURL, SKUIURLResolver, UITabBarController, UIViewController, _SKUIApplicationShutdownHelper;
@protocol IKAppDataStoring, SKUIApplicationDelegate, SKUIStatusOverlayProvider;

@interface SKUIApplicationController : NSObject <SKUIModalDocumentDelegate, SKUIModalSourceViewProvider, SKUINavigationControllerDelegate, SKUINavigationDocumentDelegate, SKUITabBarControllerDelegate, SKUIURLResolverDelegate, UINavigationControllerDelegate, UITabBarControllerDelegate, IKAppContextDelegate, IKApplication>
{
    SKUIURL *_activationURL;
    NSURL *_applicationScriptURL;
    Class _clientContextClass;
    SKUIClientContext *_clientContext;
    id <SKUIApplicationDelegate> _delegate;
    SKUIAppDeviceConfig *_deviceConfig;
    BOOL _didDisplayFirstPage;
    UIViewController *_floatingStatusOverlayViewController;
    BOOL _hidesTabBar;
    BOOL _ignoreDidBecomeActive;
    long long _lastNavigationControllerOperation;
    UIViewController *_lastPoppedViewController;
    NSUInteger _indexOfLastTabNeedingContent;
    NSDictionary *_launchOptions;
    SKUIURL *_legacyLaunchURL;
    id <IKAppDataStoring> _localStorage;
    SKUIModalDocumentController *_modalDocumentController;
    SKUIMetricsController *_metricsController;
    BOOL _mescalPrimeEnabledForXHRRequests;
    SKUISimpleContainerViewController *_navigationContainerViewController;
    NSMutableArray *_navigationDocumentControllers;
    NSOperationQueue *_operationQueue;
    SKUIPreviewDocumentController *_previewDocumentController;
    BOOL _reloadApplicationOnForegroundNotification;
    NSUInteger _resignActiveTaskID;
    UIViewController *_rootViewController;
    IKAppContext *_scriptContext;
    long long _scriptLoadState;
    id <SKUIStatusOverlayProvider> _statusOverlayProvider;
    _SKUIApplicationShutdownHelper *_shutdownHelper;
    BOOL _stopApplicationOnBackgroundNotification;
    SKUITabBarController *_tabBarController;
    NSArray *_tabBarItems;
    SKUINavigationDocumentController *_transientNavigationDocument;
    SKUIURLResolver *_urlResolver;
    id <IKAppDataStoring> _vendorStorage;
    NSMutableArray *_whenLoadedBlocks;
    SKUIApplicationControllerOptions *_options;
    SKUIScrollingTabBarController *_scrollingTabBarController;
}

+ (id)_referrerAppForSourceApplication:(id)arg1 launchURL:(id )arg2;
+ (id)applicationOptionsWithLaunchOptions:(id)arg1;
+ (void)prepareForLaunch;
+ (void)finishedWithConfigurationPreloader;
+ (id)configurationPreloader;
@property(readonly, nonatomic) SKUIScrollingTabBarController *scrollingTabBarController; // @synthesize scrollingTabBarController=_scrollingTabBarController;
@property(readonly, nonatomic) SKUIApplicationControllerOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) SKUIModalDocumentController *modalDocumentController; // @synthesize modalDocumentController=_modalDocumentController;
@property(copy, nonatomic) NSArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;
@property(readonly, nonatomic) UITabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(readonly, nonatomic) SKUIPreviewDocumentController *_previewOverlayDocumentController; // @synthesize _previewOverlayDocumentController=_previewDocumentController;
@property(nonatomic) BOOL mescalPrimeEnabledForXHRRequests; // @synthesize mescalPrimeEnabledForXHRRequests=_mescalPrimeEnabledForXHRRequests;
@property(nonatomic, setter=_setHidesTabBar:) BOOL _hidesTabBar; // @synthesize _hidesTabBar;
@property(nonatomic) __weak id <SKUIApplicationDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_setManifestURLOnUpdatableAssetController:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)_rootDocuments;
- (void)_loadApplicationFromUpdatableAssetsCache:(id)arg1;
- (BOOL)_usesFloatingStatusOverlayForWidth:(double)arg1;
- (id)_transientNavigationDocument;
- (void)_tintTabBarWithViewController:(id)arg1;
- (id)_tabBarController;
- (void)_stopScriptContextForReload;
- (id)_statusOverlayProviderForViewController:(id)arg1;
- (void)_jsLaunchFinishedWithLaunchMetrics:(id)arg1;
- (void)_startScriptContextWithURL:(id)arg1;
- (void)_showStatusOverlayForNavigationController:(id)arg1 viewController:(id)arg2 animated:(BOOL)arg3;
- (void)_showFloatingStatusOverlayAnimated:(BOOL)arg1;
- (BOOL)_shouldUseLegacyURLHandlingForExternalURL:(id)arg1;
- (void)_setClientContextWithDictionary:(id)arg1;
- (BOOL)_sendNativeBackButtonMetricEvents;
- (void)_sendDidDisplayFirstPageIfNecessary;
- (void)_sendClientContextDidChange;
- (void)_retryAfterFailure;
- (void)_resetUserInterfaceAfterStoreFrontChange;
- (void)_removeObserversForReloadNotifications;
- (void)_reloadTabBarWithClientContext:(id)arg1;
- (void)_reloadRootViewControllers;
- (void)_reloadApplication;
- (void)_recordTabBarMetricsEventToSelectViewController:(id)arg1;
- (BOOL)_playPreviewForPreviewTemplate:(id)arg1;
- (BOOL)_needsStatusOverlay;
- (id)_overlayNavigationControllerForViewController:(id)arg1;
- (id)_operationQueue;
- (id)_newNavigationControllerWithTabBarItem:(id)arg1;
- (id)_navigationContainerViewController;
- (void)_loadApplicationScript;
- (void)_legacyResolveExternalURL:(id)arg1;
- (id)_launchOptionsWithURL:(id)arg1;
- (BOOL)_isStoreFront:(id)arg1 equalToStoreFront:(id)arg2;
- (BOOL)_isDisplayingAccountViewController;
- (void)_invalidateApplication;
- (void)_handleScriptUnavailable;
- (CGSize)sizeForNavigationDocument:(id)arg1;
- (void)_fireBlocksAfterLoad;
- (void)_finishWillResignActiveWithDialogState:(BOOL)arg1;
- (void)_failWithError:(id)arg1;
- (void)_failReloadWithError:(id)arg1;
- (id)_existingTabBarController;
- (void)_ensureStackConsistencyForNavigationController:(id)arg1;
- (id)_documentControllerForNavigationController:(id)arg1;
- (void)_dispatchTabBarOnSelect;
- (void)_dispatchTabBarOnNeedsContentForTabAtIndex:(NSUInteger)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (id)_activeNavigationController;
- (void)_updateOverlayNavigationController:(id)arg1;
@property(readonly, nonatomic) SKUINavigationDocumentController *_transientNavigationController;
- (void)_stopApplication;
@property(nonatomic, setter=_setSelectedTabBarIndex:) long long _selectedTabBarIndex;
- (void)_resetDocumentControllers;
@property(readonly, nonatomic) NSArray *_navigationControllers;
@property(readonly, nonatomic) long long _applicationMode;
- (void)_storeFrontChangeNotification:(id)arg1;
- (void)_resetUserInteraceForAccountViewDisappear:(id)arg1;
- (void)_removeStatusOverlayFromAllNavigationControllers;
- (void)_reloadAfterNetworkChange:(id)arg1;
- (void)_previewDocumentIsActiveChangeNotification:(id)arg1;
- (void)_pageDidDisplayNotification:(id)arg1;
- (void)_assetsDidUpdate:(id)arg1;
- (NSUInteger)tabBarControllerSupportedInterfaceOrientations:(id)arg1;
- (void)tabBarController:(id)arg1 willTransitionToSize:(CGSize)arg2 withTransitionCoordinator:(id)arg3;
- (void)setUserInterfaceOverrideOnTabBarController:(id)arg1 forViewController:(id)arg2;
- (BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (BOOL)tabBarController:(id)arg1 shouldFallbackToRootForController:(id)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 didReselectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(BOOL)arg3;
- (NSUInteger)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)URLResolver:(id)arg1 showURL:(id)arg2 withTabIdentifier:(id)arg3;
- (void)URLResolver:(id)arg1 showTransientViewController:(id)arg2;
- (BOOL)URLResolver:(id)arg1 shouldPerformDefaultActionForURL:(id)arg2;
- (void)URLResolver:(id)arg1 didFinishWithResult:(BOOL)arg2;
- (id)presentationViewControllerForURLResolver:(id)arg1;
- (void)tabBarController:(id)arg1 willDisplayViewController:(id)arg2;
- (void)navigationDocumentStackDidChange:(id)arg1;
- (void)navigationDocumentController:(id)arg1 requestsAccessToAppContextUsingBlock:(id /* CDUnknownBlockType */)arg2;
- (id)jsNavigationDocumentForNavigationDocumentController:(id)arg1 inContext:(id)arg2;
- (id)jsNavigationDocumentForNavigationController:(id)arg1 inContext:(id)arg2;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)modalDocumentControllerDidFinish:(id)arg1;
- (long long)modalDocumentController:(id)arg1 barStyleForStackItem:(id)arg2;
- (id)vendorStorage;
- (id)vendorIdentifier;
- (BOOL)shouldIgnoreJSValidation;
- (id)localStorage;
- (id)appLaunchParams;
- (BOOL)appJSURLTrusted;
- (id)appJSURL;
- (BOOL)appIsTrusted;
- (id)appIdentifier;
- (id)activeDocument;
- (id)presentationViewControllerForAppContext:(id)arg1;
- (id)navigationControllerForContext:(id)arg1;
- (id)deviceConfigForContext:(id)arg1;
- (void)appContext:(id)arg1 setPreviewOverlayDocument:(id)arg2 withOptions:(id)arg3;
- (void)appContextNeedsRestart:(id)arg1;
- (void)appContext:(id)arg1 needsReloadWithUrgency:(NSUInteger)arg2 options:(id)arg3;
- (void)appContext:(id)arg1 needsReloadWithUrgency:(NSUInteger)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didExitWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didCompleteSoftwarePurchase:(id)arg2;
- (void)appContext:(id)arg1 didCompletePurchase:(id)arg2;
- (Class)_tabBarControllerClass;
- (Class)_scrollingTabBarControllerClass;
- (Class)_JSITunesStoreClass;
- (void)updateTabBarWithItems:(id)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)updateTabBarWithItems:(id)arg1 animated:(BOOL)arg2;
- (void)showTransientViewController:(id)arg1;
- (void)showStatusOverlayUsingProvider:(id)arg1 animated:(BOOL)arg2;
- (void)showExternalURL:(id)arg1;
- (void)showErrorViewForLaunchFailure;
- (void)showErrorViewWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 buttonAction:(id /* CDUnknownBlockType */)arg4;
- (void)showErrorViewWithTitle:(id)arg1 message:(id)arg2;
- (id)selectTabWithIdentifier:(id)arg1;
@property(readonly, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void)suspendApplicationWithOptions:(id)arg1;
- (void)resumeApplicationWithOptions:(id)arg1;
- (void)recordMetricsEvent:(id)arg1 flushImmediately:(BOOL)arg2;
- (void)loadApplicationWithOptions:(id)arg1;
- (void)loadApplication;
- (void)hideStatusOverlayForProvider:(id)arg1 animated:(BOOL)arg2;
- (void)evaluateBlockWhenLoaded:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)application:(id)arg1 didReceiveURL:(id)arg2;
- (void)dealloc;
- (id)initWithClientContextClass:(Class)arg1 options:(id)arg2;
- (id)initWithClientContextClass:(Class)arg1 tabBarControllerStyle:(long long)arg2;
- (id)initWithClientContextClass:(Class)arg1;
- (id)init;

@end

