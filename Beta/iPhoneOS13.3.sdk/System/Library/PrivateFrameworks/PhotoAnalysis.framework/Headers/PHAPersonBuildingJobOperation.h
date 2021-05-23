/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSOperation.h>

@class NSProgress, PHAVisionServiceFaceProcessingWorker, PVCanceler;

@protocol PHAPersonBuildingJobOperationDelegate;

@interface PHAPersonBuildingJobOperation : NSOperation

{
    id <PHAPersonBuildingJobOperationDelegate> _delegate;
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;
    PVCanceler *_canceler;
    NSProgress *_progress;
    float _percentComplete;
}

- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)cancel;
- (void)main;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (float)percentComplete;
- (id)initWithFaceProcessingWorker:(id)arg1;

@end
