/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/PHAVisionServiceFaceProcessingWorkerAdditionalJob.h>

@class PHAVisionServiceFaceProcessingWorkerJobKeepAlive;

@interface PHAFaceClusteringJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob

{
    PHAVisionServiceFaceProcessingWorkerJobKeepAlive *_keepAlive;
}

- (float)completionScore;
- (id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2;
- (_Bool)startJob:(id *)arg1;
- (_Bool)stopJob:(id *)arg1;
- (void)_startJobKeepAlive;
- (void)_stopJobKeepAlive;
- (void)_handleClusteringCompletion;

@end
