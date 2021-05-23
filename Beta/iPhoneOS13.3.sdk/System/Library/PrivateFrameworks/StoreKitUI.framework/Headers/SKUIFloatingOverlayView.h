/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface SKUIFloatingOverlayView : UIView

{
    struct UIEdgeInsets _contentInset;
    UIView *_contentView;
}

@property (nonatomic) struct UIEdgeInsets contentInset;
@property (retain, nonatomic) UIView *contentView;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
