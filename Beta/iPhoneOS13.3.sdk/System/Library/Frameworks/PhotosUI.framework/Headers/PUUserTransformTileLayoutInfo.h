/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileLayoutInfo.h>

@class PUDisplayTileTransform;

@interface PUUserTransformTileLayoutInfo : PUTileLayoutInfo

{
    PUDisplayTileTransform *_displayTileTransform;
    struct CGRect _untransformedContentFrame;
}

@property (nonatomic, readonly) struct CGRect untransformedContentFrame;
@property (nonatomic, readonly) PUDisplayTileTransform *displayTileTransform;

- (id)description;
- (id)clone;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7;
- (_Bool)isGeometryEqualToLayoutInfo:(id)arg1;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 untransformedContentFrame:(struct CGRect)arg8 displayTileTransform:(id)arg9;

@end
