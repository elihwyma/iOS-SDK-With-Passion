/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

#import <TrialServer/TRIExperimentBaseTask.h>

@class NSMutableArray, NSString;

@interface TRITargetingTask : TRIExperimentBaseTask

{
    NSMutableArray *_targetingMetrics;
    int _experimentType;
    struct NSString *_treatmentId;
}

@property (retain) NSString *treatmentId;
@property int experimentType;

+ (id)taskWithExperimentId:(struct NSString *)arg1;

- (id)dependencies;
- (id)metrics;
- (id)nextTasksForRunStatus:(int)arg1;
- (void)targetingError:(id *)arg1 experimentId:(struct NSString *)arg2 errorType:(id)arg3 details:(id)arg4;
- (id)systemCovariates;
- (void)targetingError:(id *)arg1 experimentId:(struct NSString *)arg2 errorType:(id)arg3;
- (_Bool)getTreatment:(struct NSString **)arg1 forExperiment:(id)arg2 error:(id *)arg3;
- (int)runTask;

@end
