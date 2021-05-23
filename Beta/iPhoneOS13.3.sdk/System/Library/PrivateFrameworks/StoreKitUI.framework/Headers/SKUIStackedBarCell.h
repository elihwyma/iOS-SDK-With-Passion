/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIButton.h>

@class UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIStackedBarCell : UIButton

{
    _Bool _expanded;
    UILabel *_expandedLabel;
    UIButton *_backButton;
    UIView *_separator;
}

@property (nonatomic) _Bool expanded;
@property (nonatomic, readonly) UIButton *backButton;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;

@end
