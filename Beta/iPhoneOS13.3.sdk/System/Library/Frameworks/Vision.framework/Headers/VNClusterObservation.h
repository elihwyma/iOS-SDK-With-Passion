/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNObservation.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSSet;

@interface VNClusterObservation : VNObservation

{
    NSArray *_clusters;
    NSArray *_suggestionsForCluster;
    NSData *_clusterState;
    NSSet *_clusteredFaceIds;
    NSArray *_groupedClusteredFaceIdsForCluster;
    NSNumber *_distance;
    NSDictionary *_distancesById;
}

@property (retain, nonatomic) NSArray *clusters;
@property (retain, nonatomic) NSArray *suggestionsForCluster;
@property (retain, nonatomic) NSData *clusterState;
@property (retain, nonatomic) NSSet *clusteredFaceIds;
@property (retain, nonatomic) NSArray *groupedClusteredFaceIdsForCluster;
@property (retain, nonatomic) NSNumber *distance;
@property (retain, nonatomic) NSDictionary *distancesById;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
