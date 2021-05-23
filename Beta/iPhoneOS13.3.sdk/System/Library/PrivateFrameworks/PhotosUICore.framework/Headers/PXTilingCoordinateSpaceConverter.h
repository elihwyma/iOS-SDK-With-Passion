/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXTilingCoordinateSpaceConverter : NSObject

{
    _Bool _shouldCache;
}

@property (nonatomic) _Bool shouldCache;

+ (id)defaultConverter;
+ (_Bool)canConvertBetweenCoordinateSpaceIdentifier:(void *)arg1 andCoordinateSpaceIdentifier:(void *)arg2;
+ (_Bool)_canConvertBetweenCoordinateSpace:(id)arg1 andCoordinateSpace:(id)arg2;

- (void)invalidateCache;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpaceIdentifier:(void *)arg2 toCoordinateSpaceIdentifier:(void *)arg3;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpaceIdentifier:(void *)arg2 toCoordinateSpaceIdentifier:(void *)arg3;
- (struct PXTileGeometry)convertTileGeometry:(struct PXTileGeometry)arg1 toCoordinateSpaceIdentifier:(void *)arg2;
- (struct CGAffineTransform)_transformOfCoordinateSpaceIdentifier:(void *)arg1 relativeToCoordinateSpaceIdentifier:(void *)arg2;
- (struct CGAffineTransform)_transformOfCoordinateSpace:(id)arg1 relativeToCoordinateSpace:(id)arg2;

@end
