/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSSet, NSString, PGGraphSocialGroupNode;

@interface PGPotentialSocialGroupOverTimeMemory : PGPotentialMemory

{
    PGGraphSocialGroupNode *_socialGroupNode;
    NSSet *_personNodes;
    NSArray *_curatedAssets;
    NSArray *_facedAssets;
    NSString *_uuid;
}

@property (readonly) PGGraphSocialGroupNode *socialGroupNode;
@property (readonly) NSSet *personNodes;
@property (retain) NSArray *curatedAssets;
@property (retain) NSArray *facedAssets;
@property (readonly) NSString *uuid;

- (id)initWithSocialGroupNode:(id)arg1 momentNodes:(id)arg2;

@end
