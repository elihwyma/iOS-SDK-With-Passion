/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGMoodSource.h>

@interface PGMoodSourceScore : PGMoodSource

- (double)weight;
- (id)positiveVector;
- (id)negativeVector;

@end
