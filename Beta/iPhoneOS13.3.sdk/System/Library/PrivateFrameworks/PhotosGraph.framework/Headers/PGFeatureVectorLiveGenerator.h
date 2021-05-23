/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGFeatureVectorGenerator.h>

@class NSString;

@interface PGFeatureVectorLiveGenerator : PGFeatureVectorGenerator

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)enumerateFeatureVectorsByTypeUsingBlock:(CDUnknownBlockType)arg1;
- (id)_nearestAssetsForCurrentDate:(id)arg1 atLocation:(id)arg2;

@end
