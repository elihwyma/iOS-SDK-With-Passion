/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

#import <TrialServer/TRIExperimentBaseTask.h>

@interface TRIAssetCleanupTask : TRIExperimentBaseTask

+ (id)task;
+ (id)taskWithExperimentId:(struct NSString *)arg1;

- (id)nextTasksForRunStatus:(int)arg1;
- (int)runTask;
- (_Bool)removeExperimentArtifact:(struct NSString *)arg1;
- (_Bool)removeTreatmentPathsWithExperiment:(id)arg1;
- (_Bool)removeExperiment:(id)arg1;
- (int)cleanupWithExperiment:(id)arg1;
- (int)cleanupWithExperimentId:(struct NSString *)arg1;

@end
