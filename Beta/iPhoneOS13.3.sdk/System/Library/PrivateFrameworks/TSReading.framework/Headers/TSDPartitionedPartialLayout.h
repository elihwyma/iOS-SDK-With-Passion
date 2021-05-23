/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDLayout.h>

@class TSDDefaultPartitioner;

@interface TSDPartitionedPartialLayout : TSDLayout

{
    struct CGRect mBounds;
    TSDDefaultPartitioner *mPartitioner;
}

@property (nonatomic, readonly) TSDDefaultPartitioner *partitioner;
@property (nonatomic, readonly) struct CGRect bounds;

- (Class)repClassOverride;
- (id)computeLayoutGeometry;
- (id)initWithInfo:(id)arg1 bounds:(struct CGRect)arg2 partitioner:(id)arg3;

@end
