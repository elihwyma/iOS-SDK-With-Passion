/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBRenderFactoryHWR_Portrait.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryHWR_Landscape : UIKBRenderFactoryHWR_Portrait

- (void)setupLayoutSegments;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (struct CGPoint)deleteGlyphOffset;
- (double)spaceKeyFontSize;
- (unsigned long long)edgesAdjustedForTranslucentGapsForGeometry:(id)arg1 key:(id)arg2 onKeyplane:(id)arg3;
- (struct UIEdgeInsets)symbolFrameInsets;
- (struct CGPoint)spaceKeyTextOffset;
- (struct UIEdgeInsets)handwritingAreaInsets;
- (double)handwritingGradientStartLocation;

@end
