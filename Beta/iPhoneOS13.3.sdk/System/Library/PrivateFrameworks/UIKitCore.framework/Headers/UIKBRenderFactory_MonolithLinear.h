/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBRenderFactory_Monolith.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactory_MonolithLinear : UIKBRenderFactory_Monolith

- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (_Bool)preferGlyphForDelete;
- (_Bool)preferGlyphForClear;
- (_Bool)spaceKeyIsPressed;
- (_Bool)smallTextForSpaceAndClear;
- (double)tldKeyFontWeight;
- (double)tldKeyFontSize;
- (_Bool)includeDeleteInVariants;
- (_Bool)forceVariantsInsideKeyplane;
- (struct CGRect)_insetRectForSpaceKeyRect:(struct CGRect)arg1 yOffset:(double)arg2;

@end
