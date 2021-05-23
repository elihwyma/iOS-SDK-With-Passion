/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLRegionsClustering.h>

@interface PLRegionsDensityClustering : PLRegionsClustering

{
    _Bool _includeDefiniteClusters;
    _Bool _removeDefiniteClustersObjectsFromDataset;
    _Bool _includeExtensiveClusters;
    _Bool _removeExtensiveClustersObjectsFromDataset;
    _Bool _removeExtensiveClustersContainingDefiniteClusters;
    unsigned long long _algorithm;
    double _definiteClusterTimeIntervalDistance;
    double _definiteClusterMaximumDistanceUnit;
    double _definiteClusterMinimumNumberOfObjectsPercent;
    unsigned long long _definiteClusterMinimumNumberOfObjects;
    double _extensiveClusterTimeIntervalDistance;
    double _extensiveClusterMaximumDistanceUnit;
    double _extensiveClusterMinimumNumberOfObjectsPercent;
    unsigned long long _extensiveClusterMinimumNumberOfObjects;
}

@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) _Bool includeDefiniteClusters;
@property (nonatomic) double definiteClusterTimeIntervalDistance;
@property (nonatomic) double definiteClusterMaximumDistanceUnit;
@property (nonatomic) double definiteClusterMinimumNumberOfObjectsPercent;
@property (nonatomic) unsigned long long definiteClusterMinimumNumberOfObjects;
@property (nonatomic) _Bool removeDefiniteClustersObjectsFromDataset;
@property (nonatomic) _Bool includeExtensiveClusters;
@property (nonatomic) double extensiveClusterTimeIntervalDistance;
@property (nonatomic) double extensiveClusterMaximumDistanceUnit;
@property (nonatomic) double extensiveClusterMinimumNumberOfObjectsPercent;
@property (nonatomic) unsigned long long extensiveClusterMinimumNumberOfObjects;
@property (nonatomic) _Bool removeExtensiveClustersObjectsFromDataset;
@property (nonatomic) _Bool removeExtensiveClustersContainingDefiniteClusters;

- (id)init;
- (id)performWithDataset:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_locationBasedClusteringBlock;
- (CDUnknownBlockType)_timeAndLocationBasedClusteringBlockWithTimeIntervalDistance:(double)arg1;

@end
