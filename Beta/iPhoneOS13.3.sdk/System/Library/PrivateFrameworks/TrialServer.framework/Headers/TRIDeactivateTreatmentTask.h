/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

#import <TrialServer/TRIExperimentBaseTask.h>

@class NSDate;

@interface TRIDeactivateTreatmentTask : TRIExperimentBaseTask

{
    NSDate *_startTime;
}

@property (retain, nonatomic) NSDate *startTime;

- (_Bool)setStatus:(long long)arg1;
- (id)nextTasksForRunStatus:(int)arg1;
- (int)runTask;

@end
