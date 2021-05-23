/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSDateInterval, NSSet, PGGraphLocationNode;

@interface PGPotentialPastSupersetMemory : PGPotentialMemory

{
    PGGraphLocationNode *_supersetLocationNode;
    NSDateInterval *_supersetDateInterval;
    NSSet *_interestingMomentNodes;
    NSArray *_interestingAssetsInSuperset;
    NSArray *_assetsInSuperset;
    NSSet *_supersetLocationNodes;
}

@property (readonly) PGGraphLocationNode *supersetLocationNode;
@property (readonly) NSDateInterval *supersetDateInterval;
@property (readonly) NSSet *interestingMomentNodes;
@property (retain) NSArray *interestingAssetsInSuperset;
@property (retain) NSArray *assetsInSuperset;
@property (retain) NSSet *supersetLocationNodes;

- (id)initWithSupersetLocationNode:(id)arg1 supersetDateInterval:(id)arg2 interestingMomentNodes:(id)arg3 momentNodes:(id)arg4;

@end
