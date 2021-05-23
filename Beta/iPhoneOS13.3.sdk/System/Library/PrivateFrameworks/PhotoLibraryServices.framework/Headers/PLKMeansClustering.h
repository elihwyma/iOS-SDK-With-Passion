/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLDataClustering.h>

@interface PLKMeansClustering : PLDataClustering

{
    unsigned long long _k;
}

@property (nonatomic) unsigned long long k;

- (id)performWithDataset:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)performWithDataset:(id)arg1 numericData:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)_performWithDataset:(id)arg1 numericData:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (double *)_dataArray:(id)arg1 featureCount:(unsigned int)arg2 useKeypaths:(_Bool)arg3;

@end
