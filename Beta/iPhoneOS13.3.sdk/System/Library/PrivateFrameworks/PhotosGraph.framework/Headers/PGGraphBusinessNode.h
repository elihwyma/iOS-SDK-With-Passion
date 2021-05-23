/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphNode.h>

@class NSSet, NSString, PPNamedEntity;

@interface PGGraphBusinessNode : PGGraphNode

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PPNamedEntity *pg_namedEntity;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long venueCapacity;
@property (copy, nonatomic, readonly) NSSet *businessCategories;
@property (nonatomic, readonly) NSSet *publicEventNodes;

- (id)associatedNodesForRemoval;
- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)keywordDescription;
- (void)enumerateBusinessCategoryNodesUsingBlock:(CDUnknownBlockType)arg1;

@end
