/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

@class NSString, SKUIButtonViewElement, SKUIEditorTemplateView, SKUIEditorTemplateViewElement, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIEditorDocumentViewController : SKUIViewController

{
    SKUIButtonViewElement *_doneButtonElement;
    SKUIEditorTemplateView *_editorView;
    _Bool _isTextChanged;
    struct CGRect _keyboardFrame;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIButtonViewElement *_resetButtonElement;
    SKUIEditorTemplateViewElement *_templateElement;
    struct CGRect _toolbarFrame;
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
- (id)initWithTemplateElement:(id)arg1;
- (void)_cancelButtonAction;
- (void)didChangeTextInEditorTemplateView:(id)arg1;
- (void)_sendDoneEventAndDismissWithText:(id)arg1;
- (void)_updateBiographyWithText:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)_sendCancelEventAndDismiss;
- (void)_updateEditorViewInset;
- (void)_layoutNavigation;
- (void)_layoutEditorView;
- (void)_doneButtonAction;
- (void)_resetButtonAction;
- (void)_resetTextView;
- (void)_authenticateOnCompletion:(CDUnknownBlockType)arg1;
- (id)_locateFirstButtonWithType:(long long)arg1 inChildrenOfElement:(id)arg2;

@end
