/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGMoodSource.h>

@interface PGMoodSourceScene : PGMoodSource

+ (id)_plistName;
+ (_Bool)shouldUseSceneIdentifier:(id)arg1;

- (double)weight;
- (void)_combineMoodVectors;
- (unsigned long long)_sourceInputCount;

@end
