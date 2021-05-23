/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphNode.h>

@class NSNumber, NSSet, NSString;

@interface PGGraphMusicTrackNode : PGGraphNode

@property (nonatomic, readonly) NSSet *albumNodes;
@property (nonatomic, readonly) NSSet *genreNodes;
@property (nonatomic, readonly) NSSet *artistNodes;
@property (nonatomic, readonly) NSNumber *durationInSeconds;
@property (nonatomic, readonly) NSString *title;

+ (id)musicTrackTitleSortDescriptors;

- (id)description;
- (void)enumerateAlbumNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateGenreNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateArtistNodesUsingBlock:(CDUnknownBlockType)arg1;

@end
