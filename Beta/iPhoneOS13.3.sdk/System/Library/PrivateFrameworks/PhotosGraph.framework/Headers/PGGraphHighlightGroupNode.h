/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphHighlightNode.h>

@class NSArray, PGGraphNode;

@interface PGGraphHighlightGroupNode : PGGraphHighlightNode

@property (readonly) PGGraphNode *typeNode;
@property (readonly) NSArray *highlightNodes;
@property (readonly) NSArray *sortedHighlightNodes;

+ (id)pathFromMoment;
+ (id)pathToMoment;
+ (id)pathFromTargetNodeDomain:(unsigned short)arg1;
+ (id)pathToTargetNodeDomain:(unsigned short)arg1;
+ (id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
+ (id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;

- (_Bool)isAggregation;
- (_Bool)isTrip;
- (_Bool)isLongTrip;
- (_Bool)isShortTrip;
- (_Bool)isPartOfTrip;
- (_Bool)isPartOfLongTrip;
- (_Bool)isPartOfShortTrip;
- (_Bool)isPartOfAggregation;
- (void)enumerateHighlightNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)momentNodes;
- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)eventEnumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;

@end
