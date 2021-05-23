/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/PHAWorkerJob.h>

@class NSObject, NSProgress, PHAVisionServiceFaceProcessingWorker;

@protocol OS_dispatch_queue;

@interface PHAContactClassificationJob : PHAWorkerJob

{
    _Bool _done;
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;
    unsigned long long _jobScenario;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSProgress *_progress;
}

@property (retain, nonatomic) PHAVisionServiceFaceProcessingWorker *faceProcessingWorker;
@property (nonatomic) unsigned long long jobScenario;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) _Bool done;

- (_Bool)finished;
- (float)completionScore;
- (_Bool)startProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (_Bool)stopProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2;

@end
