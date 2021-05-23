/*
 Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <UIKit/UIButton.h>

@class CAFilter, CAShapeLayer, PKShapeView, UILabel, UIView;

@interface PKPaymentButton : UIButton

{
    CAShapeLayer *_layer;
    long long _style;
    long long _type;
    UIView *_container;
    UILabel *_buyLabel;
    CAFilter *_highlightFilter;
    _Bool _highlighted;
    struct CGSize _boundsSize;
    PKShapeView *_maskView;
    double _fontRatio;
    double _cornerRadius;
}

@property (nonatomic) double cornerRadius;

+ (Class)layerClass;
+ (id)titleForType:(long long)arg1;
+ (id)buttonWithType:(long long)arg1 style:(long long)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_createHighlightFilterIfNecessary;
- (id)initWithPaymentButtonType:(long long)arg1 paymentButtonStyle:(long long)arg2;
- (void)applyAccessibilityValues;

@end
