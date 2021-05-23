/*
 Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

#import <PhotoVision/PVPersonDeduperStep.h>

@interface PVPersonDeduperSocialGroupOverlaps : PVPersonDeduperStep

- (id)name;
- (id)metricsKey;
- (_Bool)isPersonSimilar:(id)arg1 withOtherPerson:(id)arg2 withDistance:(float)arg3 minAgeType:(unsigned short)arg4;
- (void)mergePersons:(id)arg1 otherPersonLocalIdentifiers:(id)arg2 personsFetchResult:(id)arg3 mergeSocialGroupPersonIdentifiers:(id)arg4;
- (void)dedupePersons:(id)arg1 withOtherPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 resultBlock:(CDUnknownBlockType)arg4;

@end
