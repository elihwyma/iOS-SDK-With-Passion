/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileLayoutInfo.h>

__attribute__((visibility("hidden")))
@interface PUExpandableTileLayoutInfo : PUTileLayoutInfo

{
    _Bool _isExpanded;
    struct CGSize _expandedSize;
}

@property (nonatomic, readonly) _Bool isExpanded;
@property (nonatomic, readonly) struct CGSize expandedSize;

- (id)clone;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7;
- (_Bool)isGeometryEqualToLayoutInfo:(id)arg1;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 isExpanded:(_Bool)arg8 expandedSize:(struct CGSize)arg9;

@end
