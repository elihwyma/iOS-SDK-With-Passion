/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@interface PGMeaningfulEventProcessor : NSObject

+ (id)processRequiredCriteria:(id)arg1 forMoment:(id)arg2;
+ (id)_postProcessResults:(id)arg1 forMoment:(id)arg2;
+ (id)_legacyMeaningResultForResult:(id)arg1 requiredCriteriaByIdentifier:(id)arg2;
+ (id)_postProcessBirthdaysWithResults:(id)arg1 forMoment:(id)arg2;

@end
