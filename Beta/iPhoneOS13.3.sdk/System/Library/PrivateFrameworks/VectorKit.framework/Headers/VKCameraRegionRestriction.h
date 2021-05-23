/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class GEOMapRegion;

@interface VKCameraRegionRestriction : NSObject

{
    Box_3d7e3c2c _singleRestrictionMercator;
    Box_3d7e3c2c _westOfDatelineMercator;
    Box_3d7e3c2c _eastOfDatelineMercator;
    Box_3d7e3c2c _singleRestrictionCoord;
    Box_3d7e3c2c _westOfDatelineCoord;
    Box_3d7e3c2c _eastOfDatelineCoord;
    _Bool _empty;
    GEOMapRegion *_mapRegion;
}

@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (retain, nonatomic, readonly) GEOMapRegion *mapRegion;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (_Bool)containsCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)initWithMapRegion:(id)arg1;
- (CDStruct_c3b9c2ee)clampedCoordinate:(CDStruct_c3b9c2ee)arg1;
- (Matrix_2bdd42a3)clampedPosition:(Matrix_2bdd42a3)arg1;
- (Matrix_2bdd42a3)clampedPositionForOrigin:(Matrix_2bdd42a3)arg1 delta:(Matrix_2bdd42a3)arg2;
- (void)radianSingleRect:(Box_3d7e3c2c *)arg1 westOfDatelineRect:(Box_3d7e3c2c *)arg2 eastOfDatelineRect:(Box_3d7e3c2c *)arg3;
- (Matrix_2bdd42a3)clampedPosition:(Matrix_2bdd42a3)arg1 usingSingleRestriction:(Box_3d7e3c2c)arg2 westOfDatelineRestriction:(Box_3d7e3c2c)arg3 eastOfDatelineRestriction:(Box_3d7e3c2c)arg4 wrapRange:(Range_26cd5faa)arg5;

@end
