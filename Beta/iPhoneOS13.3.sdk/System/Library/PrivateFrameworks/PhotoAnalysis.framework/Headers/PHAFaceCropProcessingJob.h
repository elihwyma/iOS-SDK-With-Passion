/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/PHAVisionServiceFaceProcessingWorkerAdditionalJob.h>

@class NSOperationQueue, NSString, PHAFaceCropProcessingJobProcessFaceCropsOperation;

@interface PHAFaceCropProcessingJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob

{
    NSOperationQueue *_operationQueue;
    PHAFaceCropProcessingJobProcessFaceCropsOperation *_processingOperation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (float)completionScore;
- (_Bool)startJob:(id *)arg1;
- (_Bool)stopJob:(id *)arg1;
- (void)operation:(id)arg1 didProcessFaceCrop:(id)arg2 withError:(id)arg3;
- (id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2 dirtyFaceCrops:(id)arg3;

@end
