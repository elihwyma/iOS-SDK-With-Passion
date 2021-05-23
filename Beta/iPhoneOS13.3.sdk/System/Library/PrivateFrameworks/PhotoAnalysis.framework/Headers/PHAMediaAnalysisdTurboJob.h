/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/PHAWorkerJob.h>

@class PHPhotoLibrary;

@interface PHAMediaAnalysisdTurboJob : PHAWorkerJob

{
    struct os_unfair_lock_s _lock;
    PHPhotoLibrary *_library;
    int _requestId;
    _Bool _complete;
}

- (_Bool)finished;
- (void)requestCompleted;
- (float)completionScore;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 library:(id)arg3;
- (_Bool)startProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (_Bool)stopProcessingOnWorker:(id)arg1 withError:(id *)arg2;

@end
