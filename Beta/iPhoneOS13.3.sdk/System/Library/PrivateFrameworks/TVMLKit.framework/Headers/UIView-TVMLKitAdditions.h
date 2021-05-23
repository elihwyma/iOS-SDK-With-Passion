/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@interface UIView (TVMLKitAdditions)

+ (void)tv_performByPreventingAdditiveAnimations:(CDUnknownBlockType)arg1;

- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)tv_elementType;
- (id)tv_AccessibilityText;
- (void)tv_setLayout:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (id)tv_layout;
- (_Bool)tv_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_transferAttributesFromElement:(id)arg1;
- (struct CGSize)tv_sizeThatFits:(struct CGSize)arg1 withSizeCalculation:(CDUnknownBlockType)arg2;
- (double)tv_minWidth;
- (double)tv_minHeight;
- (double)tv_maxWidth;
- (double)tv_maxHeight;
- (double)tv_itemWidth;
- (double)tv_itemHeight;
- (id)valueForTVViewStyle:(id)arg1;
- (struct UIEdgeInsets)tv_margin;
- (id)tv_valueForTVViewTag:(id)arg1;
- (_Bool)tv_isAnimationDisabledForProperty:(id)arg1;
- (void)tv_setValue:(id)arg1 forTVViewTag:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)didSelect;
- (void)tv_setShowcaseFactor:(double)arg1;
- (void)setValue:(id)arg1 forTVViewStyle:(id)arg2;
- (void)tv_disableAnimation:(_Bool)arg1 forProperty:(id)arg2;
- (void)transferLayoutStylesFromElement:(id)arg1;
- (struct CGSize)tv_sizeThatFits:(struct CGSize)arg1;
- (_Bool)tv_shouldReuseCachedSizeThatFits:(struct CGSize)arg1 previousTargetSize:(struct CGSize)arg2 newTargetSize:(struct CGSize)arg3;
- (struct UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1;
- (struct UIEdgeInsets)tv_nonDirectionalMargin;
- (struct UIEdgeInsets)tv_focusMargin;
- (struct UIEdgeInsets)tv_padding;
- (long long)tv_alignment;
- (long long)tv_contentAlignment;
- (long long)tv_position;
- (double)tv_interitemSpacing;
- (double)tv_lineSpacing;
- (id)tv_backgroundColor;
- (id)tv_highlightColor;
- (id)tv_elementName;
- (_Bool)tv_isPrototypeView;
- (_Bool)tv_showOnHighlight;
- (_Bool)tv_marqueeOnHighlight;
- (id)tv_siriData;
- (void)tv_setSiriData:(id)arg1;
- (void)tv_setAccessibilityText:(id)arg1;
- (id)tv_impressionableElementsForDocument:(id)arg1 parentViewController:(id)arg2;
- (id)tv_impressionableElementsForDocument:(id)arg1;

@end
