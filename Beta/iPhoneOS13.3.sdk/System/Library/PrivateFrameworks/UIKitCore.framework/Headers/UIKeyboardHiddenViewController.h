/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, _SFPasswordViewController;

@protocol BSInvalidatable;

__attribute__((visibility("hidden")))
@interface UIKeyboardHiddenViewController : UIViewController <Swift>

{
    _SFPasswordViewController *_autofillVC;
    _Bool _presentedAutofill;
    _Bool _focusWasDeferredBeforeDeactivation;
    _Bool _isFocusDeferred;
    unsigned int _deferredContextID;
    NSString *_deferredDisplayUUID;
    id <BSInvalidatable> _eventFocusDeferralToken;
    _Bool _processingSceneDidChange;
}

@property (retain, nonatomic) _SFPasswordViewController *autofillVC;
@property (nonatomic) _Bool presentedAutofill;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (_Bool)_formSheetObeysContentContainerSize;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)presentViewController:(_Bool)arg1;
- (void)_sceneDidChange;
- (void)_setDeferred:(_Bool)arg1 forDisplayUUID:(id)arg2;
- (void)_applicationWillDeactivate:(id)arg1;
- (void)_deviceWillLock:(id)arg1;
- (void)passwordViewControllerDidFinish:(id)arg1;
- (id)_deferredTargetForClientContext:(unsigned int)arg1;
- (void)presentAutofillVCWithAnimation:(_Bool)arg1;
- (void)presentSelfWithAnimation:(_Bool)arg1;
- (_Bool)shouldPresentAsPopover;
- (void)_localAuthenticationUIPresented;
- (void)_localAuthenticationUIDismissed;
- (void)_willChangeToFirstResponder:(id)arg1;

@end
