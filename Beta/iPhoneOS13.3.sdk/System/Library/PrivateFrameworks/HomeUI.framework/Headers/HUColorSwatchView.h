/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, NSString, UIColor, UILabel;

@interface HUColorSwatchView : UIView

{
    _Bool _labelHidden;
    unsigned long long _selectionState;
    NSString *_text;
    CAShapeLayer *_circleLayer;
    CAShapeLayer *_selectedCircleLayer;
    CAShapeLayer *_selectedCircleInnerLayer;
    CAShapeLayer *_selectedCircleOuterLayer;
    UILabel *_label;
}

@property (retain, nonatomic) CAShapeLayer *circleLayer;
@property (retain, nonatomic) CAShapeLayer *selectedCircleLayer;
@property (retain, nonatomic) CAShapeLayer *selectedCircleInnerLayer;
@property (retain, nonatomic) CAShapeLayer *selectedCircleOuterLayer;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) unsigned long long selectionState;
@property (nonatomic) _Bool labelHidden;
@property (retain, nonatomic) NSString *text;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateLayout;
- (void)_updateTextColor;
- (id)initWithFrame:(struct CGRect)arg1 text:(id)arg2;

@end
