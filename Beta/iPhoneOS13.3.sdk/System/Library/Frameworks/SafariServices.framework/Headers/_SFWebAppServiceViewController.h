/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/SFBrowserServiceViewController.h>

@class BKSApplicationStateMonitor, NSMutableArray, NSString, UIView, UIWebClip, WKProcessPool, WKWebsiteDataStore;

@interface _SFWebAppServiceViewController : SFBrowserServiceViewController

{
    UIWebClip *_webClip;
    UIView *_statusBarBackgroundView;
    WKProcessPool *_processPool;
    WKWebsiteDataStore *_websiteDataStore;
    NSMutableArray *_fallbackURLs;
    BKSApplicationStateMonitor *_stateMonitor;
    unsigned int _hostState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)_hostApplicationDidEnterBackground;
- (id)processPool;
- (id)websiteDataStore;
- (_Bool)canPrint;
- (void)navigationBarDoneButtonWasTapped:(id)arg1;
- (unsigned long long)_persona;
- (void)loadWebAppWithIdentifier:(id)arg1;
- (void)webViewControllerDidChangeLoadingState:(id)arg1;
- (void)webViewControllerDidFirstVisuallyNonEmptyLayout:(id)arg1;
- (_Bool)_isURLOutOfScope:(id)arg1 withLoginURLExempted:(_Bool)arg2;
- (_Bool)_isURLOutOfManifestScope:(id)arg1;
- (_Bool)_isURLOutOfLegacyScope:(id)arg1 withLoginURLExempted:(_Bool)arg2;
- (void)webViewController:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)_loadNextFallbackURL;
- (void)webViewController:(id)arg1 didFinishNavigation:(id)arg2;
- (void)_updateDisplayMode;
- (void)webViewControllerDidChangeURL:(id)arg1;
- (id)websiteDataStoreConfiguration;
- (id)webViewConfiguration;
- (void)setWebViewController:(id)arg1;
- (void)_initialLoadFinishedWithSuccess:(_Bool)arg1;
- (_Bool)_clientIsWebApp;
- (void)_loadWebClipPageURL:(id)arg1;
- (void)_handleHostStateUpdate:(id)arg1;
- (void)webViewController:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_usesScrollToTopView;

@end
