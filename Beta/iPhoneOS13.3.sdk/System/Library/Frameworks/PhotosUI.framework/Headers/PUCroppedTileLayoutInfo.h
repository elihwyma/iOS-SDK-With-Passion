/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileLayoutInfo.h>

__attribute__((visibility("hidden")))
@interface PUCroppedTileLayoutInfo : PUTileLayoutInfo

{
    struct UIEdgeInsets _cropInsets;
}

@property (nonatomic, setter=_setCropInsets:) struct UIEdgeInsets cropInsets;

- (id)description;
- (id)clone;
- (_Bool)isGeometryEqualToLayoutInfo:(id)arg1;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 contentsRect:(struct CGRect)arg7 coordinateSystem:(id)arg8;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 cropInsets:(struct UIEdgeInsets)arg4 alpha:(double)arg5 transform:(struct CGAffineTransform)arg6 zPosition:(double)arg7 contentsRect:(struct CGRect)arg8 coordinateSystem:(id)arg9;
- (id)layoutInfoByInterpolatingWithLayoutInfo:(id)arg1 mixFactor:(double)arg2 coordinateSystem:(id)arg3;

@end
