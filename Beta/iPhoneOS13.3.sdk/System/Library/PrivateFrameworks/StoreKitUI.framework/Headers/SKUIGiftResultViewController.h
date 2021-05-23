/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIGiftStepViewController.h>

@class SKUIGiftItemView, UIButton, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIGiftResultViewController : SKUIGiftStepViewController

{
    UIButton *_giftAgainButton;
    UIImage *_itemImage;
    SKUIGiftItemView *_itemView;
}

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (id)_itemView;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;
- (void)_setItemImage:(id)arg1 error:(id)arg2;
- (id)_itemImage;
- (void)_giftAgainAction:(id)arg1;
- (void)_doneButtonAction:(id)arg1;

@end
