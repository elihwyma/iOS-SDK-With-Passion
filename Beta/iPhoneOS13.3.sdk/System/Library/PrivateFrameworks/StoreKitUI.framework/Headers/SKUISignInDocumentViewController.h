/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

@class NSString, SKUILayoutCache, SKUISignInTemplateView, SKUISignInTemplateViewElement, SKUIViewElementLayoutContext, UIScrollView;

__attribute__((visibility("hidden")))
@interface SKUISignInDocumentViewController : SKUIViewController

{
    struct CGRect _keyboardFrame;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUISignInTemplateView *_loginView;
    UIScrollView *_scrollView;
    SKUISignInTemplateViewElement *_templateElement;
    SKUILayoutCache *_textLayoutCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)_backgroundColor;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (id)_layoutContext;
- (void)documentDidUpdate:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)_layoutScrollView;
- (void)_reloadPanelViewWithScrollViewSize:(struct CGSize)arg1;
- (void)_reloadContentSize;
- (id)initWithTemplateElement:(id)arg1;
- (void)_signInSuccess:(id)arg1;
- (void)_signInFailed:(id)arg1 error:(id)arg2;
- (void)signInEntryComplete:(id)arg1 accountName:(id)arg2 password:(id)arg3;

@end
