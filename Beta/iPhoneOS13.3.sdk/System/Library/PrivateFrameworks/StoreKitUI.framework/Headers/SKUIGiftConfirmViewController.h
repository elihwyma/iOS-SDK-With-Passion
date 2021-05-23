/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIGiftStepViewController.h>

@class SKUIFocusedTouchGestureRecognizer, SKUIGiftConfirmView, SKUIGiftPurchaseRequest;

__attribute__((visibility("hidden")))
@interface SKUIGiftConfirmViewController : SKUIGiftStepViewController

{
    SKUIGiftConfirmView *_confirmView;
    _Bool _isShowingConfirmation;
    SKUIGiftPurchaseRequest *_purchaseRequest;
    SKUIFocusedTouchGestureRecognizer *_touchRecognizer;
}

- (void)dealloc;
- (void)loadView;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;
- (void)_termsButtonAction:(id)arg1;
- (id)_buyButtonTitle;
- (id)_newBuyBarButtonItemWithTitle:(id)arg1;
- (void)_purchaseGift;
- (void)_setShowingConfirmation:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_removeCancelGestureRecognizer;
- (void)_cancelBuyConfirmation:(id)arg1;
- (void)_showSuccessPage;
- (void)_finishPurchaseWithResult:(_Bool)arg1 errorMessage:(id)arg2;
- (id)_confirmButtonTitle;
- (void)_buyButtonAction:(id)arg1;

@end
