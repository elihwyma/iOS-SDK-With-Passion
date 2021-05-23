/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBRenderFactory.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactory10Key : UIKBRenderFactory

+ (_Bool)_isActiveKeyplaneSwitchKey:(id)arg1;

- (id)displayContentsForKey:(id)arg1;
- (double)keyCornerRadius;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (long long)lightHighQualityEnabledBlendForm;
- (void)modifyTraitsForDetachedInputSwitcher:(id)arg1 withKey:(id)arg2;
- (id)controlKeyBackgroundColorName;
- (id)controlKeyForegroundColorName;
- (id)defaultKeyDividerColorName;
- (id)controlKeyDividerColorName;
- (id)shiftedControlKeyTraits;
- (id)controlKeyTraits;
- (id)activeControlKeyTraits;
- (_Bool)shouldShowBottomRowEdge;
- (_Bool)shouldShowTopRowEdge;
- (double)interkeyGapsCenterXOfKeyplaneFrame:(struct CGRect)arg1;
- (_Bool)useRoundCorner;
- (struct UIEdgeInsets)topEdgeAdjustmentInsets;
- (unsigned long long)roundCornersForKey:(id)arg1 onKeyplane:(id)arg2;
- (unsigned long long)edgesAdjustedForTranslucentGapsForGeometry:(id)arg1 key:(id)arg2 onKeyplane:(id)arg3;
- (double)numberPadKeyPrimarySymbolSize;
- (struct CGPoint)numberPadKeyPrimaryTextOffset;
- (struct CGPoint)numberPadVBarSecondaryTextOffset;
- (struct CGPoint)numberPadKeySecondaryTextOffset;
- (struct CGPoint)longVowelSignKeyTextOffset;
- (struct CGPoint)dictationKeyTextOffset;
- (struct CGPoint)globeKeyTextOffset;
- (double)capitalAbcSymbolSize;
- (struct CGPoint)abcKeyTextOffset;
- (id)_preferredScriptFontForRendering:(int)arg1;
- (id)shiftedWhiteControlKeyTraits;
- (void)setupColumnLayoutSegmentsWithControlWidth:(double)arg1;

@end
