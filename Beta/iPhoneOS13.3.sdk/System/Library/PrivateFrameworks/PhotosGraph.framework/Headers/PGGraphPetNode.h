/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphNode.h>

@class NSSet;

@interface PGGraphPetNode : PGGraphNode

@property (nonatomic, readonly) NSSet *momentNodes;
@property (nonatomic, readonly) NSSet *ownerNodes;

- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateOwnerNodesUsingBlock:(CDUnknownBlockType)arg1;

@end
