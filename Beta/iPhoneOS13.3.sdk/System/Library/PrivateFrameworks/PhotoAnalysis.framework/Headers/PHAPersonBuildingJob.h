/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/PHAVisionServiceFaceProcessingWorkerAdditionalJob.h>

@class NSOperationQueue, NSString, PHAPersonBuildingJobOperation;

@interface PHAPersonBuildingJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob

{
    NSOperationQueue *_operationQueue;
    PHAPersonBuildingJobOperation *_personBuildingOperation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (float)completionScore;
- (void)operationDidProgress:(id)arg1;
- (id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2;
- (_Bool)startJob:(id *)arg1;
- (_Bool)stopJob:(id *)arg1;

@end
