/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

#import <TrialServer/TRITreatmentBaseTask.h>

@interface TRIMakeDefaultTask : TRITreatmentBaseTask

+ (id)taskWithExperimentId:(struct NSString *)arg1 treatmentId:(struct NSString *)arg2;

- (id)dependencies;
- (id)nextTasksForRunStatus:(int)arg1;
- (int)runTask;

@end
