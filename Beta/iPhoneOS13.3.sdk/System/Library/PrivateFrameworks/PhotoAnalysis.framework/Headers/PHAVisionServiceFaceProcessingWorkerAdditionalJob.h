/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/PHAWorkerJob.h>

@class PHAVisionServiceFaceProcessingWorker;

@interface PHAVisionServiceFaceProcessingWorkerAdditionalJob : PHAWorkerJob

{
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;
    unsigned long long _jobScenario;
    _Bool _isFinished;
}

- (_Bool)finished;
- (void)markAsFinished;
- (id)photoLibrary;
- (_Bool)startProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (_Bool)stopProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2;
- (_Bool)startJob:(id *)arg1;
- (_Bool)stopJob:(id *)arg1;
- (id)faceProcessingWorker;
- (unsigned long long)jobScenario;

@end
