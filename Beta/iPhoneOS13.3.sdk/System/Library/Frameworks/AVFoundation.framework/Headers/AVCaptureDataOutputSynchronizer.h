/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureDataOutputSynchronizerInternal, NSArray, NSString;

@protocol AVCaptureDataOutputSynchronizerDelegate, OS_dispatch_queue;

@interface AVCaptureDataOutputSynchronizer : NSObject

{
    AVCaptureDataOutputSynchronizerInternal *_internal;
}

@property (retain, readonly) NSArray *dataOutputs;
@property (nonatomic, readonly) id <AVCaptureDataOutputSynchronizerDelegate> delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)depthDataOutput:(id)arg1 didOutputDepthData:(id)arg2 timestamp:(CDStruct_1b6d18a9)arg3 connection:(id)arg4;
- (void)depthDataOutput:(id)arg1 didDropDepthData:(id)arg2 timestamp:(CDStruct_1b6d18a9)arg3 connection:(id)arg4 reason:(long long)arg5;
- (void)visionDataOutput:(id)arg1 didOutputVisionDataPixelBuffer:(struct __CVBuffer *)arg2 timestamp:(CDStruct_1b6d18a9)arg3 connection:(id)arg4;
- (void)visionDataOutput:(id)arg1 didDropVisionDataPixelBufferForTimestamp:(CDStruct_1b6d18a9)arg2 connection:(id)arg3 reason:(long long)arg4;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (int)_computedMasterSynchronizedDataQueueMaxDepthForDataOutputs:(id)arg1;
- (void)_assignTimestampAdjustmentQueueToDataOutputStorageWithCommonProvenance;
- (void)_createTimestampHistoryQueuesForMetadataOutputStoragesWithNoTimestampAdjustmentQueues;
- (void)_overrideDataOutputDelegatesForDelegateCallbackQueue:(id)arg1;
- (void)_appendSynchronizedData:(id)arg1 forCaptureOutput:(id)arg2;
- (void)_dispatchRipenedSynchronizedData;
- (void)_adjustSynchronizedDataTimestamps;
- (CDStruct_1b6d18a9)_earliestSlaveSynchronizedDataQueueTimestamp;
- (void)_dispatchSynchronizedDataWithTimestamp:(CDStruct_1b6d18a9)arg1;
- (_Bool)_allSlaveSynchronizedDataOutputsContainTimestampEqualToOrGreaterThanMasterTimestamp:(CDStruct_1b6d18a9)arg1;
- (id)initWithDataOutputs:(id)arg1;

@end
