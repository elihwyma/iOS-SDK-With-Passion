/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class RTRoutineManager;

@interface ATXLocationManagerRoutineCR : NSObject

{
    RTRoutineManager *_routineManager;
}

+ (id)closestLOI:(id)arg1 toLocation:(id)arg2;

- (id)init;
- (void)fetchClosestLOIWithinDistance:(double)arg1 ofLocation:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)fetchLOILocationOfType:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)fetchLOIVisitedDuring:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)fetchNextPredictedLOIFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 requireHighConfidence:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;
- (void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 requireHighConfidence:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;

@end
