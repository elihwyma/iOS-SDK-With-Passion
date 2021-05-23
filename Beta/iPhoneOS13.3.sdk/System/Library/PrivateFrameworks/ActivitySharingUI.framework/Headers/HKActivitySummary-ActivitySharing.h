/*
 Image: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
 */

#import <HealthKit/HKActivitySummary.h>

@interface HKActivitySummary (ActivitySharing)

- (_Bool)_isEmptyMoveSummaryForSnapshot:(struct _HKFitnessFriendActivitySnapshot *)arg1;
- (id)_moveStringWithFont:(id)arg1 smallCapsFont:(id)arg2 color:(id)arg3 formattingManager:(id)arg4 snapshot:(struct _HKFitnessFriendActivitySnapshot *)arg5;
- (_Bool)_isEmptyExerciseSummary;
- (id)as_moveStringWithContext:(id)arg1 formattingManager:(id)arg2 snapshot:(struct _HKFitnessFriendActivitySnapshot *)arg3;
- (id)as_moveProgressStringWithContext:(id)arg1 formattingManager:(id)arg2 snapshot:(struct _HKFitnessFriendActivitySnapshot *)arg3;
- (id)as_movePercentStringWithContext:(id)arg1 snapshot:(struct _HKFitnessFriendActivitySnapshot *)arg2;
- (id)as_exerciseDurationStringWithContext:(id)arg1;
- (id)as_exerciseProgressStringWithContext:(id)arg1;
- (id)as_stepsStringWithContext:(id)arg1;
- (id)as_distanceStringWithContext:(id)arg1 formattingManager:(id)arg2;
- (id)as_pushesStringWithContext:(id)arg1;
- (double)as_moveCompletionPercentage;

@end
