/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

#import <TrialServer/TRIExperimentBaseTask.h>

@interface TRIFetchExperimentTask : TRIExperimentBaseTask

+ (id)taskWithExperimentId:(struct NSString *)arg1;

- (id)description;
- (int)runTask;
- (_Bool)saveExperiment:(id)arg1;

@end
