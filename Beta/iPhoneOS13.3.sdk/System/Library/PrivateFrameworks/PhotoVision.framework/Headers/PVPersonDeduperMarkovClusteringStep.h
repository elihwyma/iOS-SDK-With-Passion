/*
 Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

#import <PhotoVision/PVPersonDeduperStep.h>

@interface PVPersonDeduperMarkovClusteringStep : PVPersonDeduperStep

+ (id)markovClustering:(id)arg1 withDistanceBlock:(CDUnknownBlockType)arg2;

- (id)name;
- (void)dedupePersons:(id)arg1 withOtherPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 resultBlock:(CDUnknownBlockType)arg4;

@end
