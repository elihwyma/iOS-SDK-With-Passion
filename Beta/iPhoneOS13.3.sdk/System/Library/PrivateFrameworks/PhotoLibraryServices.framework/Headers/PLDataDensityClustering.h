/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLDataClustering.h>

@interface PLDataDensityClustering : PLDataClustering

{
    double _maximumDistance;
    unsigned long long _minimumNumberOfObjects;
}

@property (nonatomic) double maximumDistance;
@property (nonatomic) unsigned long long minimumNumberOfObjects;

- (id)init;

@end
