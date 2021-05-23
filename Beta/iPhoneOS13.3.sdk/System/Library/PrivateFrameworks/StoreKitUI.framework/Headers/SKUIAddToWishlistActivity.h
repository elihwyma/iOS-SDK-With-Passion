/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIActivity.h>

@class SKUIClientContext, SKUIProductPageItem;

__attribute__((visibility("hidden")))
@interface SKUIAddToWishlistActivity : UIActivity

{
    SKUIClientContext *_clientContext;
    SKUIProductPageItem *_item;
}

- (id)activityType;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (void)performActivity;
- (id)_beforeActivity;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;

@end
