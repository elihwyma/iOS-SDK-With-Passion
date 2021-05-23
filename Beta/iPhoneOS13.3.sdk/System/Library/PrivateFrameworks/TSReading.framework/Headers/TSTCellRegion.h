/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSIndexSet;

@interface TSTCellRegion : NSObject <Swift>

{
    unsigned long long mCellRangesCount;
    CDStruct_5f1f7aa9 *mCellRanges;
    CDStruct_5f1f7aa9 mBoundingCellRange;
    unsigned long long mCellCount;
    NSIndexSet *mIntersectingColumnsIndexSet;
    NSIndexSet *mIntersectingRowsIndexSet;
    CDStruct_0441cfb5 mUpperLeftCellID;
    CDStruct_0441cfb5 mBottomRightCellID;
}

@property (nonatomic, readonly) CDStruct_5f1f7aa9 boundingCellRange;
@property (nonatomic, readonly) unsigned long long cellCount;
@property (nonatomic, readonly) _Bool isEmpty;
@property (nonatomic, readonly) _Bool isRectangle;
@property (nonatomic, readonly) CDStruct_0441cfb5 upperLeftCellID;
@property (nonatomic, readonly) CDStruct_0441cfb5 bottomRightCellID;
@property (nonatomic, readonly) unsigned short numberOfIntersectingColumns;
@property (nonatomic, readonly) unsigned short numberOfIntersectingRows;

+ (id)regionFromRange:(CDStruct_5f1f7aa9)arg1;
+ (id)invalidRegion;
+ (id)region:(id)arg1 addingRange:(CDStruct_5f1f7aa9)arg2;
+ (id)region:(id)arg1 subtractingRange:(CDStruct_5f1f7aa9)arg2;
+ (id)region:(id)arg1 intersectingRange:(CDStruct_5f1f7aa9)arg2;
+ (id)unionEveryRangeInRegion:(id)arg1 withRange:(CDStruct_5f1f7aa9)arg2;
+ (id)region:(id)arg1 addingRegion:(id)arg2;
+ (id)region:(id)arg1 subtractingRegion:(id)arg2;
+ (id)regionFromCellMap:(id)arg1;
+ (id)regionFillingColumnsFromRegion:(id)arg1;
+ (id)regionFillingRowsFromRegion:(id)arg1;
+ (id)regionFromRowIndices:(id)arg1;
+ (id)regionFromColumnIndices:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateColumnsUsingBlock:(CDUnknownBlockType)arg1;
- (id)regionOffsetBy:(CDStruct_79c71658)arg1;
- (CDStruct_0441cfb5)suitableAnchor;
- (CDStruct_0441cfb5)suitableCursor;
- (_Bool)equalsCellRange:(CDStruct_5f1f7aa9)arg1;
- (_Bool)containsCellID:(CDStruct_0441cfb5)arg1;
- (id)regionByAddingRange:(CDStruct_5f1f7aa9)arg1;
- (id)regionBySubtractingRange:(CDStruct_5f1f7aa9)arg1;
- (_Bool)equalsCellRegion:(id)arg1;
- (_Bool)containsCellRegion:(id)arg1;
- (struct NSObject *)iterator;
- (_Bool)intersectsCellRange:(CDStruct_5f1f7aa9)arg1;
- (_Bool)containsCellRange:(CDStruct_5f1f7aa9)arg1;
- (void)p_insertRangeIntoRegion:(CDStruct_5f1f7aa9)arg1;
- (void)p_calculateAncillaryInformation;
- (void)enumerateCellRangesUsingBlock:(CDUnknownBlockType)arg1;
- (id)regionByIntersectingRange:(CDStruct_5f1f7aa9)arg1;
- (void)p_calculateIntersectingColumns;
- (void)p_calculateIntersectingRows;
- (void)p_calculateUpperLeftAndBottomRightCellID;
- (id)regionByUnioningEveryRangeInRegionWithRange:(CDStruct_5f1f7aa9)arg1;
- (id)regionByAddingRegion:(id)arg1;
- (id)regionBySubtractingRegion:(id)arg1;
- (id)regionByRemovingRows:(id)arg1;
- (id)regionByRemovingColumns:(id)arg1;
- (id)regionByIntersectingRowIndices:(id)arg1;
- (id)regionByIntersectingColumnIndices:(id)arg1;
- (id)regionByAddingRows:(id)arg1;
- (id)regionByAddingColumns:(id)arg1;
- (id)regionByApplyingRowMapping:(id)arg1;
- (_Bool)partiallyIntersectsCellRange:(CDStruct_5f1f7aa9)arg1;
- (_Bool)intersectsColumn:(unsigned char)arg1;
- (_Bool)intersectsRow:(unsigned short)arg1;
- (id)intersectingColumnsIndexSet;
- (id)intersectingRowsIndexSet;
- (struct NSObject *)rightToLeftIterator;
- (struct NSObject *)topToBottomIterator;
- (void)enumerateCellIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateInDirection:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateRowRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateColumnRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)fillCellRangeRowMajorSet:(set_1f50691b *)arg1 leftToRight:(_Bool)arg2;
- (void)fillCellRangeColMajorSet:(set_3ba0425c *)arg1 leftToRight:(_Bool)arg2;

@end
