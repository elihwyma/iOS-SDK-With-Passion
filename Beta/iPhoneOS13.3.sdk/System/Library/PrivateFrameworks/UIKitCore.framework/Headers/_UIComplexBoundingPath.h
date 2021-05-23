/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBoundingPath.h>

@class _UIBoundingPathBitmap;

__attribute__((visibility("hidden")))
@interface _UIComplexBoundingPath : _UIBoundingPath

{
    double _scale;
    long long _orientation;
    _UIBoundingPathBitmap *_bitmap;
}

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCoordinateSpace:(id)arg1;
- (_Bool)_validateBitmap:(id)arg1 withOrientation:(long long)arg2 scale:(double)arg3 forCoordinateSpace:(id)arg4;
- (id)initWithCoordinateSpace:(id)arg1 orientation:(long long)arg2 scale:(double)arg3 boundingPathBitmap:(id)arg4;
- (id)boundingPathForCoordinateSpace:(id)arg1 withCornerRadii:(struct UIRectCornerRadii)arg2 orientation:(long long)arg3 scale:(double)arg4;
- (struct _UIIntegralRect)_rectByHorizontallyInsettingPortraitPixelRect:(struct _UIIntegralRect)arg1 onPortraitEdges:(unsigned long long)arg2 performCompleteTest:(_Bool)arg3;
- (struct _UIIntegralRect)_rectByVerticallyInsettingPortraitPixelRect:(struct _UIIntegralRect)arg1 onPortraitEdges:(unsigned long long)arg2 performCompleteTest:(_Bool)arg3;
- (struct CGRect)_largestInscribedPortraitPixelRectInBoundingPathWithPortraitPixelRect:(struct CGRect)arg1 portraitAspectRatio:(double)arg2;
- (struct CGRect)_portaitPixelRectWithPixelMinimumPaddingFromBoundingPath:(double)arg1 inPortaitCorner:(unsigned long long)arg2 fromPortraitPixelRect:(struct CGRect)arg3 withPortraitPixelCornerRadii:(struct _UIIntegralCornerRadii)arg4;
- (struct CGRect)_portaitPixelRectWithPixelMinimumPaddingFromBoundingPath:(double)arg1 againstPortraitEdge:(unsigned long long)arg2 fromPortraitPixelRect:(struct CGRect)arg3 withPortraitPixelCornerRadii:(struct _UIIntegralCornerRadii)arg4;
- (id)_imageRepresentation;
- (id)initWithRectangularCoordinateSpace:(id)arg1 orientation:(long long)arg2 scale:(double)arg3;
- (id)boundingPathForCoordinateSpace:(id)arg1;
- (_Bool)validateForCoordinateSpace;
- (_Bool)isNonRectangular;
- (struct CGRect)_inscribedRectInBoundingPathAndRect:(struct CGRect)arg1 byInsettingRect:(struct CGRect)arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4;
- (struct CGRect)_largestInscribedRectInBoundingPathAndRect:(struct CGRect)arg1 withCenter:(struct CGPoint)arg2 aspectRatio:(double)arg3;
- (struct CGRect)_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect)arg2 withSize:(struct CGSize)arg3 cornerRadii:(struct UIRectCornerRadii)arg4 minimumPadding:(double)arg5;
- (struct CGRect)_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect)arg2 withSize:(double)arg3 cornerRadii:(struct UIRectCornerRadii)arg4 minimumPadding:(double)arg5;

@end
