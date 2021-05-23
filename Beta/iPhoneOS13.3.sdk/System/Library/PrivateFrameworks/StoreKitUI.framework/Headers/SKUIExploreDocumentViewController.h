/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class CLLocationManager, NSArray, NSString, SKUIContentInsetScrollView, SKUIExploreTemplateElement, SKUIMetricsImpressionSession, SKUIStorePageSectionsViewController, UINavigationController, UISplitViewController;

__attribute__((visibility("hidden")))
@interface SKUIExploreDocumentViewController : SKUIViewController <Swift>

{
    SKUIMetricsImpressionSession *_activeMetricsImpressionSession;
    NSArray *_contentOffsets;
    SKUIContentInsetScrollView *_contentScrollView;
    SKUIExploreTemplateElement *_exploreTemplate;
    UINavigationController *_leftVC;
    CLLocationManager *_locationManager;
    UINavigationController *_navigationController;
    _Bool _nearMeEnabled;
    SKUIStorePageSectionsViewController *_rightVC;
    UISplitViewController *_splitVC;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_shouldForwardViewWillTransitionToSize;

- (void)dealloc;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_reloadData;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (id)contentScrollView;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)splitViewController:(id)arg1 shouldHideViewController:(id)arg2 inOrientation:(long long)arg3;
- (void)setClientContext:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (_Bool)managesNavigationBarContents;
- (id)impressionableViewElements;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (void)_beginActiveImpressionsForImpressionableViewElements;
- (void)_endAllPendingActiveImpression;
- (_Bool)prefersNavigationBarBackgroundViewHidden;
- (id)navigationBarTintColor;
- (_Bool)prefersNavigationBarHidden;
- (id)initWithTemplateElement:(id)arg1;
- (void)_updateChildViewControllers;
- (void)_contentInsetDidChange:(id)arg1;
- (void)_reloadLeftViewControllers;
- (void)_reloadRightViewController;
- (void)_reloadSelectionForViewController:(id)arg1;
- (double)_leftColumnWidth;
- (id)_rootNavigationTitle;
- (void)_getPageComponents:(id *)arg1 title:(id *)arg2 forViewControllerAtIndex:(long long)arg3;
- (id)_pageComponentsAtIndex:(long long)arg1;
- (id)_newSectionsViewControllerAtIndex:(long long)arg1;
- (id)_rightPageComponents;
- (id)_rightVCColorScheme;
- (void)stackedBar:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)selectGenreListComponent:(id)arg1;
- (id)_leftPageComponentsAtIndex:(long long)arg1;

@end
