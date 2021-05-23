/*
 Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

#import <PhotoVision/PVPersonDeduperStep.h>

@interface PVPersonDeduperSocialGroupTimeWarpingStep : PVPersonDeduperStep

- (id)name;
- (id)metricsKey;
- (_Bool)isPersonSimilar:(id)arg1 withOtherPerson:(id)arg2 withDistance:(float)arg3 minAgeType:(unsigned short)arg4;
- (void)dedupePersons:(id)arg1 withOtherPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 resultBlock:(CDUnknownBlockType)arg4;

@end
