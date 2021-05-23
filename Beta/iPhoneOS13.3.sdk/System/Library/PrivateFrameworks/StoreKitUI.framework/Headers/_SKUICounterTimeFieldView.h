/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface _SKUICounterTimeFieldView : UIView

{
    UILabel *_labelLabel;
    UILabel *_valueLabel;
    unsigned long long _visibilityField;
}

@property (nonatomic, readonly) UILabel *labelLabel;
@property (nonatomic, readonly) UILabel *valueLabel;
@property (nonatomic) unsigned long long visibilityField;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
