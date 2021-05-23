/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKLabelNavTileData : NSObject

{
    shared_ptr_702c344d _tile;
    NSMapTable *_geoJunctionToJunctionMap;
    NSMutableArray *_tileEdgeJunctions;
    _Bool _foundTileEdgeJunctions;
    _Bool _oppositeCarriagewayJunctionsValid;
    NSMutableArray *_oppositeCarriagewayJunctions;
    struct vector<LabelNavJunctionInfo, geo::StdAllocator<LabelNavJunctionInfo, mdm::Allocator>> _junctionInfos;
}

@property (nonatomic, readonly) const shared_ptr_702c344d *tile;
@property (nonatomic) _Bool oppositeCarriagewayJunctionsValid;
@property (retain, nonatomic, readonly) NSMutableArray *oppositeCarriagewayJunctions;

- (void)dealloc;
- (id).cxx_construct;
- (void)addJunction:(id)arg1;
- (void)_findTileEdgeJunctions;
- (void)initializeJunctionInfos;
- (id)initWithTile:(const shared_ptr_702c344d *)arg1;
- (id)junctionForGeoJunction:(CDStruct_3b01f0aa *)arg1;
- (id)junctionAtCoordinate:(Matrix_8746f91e)arg1;
- (id)findTileEdgeJunctionAtCoordinate:(Matrix_8746f91e)arg1;
- (void)appendNavJunctionsInWorldRect:(const Box_3d7e3c2c *)arg1 junctions:(id)arg2;
- (void)findOppositeCarriagewayJunctionsWithRouteFeatures:(unordered_map_0cbeac3c *)arg1 distanceThreshold:(double)arg2;

@end
