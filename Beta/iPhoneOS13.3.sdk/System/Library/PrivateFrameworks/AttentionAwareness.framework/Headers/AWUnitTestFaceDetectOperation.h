/*
 Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

#import <BiometricKit/BKFaceDetectOperation.h>

@class AWUnitTestPearlDevice, NSObject;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AWUnitTestFaceDetectOperation : BKFaceDetectOperation

{
    NSObject<OS_dispatch_queue> *_awQueue;
    NSObject<OS_dispatch_source> *_awInitTimer;
    NSObject<OS_dispatch_source> *_deadlineTimer;
    _Bool _started;
    _Bool _finished;
    AWUnitTestPearlDevice *_unitTestDevice;
}

@property (weak, nonatomic) AWUnitTestPearlDevice *unitTestDevice;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (long long)state;
- (_Bool)startWithError:(id *)arg1;
- (void)startWithReply:(CDUnknownBlockType)arg1;
- (void)awFinishWithReason:(long long)arg1;
- (void)awDeliverFaceFound;
- (void)awSetFaceFound;
- (void)awSetFaceDetectError;

@end
