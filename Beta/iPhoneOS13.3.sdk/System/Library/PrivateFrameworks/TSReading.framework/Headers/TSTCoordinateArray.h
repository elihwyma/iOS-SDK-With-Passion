/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableIndexSet;

@interface TSTCoordinateArray : NSObject

{
    unsigned int mOffset;
    unsigned int mCount;
    double *mCoordinates;
    double mAverage;
    NSMutableIndexSet *mVisibleIndices;
    _Bool mLayoutDirectionIsLeftToRight;
    double mTableWidth;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)hasRightToLeftOrderingWithWidth:(double)arg1;
- (id)initWithCount:(unsigned int)arg1 atOffset:(unsigned int)arg2;

@end
