/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PLRegionsAgglomerativeClusteringDataCluster : NSObject

{
    NSArray *_vectors;
    double _latitude;
    double _longitude;
    double _radius;
    double _score;
}

@property (readonly) NSArray *vectors;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double radius;
@property (nonatomic) double score;

+ (id)dataClusterWithDataVector:(id)arg1;
+ (id)mergedClusterFrom:(id)arg1;

- (id)description;
- (id)initWithDataVector:(id)arg1;

@end
