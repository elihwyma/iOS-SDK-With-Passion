/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureOutput, NSMutableArray;

@protocol AVCaptureDataOutputDelegateOverride, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCDOSDataOutputStorage : NSObject

{
    AVCaptureOutput<AVCaptureDataOutputDelegateOverride> *_dataOutput;
    NSMutableArray *_synchronizedDataQueue;
    NSObject<OS_dispatch_queue> *_delegateOverrideCallbackQueue;
    NSMutableArray *_timestampAdjustmentsDataQueue;
    NSMutableArray *_mdoTimeStampHistoryQueue;
}

@property (nonatomic, readonly) AVCaptureOutput<AVCaptureDataOutputDelegateOverride> *dataOutput;
@property (nonatomic, readonly) NSMutableArray *synchronizedDataQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (nonatomic, readonly, getter=isLive) _Bool live;
@property (retain, nonatomic) NSMutableArray *timestampAdjustmentsDataQueue;
@property (retain, nonatomic) NSMutableArray *mdoTimeStampHistoryQueue;

- (void)dealloc;
- (id)initWithDataOutput:(id)arg1;

@end
