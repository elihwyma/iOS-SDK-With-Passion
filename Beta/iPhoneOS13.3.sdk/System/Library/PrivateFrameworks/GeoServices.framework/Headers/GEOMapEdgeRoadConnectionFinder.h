/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapEdgeConnectionFinder.h>

__attribute__((visibility("hidden")))
@interface GEOMapEdgeRoadConnectionFinder : GEOMapEdgeConnectionFinder

- (_Bool)_isRoadEdgeEqual:(const CDStruct_91f75a7f *)arg1 other:(const CDStruct_91f75a7f *)arg2;
- (void)_findConnectedEdges:(CDUnknownBlockType)arg1 incoming:(_Bool)arg2;
- (void)_findConnections:(CDUnknownBlockType)arg1 incoming:(_Bool)arg2;

@end
