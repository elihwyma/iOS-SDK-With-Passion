/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface UIPickerContentView : UIView

{
    UILabel *_titleLabel;
    UIImageView *_checkView;
    struct {
        unsigned int checked:1;
        unsigned int highlighted:1;
    } _pickerContentViewFlags;
}

@property (nonatomic, getter=isChecked) _Bool checked;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (double)_checkmarkOffset;

- (_Bool)_isSelectable;
- (void)layoutSubviews;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (double)labelWidthForBounds:(struct CGRect)arg1;
- (id)checkedColor;

@end
