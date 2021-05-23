/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, PGGraphPersonNode;

@interface PGPotentialPersonOverTimeMemory : PGPotentialMemory

{
    PGGraphPersonNode *_personNode;
    NSArray *_curatedAssets;
    NSArray *_facedAssets;
}

@property (readonly) PGGraphPersonNode *personNode;
@property (retain) NSArray *facedAssets;
@property (retain) NSArray *curatedAssets;

- (id)uuid;
- (id)initWithPersonNode:(id)arg1 momentNodes:(id)arg2;

@end
