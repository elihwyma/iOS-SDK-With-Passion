/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphNode.h>

@class NSDate, NSSet;

@interface PGGraphMusicSessionNode : PGGraphNode

@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly) NSDate *localEndDate;
@property (nonatomic, readonly) NSSet *momentNodes;
@property (nonatomic, readonly) NSSet *trackNodes;

+ (id)musicSessionDateSortDescriptors;

- (void)enumerateMusicTrackNodesUsingBlock:(CDUnknownBlockType)arg1;

@end
