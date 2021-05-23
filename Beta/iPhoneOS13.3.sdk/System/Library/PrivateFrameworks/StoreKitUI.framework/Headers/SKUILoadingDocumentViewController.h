/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

@class NSObject, NSString, SKUIActivityIndicatorView, SKUIActivityIndicatorViewElement, SKUILayoutCache, SKUILoadingTemplateViewElement, SKUIViewElementLayoutContext;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SKUILoadingDocumentViewController : SKUIViewController

{
    SKUIActivityIndicatorViewElement *_activityIndicatorElement;
    SKUIActivityIndicatorView *_activityIndicatorView;
    NSObject<OS_dispatch_source> *_delayTimer;
    SKUILayoutCache *_layoutCache;
    SKUILoadingTemplateViewElement *_templateElement;
    SKUIViewElementLayoutContext *_viewLayoutContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (id)_activityIndicator;
- (void)_showActivityIndicator;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;
- (id)initWithActivityIndicatorElement:(id)arg1;
- (id)_layoutCache;
- (id)_viewLayoutContext;
- (void)_reloadViewStyling;
- (struct CGRect)_computedFrameForActivityIndicatorView;

@end
