/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphNode.h>

@class NSSet, NSString, PGGraphBusinessNode, PPNamedEntity;

@interface PGGraphPublicEventNode : PGGraphNode

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PPNamedEntity *pg_namedEntity;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) PGGraphBusinessNode *businessNode;
@property (nonatomic, readonly) NSSet *categories;
@property (nonatomic, readonly) NSSet *localizedCategories;
@property (nonatomic, readonly) NSSet *preciseLocalizedCategoryNames;
@property (copy, nonatomic, readonly) NSSet *performers;
@property (nonatomic, readonly) long long expectedAttendance;

+ (id)momentNodesForPublicEventNodes:(id)arg1;

- (id)associatedNodesForRemoval;
- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)keywordDescription;
- (void)enumerateCategoryNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateLocalizedSubcategoryNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePerformerNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePublicEventCategoryNodesUsingBlock:(CDUnknownBlockType)arg1;

@end
