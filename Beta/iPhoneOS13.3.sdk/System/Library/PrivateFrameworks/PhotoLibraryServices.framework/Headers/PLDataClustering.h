/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PLDataClustering : NSObject

{
    CDUnknownBlockType _distanceBlock;
    NSArray *_numericValueKeypaths;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType distanceBlock;
@property (nonatomic, readonly) NSArray *numericValueKeypaths;

+ (id)clustering;
+ (id)clusteringWithDistanceBlock:(CDUnknownBlockType)arg1;
+ (id)clusteringWithNumericValueKeypaths:(id)arg1;

- (id)performWithDataset:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)freeDistancesMatrix:(double **)arg1 forDataset:(id)arg2;
- (id)initWithNumericValueKeypaths:(id)arg1;
- (id)initWithDistanceBlock:(CDUnknownBlockType)arg1;
- (double **)createDistancesMatrixForDataset:(id)arg1;

@end
