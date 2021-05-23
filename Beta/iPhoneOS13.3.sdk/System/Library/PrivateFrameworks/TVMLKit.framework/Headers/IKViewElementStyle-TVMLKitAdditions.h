/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <ITMLKit/IKViewElementStyle.h>

@class TVAppStyle;

@interface IKViewElementStyle (TVMLKitAdditions)

@property (retain, nonatomic, setter=tv_setStyleMetrics:) TVAppStyle *tv_styleMetrics;

- (id)tv_textStyle;
- (id)tv_fontWeight;
- (double)tv_fontSize;
- (unsigned int)tv_fontStretch;
- (id)tv_fontFamily;
- (id)tv_borderRadius;
- (double)tv_width;
- (id)tv_imageTreatment;
- (double)tv_minWidth;
- (double)tv_minHeight;
- (double)tv_maxWidth;
- (double)tv_maxHeight;
- (struct UIEdgeInsets)tv_margin;
- (struct UIEdgeInsets)tv_focusMargin;
- (struct UIEdgeInsets)tv_padding;
- (long long)tv_alignment;
- (long long)tv_contentAlignment;
- (long long)tv_position;
- (double)tv_interitemSpacing;
- (double)tv_lineSpacing;
- (id)tv_backgroundColor;
- (id)tv_highlightColor;
- (double)tv_height;
- (long long)tv_textAlignment;
- (id)tv_color;
- (id)tv_textShadow;
- (double)tv_textHyphenationFactor;
- (unsigned long long)tv_maxLines;
- (id)tv_group;
- (unsigned long long)tv_edgeFlagForStyle:(id)arg1;
- (id)tv_valueForStyle:(id)arg1;
- (id)tv_tintColor;
- (id)tv_darkTintColor;
- (id)tv_focusAlign;
- (double)tv_focusSizeIncrease;
- (id)tv_progressStyle;
- (_Bool)tv_acceptsFocus;
- (id)tv_highlightStyle;
- (id)tv_cssValueForStyle:(id)arg1;
- (id)tv_textTransform;
- (id)tv_shadow;
- (id)tv_textHighlightStyle;
- (double)tv_minimumScaleFactor;
- (id)tv_ratingStyle;
- (unsigned long long)tv_maxTextLines;
- (unsigned long long)tv_rowCount;
- (id)tv_searchStyle;
- (id)tv_backgroundHighlightStyle;
- (id)tv_backgroundHighlightColor;
- (struct UIEdgeInsets)tv_borderWidths;
- (id)tv_tintColor2;
- (double)tv_imageUpscaleFactor;
- (id)tv_borderColor;
- (_Bool)tv_borderContinuous;
- (id)tv_layerFlipMode;
- (id)tv_associatedViewElementStyle;
- (id)tv_columnColor;
- (double)tv_columnPadding;
- (id)tv_visualEffect;
- (struct CGAffineTransform)tv_focusTransform;
- (_Bool)tv_adjustsFontSizeToFitWidth;
- (_Bool)tv_hasHeight;
- (_Bool)tv_hasWidth;
- (id)tv_scrollMode;
- (struct CGAffineTransform)tv_transform;
- (double)tv_transitionInterval;
- (id)tv_transition;
- (unsigned long long)tv_columnCount;
- (_Bool)tv_hasFocusMargin;
- (id)tv_overflow;
- (struct UIEdgeInsets)tv_scrollableBoundsInset;

@end
