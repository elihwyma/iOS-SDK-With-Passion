/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBRenderFactoryiPhone.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryiPad : UIKBRenderFactoryiPhone

- (id)displayContentsForKey:(id)arg1;
- (double)keyCornerRadius;
- (void)setupLayoutSegments;
- (id)lowQualityLayeredBackgroundColorName;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)deleteKeyImageName;
- (id)deleteOnKeyImageName;
- (id)shiftKeyImageName;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (double)skinnyKeyThreshold;
- (id)messagesWriteboardKeyImageName;
- (id)globalEmojiKeyImageName;
- (id)globalKeyImageName;
- (id)dismissKeyImageName;
- (id)dictationKeyImageName;
- (id)multitapCompleteKeyImageName;
- (id)muttitapReverseKeyImageName;
- (id)ZWNJKeyImageName;
- (_Bool)shouldClearBaseDisplayStringForVariants:(id)arg1;
- (_Bool)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;
- (id)lightKeycapsFontName;
- (id)thinKeycapsFontName;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (void)setAllowsPaddles:(_Bool)arg1;
- (struct CGPoint)internationalKeyOffset;
- (struct CGPoint)dictationKeyOffset;
- (double)deleteKeyFontSize;
- (struct CGPoint)deleteKeyOffset;
- (double)shiftKeyFontSize;
- (struct CGPoint)shiftKeyOffset;
- (struct CGPoint)stringKeyOffset;
- (double)stringKeyFontSize;
- (double)moreKeyFontSize;
- (struct CGPoint)returnKeyOffset;
- (struct CGPoint)dismissKeyOffset;
- (double)zhuyinFirstToneKeyFontSize;
- (struct CGPoint)ZWNJKeyOffset;
- (struct UIEdgeInsets)wideShadowPaddleInsets;
- (struct CGPoint)variantAnnotationTextOffset;
- (void)_customizePopupTraits:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3;
- (struct UIEdgeInsets)variantDisplayFrameInsets;
- (struct UIEdgeInsets)variantSymbolFrameInsets;
- (struct UIEdgeInsets)variantPaddedFrameInsets;
- (long long)rowLimitForKey:(id)arg1;
- (id)variantGeometriesForGeometry:(id)arg1 variantCount:(unsigned long long)arg2 rowLimit:(long long)arg3 annotationIndex:(unsigned long long)arg4;
- (void)_customizeSymbolStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (_Bool)iPadFudgeLayout;
- (double)_row4ControlSegmentWidthLeft;
- (double)_row4ControlSegmentWidthRight;
- (struct CGPoint)secondaryShiftKeyOffset;
- (_Bool)iPadSansHomeButtonLayout;
- (double)predictiveKeyCornerRadius;
- (double)keyInsetBottom;
- (id)tabKeyImageName;
- (id)returnKeyImageName;
- (id)capslockKeyImageName;
- (double)cornerRadiusForKey:(id)arg1;
- (struct CGRect)insetFrame:(struct CGRect)arg1 forKey:(id)arg2;
- (double)symbolFrameInset;
- (struct CGRect)shiftKeySymbolFrame;
- (struct CGRect)dismissKeySymbolFrame;
- (double)returnKeySymbolFrameInset;
- (double)fontSizeAdjustmentForNonAlphanumericKeycaps;
- (double)dualStringKeyFontSizeAdjustment;
- (double)bottomRowDefaultFontSize;
- (double)tinyPunctuationGlyphFontSize;
- (struct CGPoint)tinyPunctuationGlyphOffset;
- (double)spaceKeyFontSize;
- (double)messagesTypeKeyplanSwitchKeyFontSize;
- (double)smallKanaKeyFontSize;
- (double)emailDotKeyFontSize;
- (double)facemarkKeyFontSize;
- (double)fallbackFontSize;
- (struct CGSize)defaultVariantGeometrySize;
- (double)defaultVariantSizeThreshold;
- (struct CGPoint)dualStringKeyOffset;
- (_Bool)_onLeftSide:(id)arg1 onKeyplane:(id)arg2;
- (double)defaultPathWeight;
- (double)internationalKeyFontSize;
- (double)dictationKeyFontSize;
- (double)dismissKeyFontSize;

@end
