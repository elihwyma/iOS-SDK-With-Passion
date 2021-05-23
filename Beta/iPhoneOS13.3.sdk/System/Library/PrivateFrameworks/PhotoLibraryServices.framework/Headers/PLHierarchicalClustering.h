/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLDataClustering.h>

@interface PLHierarchicalClustering : PLDataClustering

{
    _Bool _usesSortedDataRelativeDistanceCache;
    double _threshold;
    unsigned long long _k;
    unsigned long long _linkage;
}

@property (nonatomic) double threshold;
@property (nonatomic) unsigned long long k;
@property (nonatomic) unsigned long long linkage;
@property (nonatomic) _Bool usesSortedDataRelativeDistanceCache;

- (id)init;
- (unsigned long long)_clustroidIndexForClusters:(unsigned long long *)arg1 numberOfObjects:(unsigned long long)arg2 distances:(double **)arg3 relativeDistanceCache:(double *)arg4;
- (double *)_createRelativeDistanceCacheForDataset:(id)arg1;
- (id)performWithDataset:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;

@end
