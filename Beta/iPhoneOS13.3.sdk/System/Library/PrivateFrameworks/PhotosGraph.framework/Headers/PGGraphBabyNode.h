/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphNode.h>

@class NSSet;

@interface PGGraphBabyNode : PGGraphNode

@property (nonatomic, readonly) NSSet *momentNodes;
@property (nonatomic, readonly) NSSet *caretakerNodes;

- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateCaretakerNodesUsingBlock:(CDUnknownBlockType)arg1;

@end
