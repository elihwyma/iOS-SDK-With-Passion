/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSSet;

@interface PGPotentialRecurrentTripMemory : PGPotentialMemory

{
    NSSet *_tripLocationNodes;
}

@property (readonly) NSSet *tripLocationNodes;

- (id)initWithTripLocationNodes:(id)arg1 momentNodes:(id)arg2;

@end
