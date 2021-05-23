/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

#import <TrialServer/TRITreatmentBaseTask.h>

@class NSDate;

@interface TRIActivateTreatmentTask : TRITreatmentBaseTask

{
    NSDate *_endTime;
    NSDate *_startTime;
}

@property (retain, nonatomic) NSDate *startTime;

+ (id)taskWithExperimentId:(struct NSString *)arg1 treatmentId:(struct NSString *)arg2;

- (id)dependencies;
- (id)endTime;
- (void)setup;
- (id)nextTasksForRunStatus:(int)arg1;
- (int)runTask;
- (_Bool)hasConflictWithOtherExperiments:(id)arg1;
- (_Bool)writeNamespaceDescriptorsInDirectory:(id)arg1 forExperiment:(id)arg2;

@end
