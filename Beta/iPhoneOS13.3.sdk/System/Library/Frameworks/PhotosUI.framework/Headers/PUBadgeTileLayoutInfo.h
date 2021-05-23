/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileLayoutInfo.h>

__attribute__((visibility("hidden")))
@interface PUBadgeTileLayoutInfo : PUTileLayoutInfo

{
    _Bool _isOverContent;
    double _contentWidth;
}

@property (nonatomic, readonly) _Bool isOverContent;
@property (nonatomic, readonly) double contentWidth;

- (id)clone;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7;
- (_Bool)isGeometryEqualToLayoutInfo:(id)arg1;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 hitTestOutset:(struct UIEdgeInsets)arg7 coordinateSystem:(id)arg8 isOverContent:(_Bool)arg9 contentWidth:(double)arg10;

@end
