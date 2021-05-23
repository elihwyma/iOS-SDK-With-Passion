/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGMoodSource.h>

@interface PGMoodSourceMemory : PGMoodSource

+ (id)_plistName;

- (double)weight;
- (id)_plistMoodIdentifiers;
- (_Bool)_shouldProcessSource;

@end
