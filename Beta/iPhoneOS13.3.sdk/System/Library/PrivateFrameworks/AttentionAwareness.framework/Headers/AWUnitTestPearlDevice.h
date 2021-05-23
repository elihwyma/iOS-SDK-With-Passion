/*
 Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

#import <Foundation/NSObject.h>

@class AWUnitTestFaceDetectOperation;

@protocol BKDevicePearlDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWUnitTestPearlDevice : NSObject

{
    CDStruct_2c6bab44 _sampleStats;
    NSObject<OS_dispatch_queue> *_awQueue;
    AWUnitTestFaceDetectOperation *_lastOperation;
    CDUnknownBlockType _displayCallback;
    CDUnknownBlockType _smartCoverCallback;
    _Bool _facePresent;
    _Bool _pearlError;
    id <BKDevicePearlDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    CDStruct_2c6bab44 *_sampleStatsPtr;
}

@property (weak, nonatomic) id <BKDevicePearlDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property CDStruct_2c6bab44 *sampleStatsPtr;
@property _Bool facePresent;
@property _Bool pearlError;

+ (id)sharedDevice;

- (id)init;
- (id)createPresenceDetectOperationWithError:(id *)arg1;
- (void)setDisplayState:(_Bool)arg1;
- (void)setSmartCoverClosed:(_Bool)arg1;
- (void)getStatsWithBlock:(CDUnknownBlockType)arg1;
- (void)resetStats;
- (void)setSampleState:(_Bool)arg1;
- (void)setSampleState:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setSampleState:(_Bool)arg1 deliverEvent:(_Bool)arg2;
- (void)setSampleState:(_Bool)arg1 deliverEvent:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setDisplayState:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setDisplayCallback:(CDUnknownBlockType)arg1;
- (void)setSmartCoverClosed:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setSmartCoverCallback:(CDUnknownBlockType)arg1;
- (void)setPearlErrorState:(_Bool)arg1;
- (void)setPearlErrorState:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)deliverPearlDeviceState:(long long)arg1;
- (void)deliverPearlDeviceEvent:(long long)arg1;

@end
