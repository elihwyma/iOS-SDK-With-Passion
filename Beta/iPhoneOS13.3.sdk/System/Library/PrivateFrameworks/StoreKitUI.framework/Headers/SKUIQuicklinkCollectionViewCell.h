/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUICollectionViewCell.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface SKUIQuicklinkCollectionViewCell : SKUICollectionViewCell

{
    UIButton *_linkButton;
}

- (void)dealloc;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_linkButton;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)_linkButtonAction:(id)arg1;
- (void)configureForLink:(id)arg1;

@end
