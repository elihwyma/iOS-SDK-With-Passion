/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFBrowserContentViewController.h>

#import <SafariServices/Swift-Protocol.h>

@class NSDate, NSString, NSTimer, SFBrowserPersonaAnalyticsHelper, SFUserNotification, WKProcessPool, _SFWebViewUsageMonitor;

__attribute__((visibility("hidden")))
@interface SFBrowserServiceViewController : _SFBrowserContentViewController <Swift>

{
    CDUnknownBlockType _activityViewControllerInfoFetchCompletionHandler;
    _SFWebViewUsageMonitor *_usageMonitor;
    NSDate *_lastHostApplicationSuspendDate;
    WKProcessPool *_processPool;
    _Bool _canNotifyHostApplicationOfRedirects;
    _Bool _touchEventsShouldStopRedirectNotifications;
    _Bool _isExpectingClientRedirect;
    _Bool _hasBegunFirstNavigation;
    _Bool _hasConnectedToHostApplication;
    SFBrowserPersonaAnalyticsHelper *_cachedAnalyticsHelper;
    NSTimer *_redirectNotificationTimer;
    _Bool _hostApplicationIsForeground;
    SFUserNotification *_userNotification;
    NSString *_hostApplicationCallbackURLScheme;
}

@property (retain, nonatomic) SFUserNotification *userNotification;
@property (copy, nonatomic) NSString *hostApplicationCallbackURLScheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_dismiss;
- (void)_willAppearInRemoteViewController;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (void)setDisplayMode:(long long)arg1;
- (id)processPool;
- (void)loadURL:(id)arg1;
- (void)_didLoadWebView;
- (void)startResolveRedirectionForURL:(id)arg1;
- (void)setDismissButtonStyle:(long long)arg1;
- (void)browserViewDidReceiveTouchEvent:(id)arg1;
- (void)linkPreviewHeader:(id)arg1 didEnableLinkPreview:(_Bool)arg2;
- (void)decideCookieSharingForURL:(id)arg1 callbackURLScheme:(id)arg2;
- (unsigned long long)_persona;
- (void)repostNotificationInViewService:(id)arg1;
- (void)didFetchCustomActivities:(id)arg1 excludedActivityTypes:(id)arg2;
- (void)setIsRunningTransitionAnimation:(_Bool)arg1;
- (void)didDetectRemoteViewControllerViewIsHidden;
- (void)didDetectUserInteractionFromHostApp;
- (void)openCurrentURLInSafari;
- (void)updateScrollViewIndicatorVerticalInsets:(struct UIEdgeInsets)arg1 horizontalInsets:(struct UIEdgeInsets)arg2;
- (void)didRequestShowLinkPreviews:(_Bool)arg1;
- (id)websiteDataStoreConfiguration;
- (void)_closeDatabasesOnBackgroundingOrDismissal;
- (id)_analyticsHelper;
- (id)processPoolConfiguration;
- (id)_websiteDataStoreURL;
- (id)_webDataStoreRootURL;
- (_Bool)_ensureWebsiteDataStoreURL:(id)arg1 cookieStoreURL:(id)arg2;
- (_Bool)_redirectToHostAppWithExpectedCallbackSchemeIfPossible:(id)arg1;
- (id)_applicationPayloadForOpeningInSafari;
- (void)webViewController:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webViewControllerDidCancelClientRedirect:(id)arg1;
- (void)webViewController:(id)arg1 willPerformClientRedirectToURL:(id)arg2 withDelay:(double)arg3;
- (void)webViewController:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webViewController:(id)arg1 didFinishDocumentLoadForNavigation:(id)arg2;
- (void)webViewController:(id)arg1 didChangeFullScreen:(_Bool)arg2;
- (void)webViewControllerWebProcessDidCrash:(id)arg1;
- (void)safariActivity:(id)arg1 didFinish:(_Bool)arg2;
- (void)_didResolveDestinationURL:(id)arg1 pendingAppLinkCheck:(_Bool)arg2;
- (void)_getSafariDataSharingModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateRemoteSwipeGestureState;
- (_Bool)_notifyInitialLoadDidFinish:(_Bool)arg1;
- (_Bool)_redirectToHostAppWithNavigationResult:(id)arg1 options:(id)arg2;
- (void)_recordHostAppIdAndURLForTapToRadar:(id)arg1;
- (id)bundleIdentifierForProfileInstallation;
- (id)_hostAppBundleId;
- (_Bool)_shouldReloadImmediatelyAfterPageLoadError;

@end
