/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphPersonNode.h>

@interface PGGraphMeNode : PGGraphPersonNode

- (void)enumerateSocialGroupNodesWithRelationship:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateSocialGroupNodesForRelationshipLabel:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)_status:(unsigned long long)arg1 fitsQuery:(unsigned long long)arg2;
- (void)_enumerateRelationshipWithLabel:(id)arg1 matchingQuery:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)_relationshipLabelForRelationship:(unsigned long long)arg1;
- (void)enumeratePersonNodesWithRelationship:(unsigned long long)arg1 matchingQuery:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)relationshipEdgesToPersonNode:(id)arg1 matchingQuery:(unsigned long long)arg2;

@end
