/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSMutableSet, NSSet, PGGraphSocialGroupNode;

@interface PGPotentialSocialGroupMemory : PGPotentialMemory

{
    NSMutableSet *_mutableMomentNodes;
    PGGraphSocialGroupNode *_socialGroupNode;
    long long _year;
    NSArray *_facedAssets;
    NSSet *_peopleUUIDs;
}

@property (readonly) PGGraphSocialGroupNode *socialGroupNode;
@property (readonly) long long year;
@property (retain) NSArray *facedAssets;
@property (retain) NSSet *peopleUUIDs;

- (void)addMomentNode:(id)arg1;
- (id)initWithSocialGroupNode:(id)arg1 year:(long long)arg2;

@end
