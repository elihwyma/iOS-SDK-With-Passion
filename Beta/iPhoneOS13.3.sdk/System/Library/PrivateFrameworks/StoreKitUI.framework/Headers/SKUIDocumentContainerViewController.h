/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

@class IKAppDocument, NSArray, NSDictionary, NSNumber, NSSet, NSString, NSValue, SKUIMediaQueryEvaluator, SKUIMetricsDOMChangeQueue, SKUIMetricsPageRenderEvent, SKUINavigationBarController, SKUIToolbarController, SSVLoadURLOperation, UIScrollView, UIView, UIViewController;

@interface SKUIDocumentContainerViewController : SKUIViewController

{
    UIViewController *_beforeErrorChildViewController;
    UIViewController *_childViewController;
    NSArray *_defaultLeftBarButtonItems;
    IKAppDocument *_document;
    double _lastBottomLayoutGuideLength;
    double _lastTopLayoutGuideLength;
    SSVLoadURLOperation *_loadURLOperation;
    _Bool _makeSearchBarFirstResponderOnLoad;
    SKUIMediaQueryEvaluator *_mediaQueryEvaluator;
    SKUINavigationBarController *_navigationBarController;
    _Bool _selectSearchBarContentOnBecomingFirstResponder;
    SKUIToolbarController *_toolbarController;
    NSNumber *_orientationAtDisappear;
    NSNumber *_pageResponseAbsoluteTime;
    NSSet *_personalizationItems;
    NSDictionary *_presentationOptions;
    CDStruct_19149c72 _scrollingTabAppearanceStatus;
    NSArray *_searchBarControllers;
    NSValue *_sizeAtDisappear;
    unsigned long long _templateViewElementType;
    struct CGSize _viewSize;
    NSString *_urlString;
    CDUnknownBlockType _pendingSizeTransitionCompletion;
    SKUIMetricsPageRenderEvent *_pageRenderEvent;
    SKUIMetricsDOMChangeQueue *_domChangeTimingQueue;
}

@property (retain, nonatomic) SKUIMetricsPageRenderEvent *pageRenderEvent;
@property (retain, nonatomic) SKUIMetricsDOMChangeQueue *domChangeTimingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *navigationPaletteView;
@property (nonatomic, readonly) UIScrollView *scrollingTabNestedPagingScrollView;

+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (_Bool)allowsChildViewControllerNavigationBarManagement;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)reloadData;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)contentScrollView;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)toolbarItems;
- (id)previewMenuItems;
- (void)_setChildViewController:(id)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (id)impressionableViewElementsForDocument:(id)arg1;
- (void)documentScrollToTop:(id)arg1;
- (void)document:(id)arg1 runTestWithName:(id)arg2 options:(id)arg3;
- (_Bool)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2;
- (void)documentDidUpdate:(id)arg1;
- (id)_navigationBarViewElement;
- (void)mediaQueryEvaluatorDidChange:(id)arg1;
- (id)mediaQueryEvaluator:(id)arg1 valueForKey:(id)arg2;
- (void)skui_viewWillAppear:(_Bool)arg1;
- (_Bool)prefersNavigationBarBackgroundViewHidden;
- (id)navigationBarTintColor;
- (long long)navigationBarTintAdjustmentMode;
- (id)navigationBarTitleTextTintColor;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)performTestWithName:(id)arg1 options:(id)arg2;
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2;
- (void)resourceLoaderDidBeginLoading:(id)arg1;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)scrollingTabAppearanceStatusWasUpdated:(CDStruct_19149c72)arg1;
- (id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)arg1;
- (id)initWithDocument:(id)arg1 options:(id)arg2 clientContext:(id)arg3;
- (void)_showAccountViewControllerWithURL:(id)arg1;
- (id)additionalLeftBarButtonItemForNavigationBarController:(id)arg1;
- (id)additionalRightBarButtonItemForNavigationBarController:(id)arg1;
- (id)_sidepackViewControllerWithOptions:(id)arg1 clientContext:(id)arg2;
- (id)_newViewControllerWithTemplateElement:(id)arg1 options:(id)arg2 clientContext:(id)arg3;
- (void)_skui_applicationDidEnterBackground:(id)arg1;
- (void)documentDidSendMessage:(id)arg1;
- (void)_enqueueLoadURLOperation;
- (void)_submitPageRenderIfPossible;
- (void)_sendOnViewAttributesChangeWithAttributes:(id)arg1 viewWillAppear:(_Bool)arg2;
- (void)_reloadNavigationBarControllerIfNeeded;
- (_Bool)_shouldFillNavigationBarContentsBasedOnNavigationBarViewElement;
- (void)_reloadNavigationPalette;
- (void)_reloadNavigationBarController;
- (void)_reloadDefaultBarButtonItems;
- (id)_toolbarViewElement;
- (void)_reloadToolbar;
- (void)_onReportPlatformJsonTimes:(id)arg1;
- (void)_onReportDOMChange:(id)arg1;
- (void)_onReportRequestTimes:(id)arg1;
- (void)_onReportDocumentReady:(id)arg1;
- (void)_reloadPageData;
- (void)_skui_applicationWillEnterForeground:(id)arg1;
- (void)_finishLoadOperationWithResponse:(id)arg1 error:(id)arg2;
- (void)_redirectToURL:(id)arg1;
- (void)_networkTypeChangeNotification:(id)arg1;
- (void)_showLegacyStorePageWithRequest:(id)arg1 page:(id)arg2 pageType:(long long)arg3 URLResponse:(id)arg4;
- (void)_finishLegacyProtocolOperationForResponse:(id)arg1 dataProvider:(id)arg2 dictionary:(id)arg3;
- (CDUnknownBlockType)pendingSizeTransitionCompletion;
- (void)_reloadNavigationItemContents;
- (_Bool)_makeSearchBarFirstResponderOnLoad;
- (_Bool)_selectSearchBarContentOnBecomingFirstResponder;
- (void)_setMakeSearchBarFirstResponderOnLoad:(_Bool)arg1;
- (void)_setSelectSearchBarContentOnBecomingFirstResponder:(_Bool)arg1;
- (id)childViewController;

@end
