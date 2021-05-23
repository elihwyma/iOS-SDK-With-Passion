/*
 Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <UIKit/UIButton.h>

@class CAFilter, CAShapeLayer, PKShapeView, UIImageView, UILabel;

@interface PKAddPassButton : UIButton

{
    CAShapeLayer *_layer;
    struct CGSize _boundsSize;
    PKShapeView *_maskView;
    UIImageView *_iconView;
    UILabel *_singleLineLabel;
    UILabel *_multiLineLabel;
    CAFilter *_highlightFilter;
    _Bool _highlighted;
    struct CGSize _iconSize;
    struct CGSize _singleLineSize;
    struct UIEdgeInsets _singleLineAlignmentInset;
    struct CGSize _multiLineSize;
    struct UIEdgeInsets _multiLineAlignmentInset;
    _Bool _useLayoutMargins;
    long long _addPassButtonStyle;
}

@property (nonatomic) long long addPassButtonStyle;

+ (Class)layerClass;
+ (id)addPassButtonWithStyle:(long long)arg1;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_sharedInit;
- (void)_createHighlightFilterIfNecessary;
- (id)initWithAddPassButtonStyle:(long long)arg1;
- (void)_applyStyle;
- (void)_adjustVisibleLabelWithBounds:(struct CGRect)arg1;
- (struct CGSize)_intrinsicMultiLineSize;
- (_Bool)_singleLineFitsSize:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSingleLineSize;

@end
