/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSMutableSet, PGGraphNode;

@interface PGPotentialPetMemory : PGPotentialMemory

{
    NSMutableSet *_mutableMomentNodes;
    NSArray *_petAssets;
    PGGraphNode *_owner;
    long long _year;
}

@property (retain) NSArray *petAssets;
@property (readonly) PGGraphNode *owner;
@property (readonly) long long year;

- (void)addMomentNode:(id)arg1;
- (id)initWithOwner:(id)arg1 year:(long long)arg2;

@end
