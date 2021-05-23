/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/Swift-Protocol.h>

@protocol PKPalettePencilInteractionFeedbackHostViewDelegate <Swift>

- (unsigned short)paletteView;
- (unsigned short)regularPaletteSize;
- (unsigned short)minimizedPaletteSize;
- (unsigned short)paletteEdgeSpacing;
- (unsigned short)paletteEdgeSpacingForMinimized;
- (unsigned short)minimizedPaletteScaleFactor;
- (unsigned short)paletteShadowColor;
- (unsigned short)paletteShadowOffset;
- (unsigned short)paletteShadowOpacity;
- (unsigned short)paletteShadowRadius;
- (unsigned short)paletteBorderColor;
- (unsigned short)paletteBorderWidth;
- (unsigned short)paletteSpringAnimationDampingRatio;
- (unsigned short)paletteSpringAnimationResponse;

@end
