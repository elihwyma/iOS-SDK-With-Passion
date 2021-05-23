/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileLayoutInfo.h>

__attribute__((visibility("hidden")))
@interface PUAccessoryTileLayoutInfo : PUTileLayoutInfo

{
    double _minimumVisibleHeight;
    struct CGRect _untransformedContentFrame;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic, readonly) struct CGRect untransformedContentFrame;
@property (nonatomic, readonly) struct UIEdgeInsets contentInsets;
@property (nonatomic, readonly) double minimumVisibleHeight;

- (id)clone;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 untransformedContentFrame:(struct CGRect)arg8 contentInsets:(struct UIEdgeInsets)arg9 minimumVisibleHeight:(double)arg10;
- (_Bool)isGeometryEqualToLayoutInfo:(id)arg1;

@end
