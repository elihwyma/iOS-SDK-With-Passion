/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

@interface TSTMergeRegionMap : TSPObject

{
    struct unordered_map<TSUColumnRowCoordinate, TSUColumnRowCoordinate, TSTCellIDHasher, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowCoordinate>>> mCellIDToMergeRegionTopLeft;
    struct unordered_map<TSUColumnRowCoordinate, TSUColumnRowSize, TSTCellIDHasher, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowSize>>> mMergeRegionTopLeftToMergeRegionSize;
    CDStruct_5f1f7aa9 mUnionedMergeRange;
}

+ (id)mergeRegionMapFromMap:(id)arg1 intersectingRange:(CDStruct_5f1f7aa9)arg2;

- (id)description;
- (unsigned long long)count;
- (_Bool)find:(CDStruct_5f1f7aa9)arg1;
- (_Bool)remove:(CDStruct_5f1f7aa9)arg1;
- (id).cxx_construct;
- (id)initWithContext:(id)arg1;
- (_Bool)insert:(CDStruct_5f1f7aa9)arg1;
- (CDStruct_5f1f7aa9)mergedRangeForCellID:(CDStruct_0441cfb5)arg1;
- (id)iterator;
- (_Bool)partiallyIntersectsCellRange:(CDStruct_5f1f7aa9)arg1;
- (id)initRegionMapFromMap:(id)arg1 rowRemapping:(id)arg2;
- (CDStruct_5f1f7aa9)unionedMergeRange;
- (id)mergedGridIndicesForDimension:(int)arg1;
- (id)initRegionMapFromMap:(id)arg1 intersectingRange:(CDStruct_5f1f7aa9)arg2;
- (_Bool)partiallyIntersectsCellRegion:(id)arg1;
- (_Bool)hasRangeSpanningRows;

@end
