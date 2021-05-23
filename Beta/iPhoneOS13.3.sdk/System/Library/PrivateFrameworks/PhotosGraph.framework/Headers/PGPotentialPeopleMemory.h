/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSMutableSet, PGGraphNode;

@interface PGPotentialPeopleMemory : PGPotentialMemory

{
    NSMutableSet *_mutableMomentNodes;
    PGGraphNode *_peopleNode;
    long long _year;
    NSArray *_facedAssets;
}

@property (retain) PGGraphNode *peopleNode;
@property (readonly) long long year;
@property (retain) NSArray *facedAssets;

- (void)addMomentNode:(id)arg1;
- (id)initWithSubcategory:(unsigned long long)arg1 peopleNode:(id)arg2 year:(long long)arg3;

@end
