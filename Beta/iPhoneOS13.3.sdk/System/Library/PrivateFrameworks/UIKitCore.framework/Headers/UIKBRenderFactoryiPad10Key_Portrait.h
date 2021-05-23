/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBRenderFactory10Key.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryiPad10Key_Portrait : UIKBRenderFactory10Key

- (id)backgroundTraitsForKeyplane:(id)arg1;
- (double)keyCornerRadius;
- (void)setupLayoutSegments;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)shiftKeyImageName;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (id)messagesWriteboardKeyImageName;
- (id)multitapCompleteKeyImageName;
- (id)muttitapReverseKeyImageName;
- (id)lightKeycapsFontName;
- (id)thinKeycapsFontName;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (struct UIEdgeInsets)wideShadowPaddleInsets;
- (struct UIEdgeInsets)topEdgeAdjustmentInsets;
- (unsigned long long)edgesAdjustedForTranslucentGapsForGeometry:(id)arg1 key:(id)arg2 onKeyplane:(id)arg3;
- (double)numberPadKeyPrimarySymbolSize;
- (struct CGPoint)numberPadKeyPrimaryTextOffset;
- (struct CGPoint)numberPadVBarSecondaryTextOffset;
- (struct CGPoint)numberPadKeySecondaryTextOffset;
- (struct CGPoint)dictationKeyTextOffset;
- (struct CGPoint)globeKeyTextOffset;
- (struct CGPoint)abcKeyTextOffset;
- (double)controlColumnWidthFactor;

@end
