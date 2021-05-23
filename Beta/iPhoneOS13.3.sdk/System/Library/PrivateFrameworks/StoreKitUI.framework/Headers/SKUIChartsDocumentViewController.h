/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

@class NSMutableArray, NSString, SKUIChartColumnsView, SKUIChartsTemplateViewElement, SKUIResourceLoader;

__attribute__((visibility("hidden")))
@interface SKUIChartsDocumentViewController : SKUIViewController

{
    SKUIChartColumnsView *_chartsView;
    NSMutableArray *_columnViewControllers;
    SKUIChartsTemplateViewElement *_templateElement;
    SKUIResourceLoader *_resourceLoader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_shouldForwardViewWillTransitionToSize;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (id)contentScrollView;
- (id)_resourceLoader;
- (void)documentDidUpdate:(id)arg1;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (void)skui_viewWillAppear:(_Bool)arg1;
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2;
- (void)resourceLoaderDidBeginLoading:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;
- (id)_newColumnViewControllersWithReusableViewControllers:(id)arg1;
- (long long)_visibleColumnCountForWidth:(double)arg1;
- (struct UIEdgeInsets)_chartInsets;
- (id)_columnViewControllers;

@end
