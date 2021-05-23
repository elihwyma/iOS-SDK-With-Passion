/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/PHAGraphServiceWorkerGraphUpdateJob.h>

@class PHAGraphServiceWorker;

@interface PHAGraphServiceWorkerCumulativeJob : PHAGraphServiceWorkerGraphUpdateJob

{
    PHAGraphServiceWorker *_worker;
}

@property (weak, nonatomic) PHAGraphServiceWorker *worker;

+ (id)graphUpdateJobWithLibrary:(id)arg1 scenario:(unsigned long long)arg2 label:(id)arg3 updateBlock:(CDUnknownBlockType)arg4;

- (long long)executionContext;
- (void)prepareProcessingForWorker:(id)arg1;
- (void)additionalWorkAfterUpdate;

@end
