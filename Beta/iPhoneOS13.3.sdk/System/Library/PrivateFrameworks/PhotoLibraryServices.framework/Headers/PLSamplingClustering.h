/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLDataDensityClustering.h>

@interface PLSamplingClustering : PLDataDensityClustering

{
    unsigned long long _numberOfClusters;
}

@property (nonatomic) unsigned long long numberOfClusters;

- (id)performWithDataset:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;

@end
