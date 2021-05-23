/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSMutableSet, PGGraphNode;

@interface PGPotentialHobbyMemory : PGPotentialMemory

{
    NSMutableSet *_mutableMomentNodes;
    NSArray *_hobbyAssets;
    PGGraphNode *_person;
    long long _year;
    long long _hobbyType;
}

@property (retain) NSArray *hobbyAssets;
@property (readonly) PGGraphNode *person;
@property (readonly) long long year;
@property (readonly) long long hobbyType;

- (void)addMomentNode:(id)arg1;
- (id)initWithPerson:(id)arg1 year:(long long)arg2 hobbyType:(long long)arg3;

@end
