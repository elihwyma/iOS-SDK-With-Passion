/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphEdge.h>

@interface PGGraphSceneEdge : PGGraphEdge

@property (nonatomic, readonly) _Bool isReliable;
@property (nonatomic, readonly) _Bool isSearchableForEvent;
@property (nonatomic, readonly) unsigned long long numberOfAssets;
@property (nonatomic, readonly) unsigned long long numberOfHighConfidenceAssets;
@property (nonatomic, readonly) unsigned long long numberOfSearchConfidenceAssets;

- (id)debugDescription;

@end
