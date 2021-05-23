/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@protocol PGGraphLocatedEvent <Swift>

@property (readonly) _Bool hasLocation;
@property (readonly) _Bool happensPartiallyAtMyHome;
@property (readonly) _Bool happensPartiallyAtMyWork;

- (unsigned short)addressNodes;
- (unsigned short)poiNodes;
- (unsigned short)roiNodes;

@end
