/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSIndexPath, NSString, PUTileIdentifier;

@protocol PUTilingCoordinateSystem;

@interface PUTileLayoutInfo : NSObject <Swift>

{
    PUTileIdentifier *_tileIdentifier;
    double _alpha;
    double _zPosition;
    id <PUTilingCoordinateSystem> _coordinateSystem;
    struct CGPoint _center;
    struct CGSize _size;
    struct CGRect _contentsRect;
    struct UIEdgeInsets _hitTestOutset;
    CDStruct_6c514524 _expandedRectInsets;
    struct CGAffineTransform _transform;
}

@property (retain, nonatomic, setter=_setTileIdentifier:) PUTileIdentifier *tileIdentifier;
@property (nonatomic, setter=_setCenter:) struct CGPoint center;
@property (nonatomic, setter=_setSize:) struct CGSize size;
@property (nonatomic, setter=_setAlpha:) double alpha;
@property (nonatomic, setter=_setTransform:) struct CGAffineTransform transform;
@property (nonatomic, setter=_setZPosition:) double zPosition;
@property (retain, nonatomic, setter=_setCoordinateSystem:) id <PUTilingCoordinateSystem> coordinateSystem;
@property (nonatomic) CDStruct_6c514524 expandedRectInsets;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) NSString *tileKind;
@property (nonatomic, readonly) NSString *dataSourceIdentifier;
@property (nonatomic, readonly) struct CGRect contentsRect;
@property (nonatomic, readonly) struct UIEdgeInsets hitTestOutset;
@property (nonatomic, readonly) struct CGRect frame;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGPoint)parallaxOffset;
- (id)clone;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7;
- (_Bool)isGeometryEqualToLayoutInfo:(id)arg1;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 contentsRect:(struct CGRect)arg7 coordinateSystem:(id)arg8;
- (id)layoutInfoByInterpolatingWithLayoutInfo:(id)arg1 mixFactor:(double)arg2 coordinateSystem:(id)arg3;
- (struct UIEdgeInsets)cropInsets;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 contentsRect:(struct CGRect)arg7 hitTestOutset:(struct UIEdgeInsets)arg8 coordinateSystem:(id)arg9;
- (id)layoutInfoWithCoordinateSystem:(id)arg1;
- (id)layoutInfoWithIndexPath:(id)arg1 tileKind:(id)arg2 dataSourceIdentifier:(id)arg3;
- (id)layoutInfoWithAlpha:(double)arg1;
- (id)layoutInfoWithZPosition:(double)arg1;
- (id)layoutInfoWithCenter:(struct CGPoint)arg1 size:(struct CGSize)arg2 tranform:(struct CGAffineTransform)arg3;
- (id)layoutInfoWithCenter:(struct CGPoint)arg1 size:(struct CGSize)arg2 alpha:(double)arg3 tranform:(struct CGAffineTransform)arg4 zPosition:(double)arg5 coordinateSystem:(id)arg6;

@end
