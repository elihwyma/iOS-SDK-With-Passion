/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSAttributedString, NSMutableDictionary, NSString, UIColor, UIFont, _UILabelContent, _UIVectorTextLayout;

@interface UIVectorLabel : UIView

{
    _UILabelContent *_content;
    NSMutableDictionary *_defaultAttributes;
    UIColor *_textColor;
    _UIVectorTextLayout *_sizingLayout;
    _UIVectorTextLayout *_visualLayout;
    struct {
        unsigned int usesExplicitPreferredMaxLayoutWidth:1;
    } _labelFlags;
    double _multilineContextWidth;
    unsigned long long _numberOfLines;
    double _preferredMaxLayoutWidth;
}

@property (retain, nonatomic, getter=_content, setter=_setContent:) _UILabelContent *_content;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (copy, nonatomic, setter=_setAttributedText:) NSAttributedString *_attributedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)layerClass;
+ (id)_defaultFont;
+ (id)_defaultAttributes;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_generateDeferredAnimations:(id)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (double)_baselineOffsetFromBottom;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
- (double)_lastLineBaseline;
- (double)_firstLineBaseline;
- (double)_firstBaselineOffsetFromTop;
- (id)_defaultAttributes;
- (void)_setTextColor:(id)arg1;
- (_Bool)_needsDoubleUpdateConstraintsPass;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect)arg1;
- (double)_preferredMaxLayoutWidth;
- (double)_multilineContextWidth;
- (void)_setMultilineContextWidth:(double)arg1;
- (id)_defaultAttributesForUpgradingString:(id)arg1;
- (void)_mergeDefaultAttributesForDowngradingContent:(id)arg1;
- (void)_setNeedsUpdateLayerIfNeeded;
- (id)_materializedAttributedText;
- (void)_ensureSizingLayout;
- (id)_layoutParametersWithinSize:(struct CGSize)arg1 forSizing:(_Bool)arg2;
- (id)_attributedTextCompatibleForSizing;
- (void)_ensureVisualLayout;
- (id)_labelLayer;

@end
