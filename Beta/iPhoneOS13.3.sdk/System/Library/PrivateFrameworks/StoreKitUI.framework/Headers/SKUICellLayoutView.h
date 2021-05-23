/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class SKUICellLayout;

__attribute__((visibility("hidden")))
@interface SKUICellLayoutView : UIView

{
    SKUICellLayout *_layout;
}

@property (retain, nonatomic) SKUICellLayout *layout;

- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;

@end
