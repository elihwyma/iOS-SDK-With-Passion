/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

@class NSArray, NSMutableSet, NSString, SKUICommentPostBarView, SKUICommentTemplateViewElement, SKUILayoutCache, SKUIMediaSocialAuthor, SKUIStackDocumentViewController, SKUIStackTemplateElement, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUICommentDocumentViewController : SKUIViewController

{
    SKUIMediaSocialAuthor *_authorForActiveAccount;
    SKUIStackDocumentViewController *_childViewController;
    NSArray *_commenters;
    _Bool _didShowKeyboard;
    _Bool _keyboardVisible;
    struct CGRect _keyboardRect;
    SKUIViewElementLayoutContext *_layoutContext;
    NSMutableSet *_observedArtworkRequestIDs;
    SKUICommentPostBarView *_postView;
    _Bool _scrollNewCommentToView;
    long long _selectedCommenter;
    SKUIStackTemplateElement *_stackTemplateElement;
    SKUICommentTemplateViewElement *_templateElement;
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
- (void)viewDidAppear:(_Bool)arg1;
- (id)_layoutContext;
- (void)documentDidUpdate:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;
- (_Bool)_loadImageForURL:(id)arg1 cacheKey:(id)arg2 dataConsumer:(id)arg3 reason:(long long)arg4;
- (void)commentPostBarView:(id)arg1 text:(id)arg2 as:(id)arg3;
- (void)commentPostBarView:(id)arg1 changeCommenter:(id)arg2;
- (void)_keyboardWillChangeFrameNotification:(id)arg1;
- (void)_keyboardDidHideChangeNotification:(id)arg1;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)updateStackElement:(id)arg1 withView:(id)arg2;
- (void)_layoutScrollView:(double)arg1;
- (void)_checkAdminStatus;
- (void)_layoutKeyboard;
- (void)_reloadContentSize:(double)arg1;
- (id)_getSelectedCommenter;
- (void)_changeCommenter;
- (void)_setSelectedCommenter:(long long)arg1;
- (void)_keyboardWillChangeNotification:(id)arg1 accountForGuideLines:(_Bool)arg2 applyKeyboardOffset:(_Bool)arg3;
- (void)_preloadCommenterImages;

@end
