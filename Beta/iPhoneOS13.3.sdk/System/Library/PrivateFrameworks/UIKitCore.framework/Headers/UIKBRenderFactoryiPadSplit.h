/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBRenderFactoryiPad.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryiPadSplit : UIKBRenderFactoryiPad

- (id)backgroundTraitsForKeyplane:(id)arg1;
- (double)keyCornerRadius;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)deleteKeyImageName;
- (id)deleteOnKeyImageName;
- (id)shiftKeyImageName;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (double)skinnyKeyThreshold;
- (id)globalEmojiKeyImageName;
- (id)globalKeyImageName;
- (id)dismissKeyImageName;
- (id)dictationKeyImageName;
- (id)multitapCompleteKeyImageName;
- (id)muttitapReverseKeyImageName;
- (_Bool)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (struct CGPoint)internationalKeyOffset;
- (struct CGPoint)deleteKeyOffset;
- (struct CGPoint)shiftKeyOffset;
- (struct CGPoint)dismissKeyOffset;
- (double)variantAnnotationTextFontSize;
- (struct CGPoint)variantAnnotationTextOffset;
- (id)variantGeometriesForGeometry:(id)arg1 variantCount:(unsigned long long)arg2 rowLimit:(long long)arg3 annotationIndex:(unsigned long long)arg4;
- (void)_customizeSymbolStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (double)keyInsetBottom;
- (double)symbolFrameInset;
- (double)defaultPathWeight;

@end
