/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

@class NSString, SKUIContentUnavailableTemplateElement, SKUIContentUnavailableView, SKUILayoutCache, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIContentUnavailableDocumentViewController : SKUIViewController

{
    SKUIContentUnavailableView *_contentUnavailableView;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIContentUnavailableTemplateElement *_templateElement;
    SKUILayoutCache *_textLayoutCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct UIEdgeInsets)_contentInsets;
- (id)_layoutContext;
- (void)documentDidUpdate:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;
- (void)_reloadContentUnavailableView:(id)arg1 width:(double)arg2;

@end
