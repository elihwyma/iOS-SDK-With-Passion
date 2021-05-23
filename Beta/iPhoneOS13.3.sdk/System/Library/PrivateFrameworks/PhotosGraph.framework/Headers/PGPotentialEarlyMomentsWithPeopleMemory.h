/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSSet;

@interface PGPotentialEarlyMomentsWithPeopleMemory : PGPotentialMemory

{
    NSSet *_personNodes;
    NSArray *_facedAssets;
}

@property (nonatomic, readonly) NSSet *personNodes;
@property (retain, nonatomic) NSArray *facedAssets;

- (id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2;

@end
