/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

#import <TrialServer/TRITreatmentBaseTask.h>

@interface TRIFetchTreatmentTask : TRITreatmentBaseTask

+ (id)taskWithExperimentId:(struct NSString *)arg1 treatmentId:(struct NSString *)arg2;

- (id)dependencies;
- (int)runTask;
- (int)processTreatment:(id)arg1;

@end
