/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGDefaultEnrichmentProfile.h>

@interface PGSceneCompleteEnrichmentProfile : PGDefaultEnrichmentProfile

+ (unsigned long long)durationForSummary;
+ (long long)cardinalModeForSummary;

- (id)identifier;
- (unsigned short)targetEnrichmentState;
- (_Bool)canEnrichHighlight:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)curationOptions;

@end
