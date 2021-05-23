/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileLayoutInfo.h>

__attribute__((visibility("hidden")))
@interface PUParallaxedTileLayoutInfo : PUTileLayoutInfo

{
    struct CGPoint _parallaxOffset;
}

@property (nonatomic, readonly) struct CGPoint parallaxOffset;

- (id)clone;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7;
- (_Bool)isGeometryEqualToLayoutInfo:(id)arg1;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 parallaxOffset:(struct CGPoint)arg7 coordinateSystem:(id)arg8;

@end
