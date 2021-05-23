/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGMoodSource.h>

@interface PGMoodSourceVideo : PGMoodSource

+ (id)_plistName;

- (double)weight;
- (id)_plistMoodIdentifiers;
- (id)_assetsByMomentIDs;

@end
