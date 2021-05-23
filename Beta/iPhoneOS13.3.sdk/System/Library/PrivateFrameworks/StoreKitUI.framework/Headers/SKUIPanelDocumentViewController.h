/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

@class NSString, SKUILayoutCache, SKUIMetricsImpressionSession, SKUIPanelTemplateViewElement, SKUIPanelView, SKUIViewElementLayoutContext, UIImageView, UIScrollView;

__attribute__((visibility("hidden")))
@interface SKUIPanelDocumentViewController : SKUIViewController

{
    UIImageView *_backgroundImageView;
    _Bool _didAttemptBecomeFirstResponder;
    struct CGRect _keyboardFrame;
    long long _lastContentWidth;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIMetricsImpressionSession *_metricsImpressionSession;
    SKUIPanelView *_panelView;
    SKUILayoutCache *_textLayoutCache;
    UIScrollView *_scrollView;
    SKUIPanelTemplateViewElement *_templateElement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)contentScrollView;
- (void)_layoutBackgroundImageView;
- (id)_activeBackgroundColor;
- (id)_layoutContext;
- (void)_keyboardWillChangeNotification:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)impressionableViewElements;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)_keyboardHideNotification:(id)arg1;
- (id)_templateBackgroundColor;
- (void)_reloadBackgroundImageView;
- (void)_layoutScrollView;
- (void)_reloadPanelViewWithScrollViewSize:(struct CGSize)arg1;
- (void)_reloadContentSize;
- (id)_imageForBackgroundImageElement:(id)arg1;
- (void)_requestPanelViewLayoutWithContentWidth:(long long)arg1 forced:(_Bool)arg2;
- (id)initWithTemplateElement:(id)arg1;

@end
