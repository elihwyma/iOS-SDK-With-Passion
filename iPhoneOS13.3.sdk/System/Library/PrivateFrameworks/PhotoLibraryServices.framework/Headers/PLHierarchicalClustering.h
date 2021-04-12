//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLDataClustering.h>

@interface PLHierarchicalClustering : PLDataClustering
{
    BOOL _usesSortedDataRelativeDistanceCache;
    double _threshold;
    NSUInteger _k;
    NSUInteger _linkage;
}

@property(nonatomic) BOOL usesSortedDataRelativeDistanceCache; // @synthesize usesSortedDataRelativeDistanceCache=_usesSortedDataRelativeDistanceCache;
@property(nonatomic) NSUInteger linkage; // @synthesize linkage=_linkage;
@property(nonatomic) NSUInteger k; // @synthesize k=_k;
@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
- (id)performWithDataset:(id)arg1 progressBlock:(id /* CDUnknownBlockType */)arg2;
- (double )_createRelativeDistanceCacheForDataset:(id)arg1;
- (NSUInteger)_clustroidIndexForClusters:(NSUInteger )arg1 numberOfObjects:(NSUInteger)arg2 distances:(double )arg3 relativeDistanceCache:(double )arg4;
- (id)init;

@end

