/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGMoodSource.h>

@interface PGMoodSourceGraphNode : PGMoodSource

+ (id)_plistName;

- (double)weight;
- (id)_plistMoodIdentifiers;
- (unsigned long long)_sourceInputCount;

@end
