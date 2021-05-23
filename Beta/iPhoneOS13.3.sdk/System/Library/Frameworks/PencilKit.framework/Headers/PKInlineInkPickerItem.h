/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class UIButton;

@interface PKInlineInkPickerItem : UIView

{
    double _yOffset;
    UIButton *_button;
}

@property (retain, nonatomic) UIButton *button;
@property (nonatomic) double yOffset;

- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithButton:(id)arg1;

@end
