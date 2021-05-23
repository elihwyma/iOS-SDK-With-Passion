/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

@class NSMutableArray, NSString, SKUIActivityIndicatorView, SKUIChartsTemplateViewElement, SKUILayoutCache, SKUIModernChartsView, SKUIResourceLoader, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIModernChartsDocumentViewController : SKUIViewController

{
    SKUIActivityIndicatorView *_activityIndicatorView;
    SKUIModernChartsView *_chartsView;
    NSMutableArray *_columnViewControllers;
    SKUILayoutCache *_layoutCache;
    SKUIChartsTemplateViewElement *_templateElement;
    SKUIViewElementLayoutContext *_viewLayoutContext;
    SKUIResourceLoader *_resourceLoader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillLayoutSubviews;
- (struct UIEdgeInsets)_contentInset;
- (id)contentScrollView;
- (id)_resourceLoader;
- (void)_showActivityIndicator;
- (void)documentDidUpdate:(id)arg1;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2;
- (void)resourceLoaderDidBeginLoading:(id)arg1;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithTemplateElement:(id)arg1;
- (id)_layoutCache;
- (id)_viewLayoutContext;
- (id)_newColumnViewControllersWithReusableViewControllers:(id)arg1;
- (struct CGRect)_computedFrameForActivityIndicatorView;
- (void)_reloadWithTemplateElement:(id)arg1;
- (void)_hideActivityIndicator;

@end
