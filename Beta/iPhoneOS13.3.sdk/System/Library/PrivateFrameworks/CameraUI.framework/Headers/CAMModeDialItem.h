/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, NSString, UIFont;

@interface CAMModeDialItem : UIView

{
    _Bool _selected;
    _Bool _shouldShadowTitleText;
    NSString *_title;
    UIFont *_font;
    CAShapeLayer *__scalableTextLayer;
    struct CGSize __textFrameSize;
}

@property (nonatomic, readonly) struct __CFAttributedString *_attributedTitle;
@property (nonatomic, readonly) CAShapeLayer *_scalableTextLayer;
@property (nonatomic, setter=_setTextFrameSize:) struct CGSize _textFrameSize;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) _Bool shouldShadowTitleText;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (struct CGColor *)_textColor;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_commonCAMModeDialItemInitialization;
- (void)_updateScalableTextPathFromAttributedTitle;
- (struct CGPath *)_pathForAttributedString:(struct __CFAttributedString *)arg1;

@end
