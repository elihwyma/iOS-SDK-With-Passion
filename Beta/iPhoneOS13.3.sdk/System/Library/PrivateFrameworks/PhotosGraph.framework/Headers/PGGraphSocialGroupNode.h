/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphNode.h>

@class NSSet;

@interface PGGraphSocialGroupNode : PGGraphNode

@property (nonatomic, readonly) unsigned long long rank;
@property (nonatomic, readonly) unsigned long long numberOfMomentNodes;
@property (nonatomic, readonly) NSSet *momentNodes;
@property (nonatomic, readonly) NSSet *personNodes;

+ (id)weightSortDescriptors;
+ (id)sortedSocialGroupNodeForMomentNodes:(id)arg1;

- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePersonNodesUsingBlock:(CDUnknownBlockType)arg1;

@end
