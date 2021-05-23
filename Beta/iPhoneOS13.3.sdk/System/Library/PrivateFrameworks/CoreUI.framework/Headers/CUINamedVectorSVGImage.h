/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUINamedVectorImage.h>

@interface CUINamedVectorSVGImage : CUINamedVectorImage

@property (nonatomic, readonly) struct CGSVGDocument *svgDocument;

- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2;

@end
