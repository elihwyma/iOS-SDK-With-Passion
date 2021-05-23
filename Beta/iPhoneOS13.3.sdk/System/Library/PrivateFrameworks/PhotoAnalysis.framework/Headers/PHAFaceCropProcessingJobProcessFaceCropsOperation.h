/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSOperation.h>

@class NSArray, PHAVisionServiceFaceProcessingWorker;

@protocol PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate;

@interface PHAFaceCropProcessingJobProcessFaceCropsOperation : NSOperation

{
    id <PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate> _delegate;
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;
    NSArray *_faceCrops;
    unsigned long long _totalSteps;
    unsigned long long _currentStep;
}

- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)main;
- (float)percentComplete;
- (id)initWithFaceProcessingWorker:(id)arg1 faceCrops:(id)arg2;

@end
