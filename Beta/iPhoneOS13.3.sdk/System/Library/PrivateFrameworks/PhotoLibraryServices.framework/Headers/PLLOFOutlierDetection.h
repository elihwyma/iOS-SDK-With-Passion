/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLLOFOutlierDetection : NSObject

{
    _Bool _filterZeroDistanceDataset;
    unsigned long long _k;
}

@property (nonatomic) unsigned long long k;
@property (nonatomic) _Bool filterZeroDistanceDataset;

- (id)init;
- (id)filteredObjectsWithDataset:(id)arg1 distanceBlock:(CDUnknownBlockType)arg2;
- (id)createKNNMatrixWithDistanceMatrix:(double **)arg1 size:(unsigned long long)arg2;
- (double **)createDistancesMatrixForDataset:(id)arg1 distanceBlock:(CDUnknownBlockType)arg2;
- (void)freeDistancesMatrix:(double **)arg1 forDataset:(id)arg2;
- (id)lofScoresWithDataset:(id)arg1 distanceBlock:(CDUnknownBlockType)arg2;

@end
