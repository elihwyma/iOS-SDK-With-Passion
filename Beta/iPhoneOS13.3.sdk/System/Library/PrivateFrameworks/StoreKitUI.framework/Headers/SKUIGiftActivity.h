/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIActivity.h>

@class NSString, SKUIClientContext, SKUIProductPageItem;

__attribute__((visibility("hidden")))
@interface SKUIGiftActivity : UIActivity

{
    SKUIClientContext *_clientContext;
    SKUIProductPageItem *_item;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityType;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityViewController;
- (id)activityImage;
- (id)_beforeActivity;
- (void)giftViewController:(id)arg1 didFinishWithResult:(_Bool)arg2;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;

@end
