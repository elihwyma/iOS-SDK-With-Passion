/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString, UIViewController, WBSTabDialogManager, _SFDialog, _SFDialogView;

@protocol _SFDialogControllerDelegate, _SFDialogViewControllerPresenting, _SFDialogViewPresenting;

@interface _SFDialogController : NSObject

{
    WBSTabDialogManager *_dialogManager;
    _SFDialogView *_dialogView;
    UIViewController *_dialogViewController;
    int _webProcessID;
    id <_SFDialogControllerDelegate> _delegate;
    id <_SFDialogViewPresenting> _dialogPresenter;
    id <_SFDialogViewControllerPresenting> _viewControllerPresenter;
    _SFDialog *_presentedDialog;
}

@property (weak, nonatomic) id <_SFDialogControllerDelegate> delegate;
@property (weak, nonatomic) id <_SFDialogViewPresenting> dialogPresenter;
@property (weak, nonatomic) id <_SFDialogViewControllerPresenting> viewControllerPresenter;
@property (nonatomic, readonly) _SFDialog *presentedDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)applicationDidEnterBackground;

- (id)init;
- (void)dialogView:(id)arg1 didSelectActionAtIndex:(unsigned long long)arg2 withInputText:(id)arg3 passwordText:(id)arg4;
- (void)owningWebViewWillBecomeActive;
- (void)owningTabWillClose;
- (void)owningWebViewWillNavigate;
- (void)owningWebViewDidCommitNavigationWithURL:(id)arg1;
- (void)owningWebViewDidChangeProcessID;
- (void)presentDialog:(id)arg1;
- (void)cancelPresentedDialogIfNeeded;
- (void)presentDialog:(id)arg1 animateAlongsidePresentation:(CDUnknownBlockType)arg2 dismissal:(CDUnknownBlockType)arg3;
- (id)_initWithDialogManager:(id)arg1;
- (int)_currentWebProcessID;
- (long long)_presentDialog:(id)arg1 forWebProcessID:(int)arg2 withAdditionalAnimations:(CDUnknownBlockType)arg3;
- (void)_dismissDialogWithAdditionalAnimations:(CDUnknownBlockType)arg1;
- (CDStruct_fca5f1f5)_currentSlot;
- (unsigned long long)_tabID;
- (void)_dismissCurrentDialogWithResponse:(id)arg1;
- (_Bool)_isPresentingDialog;
- (void)presentNextDialogIfNeeded;

@end
