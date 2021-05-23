/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface MPSNDArrayDescriptor : NSObject

{
    MISSING_TYPE *_dimensionLengths;
    MISSING_TYPE *_sliceOffsets;
    MISSING_TYPE *_sliceLengths;
    MISSING_TYPE *_dimensionOrder;
    unsigned long long _numberOfDimensions;
    unsigned int _dataType;
    MPSNDArrayDescriptor *_child;
    MPSNDArrayDescriptor *_parent;
    int _transitionOp;
}

@property (nonatomic) unsigned int dataType;
@property (nonatomic) unsigned long long numberOfDimensions;

+ (id)descriptorWithDataType:(unsigned int)arg1 shape:(id)arg2;
+ (id)descriptorWithDataType:(unsigned int)arg1 dimensionSizes:(unsigned long long)arg2;
+ (id)descriptorWithDataType:(unsigned int)arg1 dimensionCount:(unsigned long long)arg2 dimensionSizes:(unsigned long long *)arg3;

- (void)dealloc;
- (id)initWithDataType:(unsigned int)arg1 dimensions:(unsigned long long)arg2 sizes: /* Error: Ran out of types for this method. */;
- (unsigned long long)lengthOfDimension:(unsigned long long)arg1;
- (void)setLengthOfDimension:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (struct MPSDimensionSlice)sliceRangeForDimension:(unsigned long long)arg1;
- (void)sliceDimension:(unsigned long long)arg1 withSubrange:(struct MPSDimensionSlice)arg2;
- (void)transposeDimension:(unsigned long long)arg1 withDimension:(unsigned long long)arg2;
- (MISSING_TYPE *)dimensionOrder;
- (void)reshapeWithShape:(id)arg1;
- (void)reshapeWithDimensionCount:(unsigned long long)arg1 dimensionSizes:(unsigned long long *)arg2;

@end
