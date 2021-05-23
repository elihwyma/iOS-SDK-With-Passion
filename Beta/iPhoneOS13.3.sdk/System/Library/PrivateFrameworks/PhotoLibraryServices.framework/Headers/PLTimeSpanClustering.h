/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLDataClustering.h>

@interface PLTimeSpanClustering : PLDataClustering

{
    unsigned long long _averageNumberOfObjects;
    double _minimumSpan;
}

@property (nonatomic) unsigned long long averageNumberOfObjects;
@property (nonatomic) double minimumSpan;

- (id)init;
- (id)performWithDataset:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)_findNearestIndexMatchingTimeSpan:(unsigned long long)arg1 inDataset:(id)arg2;

@end
