/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphEdge.h>

@class NSString;

@interface PGGraphMeaningEdge : PGGraphEdge

@property (nonatomic, readonly) _Bool isReliable;
@property (nonatomic, readonly) NSString *meaningLabel;

@end
