/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphNode.h>

@class NSArray, NSString;

@interface PGGraphMeaningNode : PGGraphNode

{
    long long _isVeryMeaningfulCachedValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *pg_topic;
@property (nonatomic) long long isVeryMeaningfulCachedValue;
@property (readonly) PGGraphMeaningNode *parentMeaningNode;
@property (nonatomic, readonly, getter=isVeryMeaningful) _Bool veryMeaningful;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSArray *localizedSynonyms;

+ (id)meaningLabelsForMeaningNodes:(id)arg1;

- (id)associatedNodesForRemoval;
- (void)enumerateHighlightNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)momentNodes;
- (id)highlightNodes;
- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMeaningfulEventsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSubmeaningsUsingBlock:(CDUnknownBlockType)arg1;
- (void)traverseSubmeaningHierarchyUsingBlock:(CDUnknownBlockType)arg1;
- (void)traverseParentMeaningHierarchyUsingBlock:(CDUnknownBlockType)arg1;
- (id)_localizationKeyForMeaningLabel:(id)arg1;

@end
