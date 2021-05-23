/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIRedeemStepViewController.h>

@class CRCodeRedeemerController, NSString, SKUIRedeem, UIBarButtonItem;

@protocol SKUIRedeemCameraViewControllerDelegate, SKUIRedeemViewCameraOverrideDelegate;

@interface SKUIRedeemCameraViewController : SKUIRedeemStepViewController

{
    _Bool _alreadyPushed;
    CRCodeRedeemerController *_camera;
    long long _category;
    UIBarButtonItem *_redeemButton;
    UIBarButtonItem *_flipButton;
    UIBarButtonItem *_activityBarButtonItem;
    NSString *_initialCode;
    SKUIRedeem *_successfulRedeem;
    _Bool _fullscreen;
    id <SKUIRedeemCameraViewControllerDelegate> _delegate;
    id <SKUIRedeemViewCameraOverrideDelegate> _cameraOverrideDelegate;
}

@property (nonatomic, readonly) long long category;
@property (copy, nonatomic) NSString *initialCode;
@property (weak, nonatomic) id <SKUIRedeemCameraViewControllerDelegate> delegate;
@property (weak, nonatomic) id <SKUIRedeemViewCameraOverrideDelegate> cameraOverrideDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)_enabled;
- (void)_setEnabled:(_Bool)arg1;
- (void)loadView;
- (_Bool)disablesAutomaticKeyboardDismissal;
- (id)contentScrollView;
- (void)_cancelAction:(id)arg1;
- (void)performRedeemOperationWithCode:(id)arg1 cameraRecognized:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithRedeemCategory:(long long)arg1;
- (void)redeemCameraViewController:(id)arg1 didFinishWithRedeem:(id)arg2;
- (void)codeRedeemerController:(id)arg1 didEndWithInfo:(id)arg2;
- (void)codeRedeemerControllerDidCancel:(id)arg1;
- (void)codeRedeemerControllerDidDisplayMessage:(id)arg1;
- (id)initWithRedeemCategoryFullscreen:(long long)arg1;
- (void)_redeemAction:(id)arg1;
- (void)_performRedeemOperationWithCode:(id)arg1 cameraRecognized:(_Bool)arg2 allowOverride:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_flipAction:(id)arg1;
- (void)_updateRightBarButtonItemsForRedeemInputState:(long long)arg1;
- (void)SKUIRedeemPreflightImagesDidLoad:(id)arg1;
- (void)_redeemDidFinish:(id)arg1 error:(id)arg2;
- (void)_cameraRedeemDidFinish:(id)arg1 error:(id)arg2;
- (id)redeemerViewForSKUIRedeemCameraView:(id)arg1;
- (void)SKUIRedeemCameraView:(id)arg1 textFieldDidChange:(id)arg2;
- (void)SKUIRedeemCameraView:(id)arg1 textFieldDidRedeem:(id)arg2;
- (void)cancelRedeemerViewForSKUIRedeemCameraView:(id)arg1;
- (void)startRedeemerViewForSKUIRedeemCameraView:(id)arg1;
- (void)presentFullScreenCameraViewForSKUIRedeemCameraView:(id)arg1;
- (void)showITunesPassLearnMoreForSKUIRedeemCameraView:(id)arg1;

@end
