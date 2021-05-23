/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UIViewController.h>

#import <NewsUI/Swift-Protocol.h>

@class FCObservable, NFEventManager, NFMultiDelegate, NSHashTable, NSString, NUArticleAdManager, NUArticleContext, SXScrollViewController, SXVideoPlayerViewControllerManager, UIResponder, UIScrollView;

@protocol NUANFDebugSettingsProvider, NUArticleDataProvider, NUArticleKeyCommandManager, NUDocumentSectionBlueprintProvider, NUEndOfArticleDataProvider, NULoadingDelegate, SXAnalyticsReporting;

@interface NUArticleViewController : UIViewController <Swift>

{
    _Bool _articleIsPresentingFullscreen;
    _Bool _isShowingDeferredHardPayall;
    id <NULoadingDelegate> _loadingDelegate;
    NSString *_contentSizeCategory;
    long long _contentScale;
    id <SXAnalyticsReporting> _analyticsReporting;
    FCObservable *_articleViewStyler;
    NFMultiDelegate *_multiScrollViewDelegate;
    UIScrollView *_scrollView;
    NSString *_anchorFragment;
    NUArticleContext *_articleContext;
    SXScrollViewController *_scrollViewController;
    id <NUArticleDataProvider> _articleDataProvider;
    id <NUEndOfArticleDataProvider> _endOfArticleDataProvider;
    NUArticleAdManager *_adManager;
    NFEventManager *_eventManager;
    id <NUArticleKeyCommandManager> _keyCommandManager;
    NSHashTable *_loadingListeners;
    id <NUDocumentSectionBlueprintProvider> _documentSectionBlueprintProvider;
    id <NUANFDebugSettingsProvider> _debugSettingsProvider;
    unsigned long long _presentationMode;
    SXVideoPlayerViewControllerManager *_videoPlayerViewControllerManager;
}

@property (nonatomic, readonly) SXScrollViewController *scrollViewController;
@property (nonatomic, readonly) id <NUArticleDataProvider> articleDataProvider;
@property (nonatomic, readonly) id <NUEndOfArticleDataProvider> endOfArticleDataProvider;
@property (nonatomic, readonly) NUArticleAdManager *adManager;
@property (nonatomic, readonly) NFEventManager *eventManager;
@property (nonatomic, readonly) id <NUArticleKeyCommandManager> keyCommandManager;
@property (nonatomic, readonly) NSHashTable *loadingListeners;
@property (nonatomic, readonly) id <NUDocumentSectionBlueprintProvider> documentSectionBlueprintProvider;
@property (nonatomic, readonly) id <NUANFDebugSettingsProvider> debugSettingsProvider;
@property (nonatomic) _Bool articleIsPresentingFullscreen;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) _Bool isShowingDeferredHardPayall;
@property (nonatomic, readonly) SXVideoPlayerViewControllerManager *videoPlayerViewControllerManager;
@property (weak, nonatomic) id <SXAnalyticsReporting> analyticsReporting;
@property (nonatomic, readonly) FCObservable *articleViewStyler;
@property (nonatomic, readonly) NFMultiDelegate *multiScrollViewDelegate;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (copy, nonatomic) NSString *anchorFragment;
@property (retain, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) long long contentScale;
@property (retain, nonatomic) NUArticleContext *articleContext;
@property (nonatomic, readonly) UIResponder *responder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NULoadingDelegate> loadingDelegate;

+ (id)_parentOrPresentingViewControllerFor:(id)arg1;

- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)becomeFirstResponder;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)resignFirstResponder;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (long long)preferredStatusBarStyle;
- (void)viewSafeAreaInsetsDidChange;
- (_Bool)prefersStatusBarHidden;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (void)reportEvent:(id)arg1;
- (id)initWithArticleDataProvider:(id)arg1 scrollViewController:(id)arg2 articleAdManager:(id)arg3 appStateMonitor:(id)arg4 keyCommandManager:(id)arg5 loadingListeners:(id)arg6 headerBlueprintProvider:(id)arg7 debugSettingsProvider:(id)arg8 videoPlayerViewControllerManager:(id)arg9;
- (void)updateScrollViewControllerWithHeaderBlueprint:(id)arg1;
- (void)updateScrollViewControllerWithContentOverlayBlueprint:(id)arg1 topOffset:(double)arg2;
- (void)updateScrollViewControllerWithFooterBlueprint:(id)arg1;
- (void)updatePresentationAttributes;
- (void)restoreScrollPositionIfNeeded;
- (void)updateTextSelectionForPaywallPresentation;
- (id)currentPresentationAttributes;
- (_Bool)isPreviewingOrShowingHardPaywall;
- (void)scrollViewControllerDidLayoutContent:(id)arg1;
- (void)scrollViewController:(id)arg1 didApplyDocumentStyle:(id)arg2;
- (void)scrollViewControllerRequestsFullscreen:(id)arg1;
- (double)navigationBarHeightForScrollViewController:(id)arg1;
- (double)toolBarHeightForScrollViewController:(id)arg1;
- (void)scrollViewControllerDismissFullscreen:(id)arg1;
- (void)scrollViewController:(id)arg1 enableNavigation:(_Bool)arg2;
- (_Bool)scrollViewController:(id)arg1 shouldOccludeAccessibilityElement:(id)arg2;
- (_Bool)accessibilityShouldScrollForScrollViewController:(id)arg1 defaultValue:(_Bool)arg2;
- (void)viewportDebuggingEnabled:(_Bool)arg1;
- (void)testingConditionEnabled:(_Bool)arg1;

@end
