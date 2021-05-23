/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLDataDensityClustering.h>

@interface PLDBSCANClustering : PLDataDensityClustering

- (id)performWithDataset:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)_neighborsAtIndex:(unsigned long long)arg1 withDistancesMatrix:(double **)arg2 number:(unsigned long long)arg3;
- (id)_expandClusterForObject:(id)arg1 dataset:(id)arg2 objectsMappedToCluster:(struct __CFSet *)arg3 visitedObjects:(unsigned long long *)arg4 distancesMatrix:(double **)arg5 neighbors:(id)arg6;

@end
