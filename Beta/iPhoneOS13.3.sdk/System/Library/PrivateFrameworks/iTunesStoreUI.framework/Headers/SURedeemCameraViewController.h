/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIViewController.h>

#import <iTunesStoreUI/Swift-Protocol.h>

@class NSString, SUCodeRedeemerController, SURedeemCodeTextField, UIActivityIndicatorView, UIBarButtonItem, UIView;

@interface SURedeemCameraViewController : UIViewController <Swift>

{
    _Bool _ignoreDefaultKeyboardNotifications;
    CDUnknownBlockType _codeHandler;
    SUCodeRedeemerController *_cameraController;
    double _keyboardHeight;
    long long _state;
    UIActivityIndicatorView *_activityIndicator;
    UIView *_overlayView;
    UIBarButtonItem *_redeemBarButton;
    SURedeemCodeTextField *_codeTextField;
    UIBarButtonItem *_toggleCameraBarButton;
}

@property (retain, nonatomic) SUCodeRedeemerController *cameraController;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) long long state;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) UIBarButtonItem *redeemBarButton;
@property (retain, nonatomic) SURedeemCodeTextField *codeTextField;
@property (retain, nonatomic) UIBarButtonItem *toggleCameraBarButton;
@property (nonatomic) _Bool ignoreDefaultKeyboardNotifications;
@property (copy, nonatomic) CDUnknownBlockType codeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)cameraSupported;

- (void)dealloc;
- (void)_setup;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_updateState;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)_setupNotifications;
- (void)_setupNavigationItem;
- (void)performAction:(long long)arg1 withObject:(id)arg2;
- (void)_cancelButtonAction;
- (void)_startActivityIndicator;
- (void)_pauseCamera;
- (void)_recognitionError;
- (void)_recognitionSuccess;
- (void)_resumeCamera;
- (void)_setBackButtonTitle:(id)arg1;
- (void)_startCameraController;
- (void)_stopCameraController;
- (void)_layoutCodeTextField;
- (void)_dismissKeyboard;
- (void)_setupCameraController;
- (void)_setupCodeTextField;
- (void)_setupOverlayView;
- (void)_setupActivityIndicator;
- (void)_toggleCameraButtonAction;
- (void)_redeemButtonAction;
- (void)_layoutCodeTextFieldWithNotification:(id)arg1;
- (void)_overlayTapAction;
- (void)_detectedCode:(id)arg1;
- (void)_presentCameraErrorAlert;
- (void)_stopAcitivityIndicator;
- (void)_hideOverlay;
- (void)_showOverlay;
- (void)_updateNavigationItemAnimated;
- (void)codeRedeemerControllerDidCancel;
- (void)codeRedeemerControllerDidEndWithCode:(id)arg1 error:(id)arg2;

@end
