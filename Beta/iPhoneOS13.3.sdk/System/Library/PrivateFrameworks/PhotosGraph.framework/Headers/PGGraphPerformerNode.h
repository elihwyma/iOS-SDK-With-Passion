/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphNode.h>

@class NSString, PPNamedEntity;

@interface PGGraphPerformerNode : PGGraphNode

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PPNamedEntity *pg_namedEntity;
@property (nonatomic, readonly) NSString *name;

@end
