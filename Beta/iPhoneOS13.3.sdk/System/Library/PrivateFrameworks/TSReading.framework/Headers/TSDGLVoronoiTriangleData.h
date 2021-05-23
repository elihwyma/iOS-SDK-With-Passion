/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface TSDGLVoronoiTriangleData : NSObject

{
    unsigned long long *_triangleIndexToCellIndexMappingTable;
    unsigned long long *_triangleIndexToCellTriangleIndexMappingTable;
    unsigned long long _triangleIndexToCellMappingTableCount;
    unsigned long long _triangleCount;
    NSArray *_cells;
    struct CGRect _bounds;
}

@property (nonatomic, readonly) unsigned long long triangleCount;
@property (nonatomic, readonly) NSArray *cells;
@property (nonatomic, readonly) unsigned long long cellCount;
@property (nonatomic, readonly) struct CGRect bounds;

- (void)dealloc;
- (void)p_setupDataWithPointCount:(unsigned long long)arg1 clippedToRect:(struct CGRect)arg2 percentOfCellsToSplit:(double)arg3;
- (unsigned long long)cellIndexFromTriangleIndex:(unsigned long long)arg1;
- (id)initWithPoints:(unsigned long long)arg1 clippedToRect:(struct CGRect)arg2 percentOfCellsToSplit:(double)arg3;
- (id)cellFromTriangleIndex:(unsigned long long)arg1;
- (unsigned long long)triangleIndexInCellFromGlobalTriangleIndex:(unsigned long long)arg1;

@end
