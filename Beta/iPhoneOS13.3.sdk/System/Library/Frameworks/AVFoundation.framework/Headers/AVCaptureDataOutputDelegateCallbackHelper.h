/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReferencingDelegateStorage, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCaptureDataOutputDelegateCallbackHelper : NSObject

{
    NSString *_defaultCallbackQueueName;
    NSObject<OS_dispatch_queue> *_defaultCallbackQueue;
    struct OpaqueFigSimpleMutex *_stateMutex;
    AVWeakReferencingDelegateStorage *_delegateStorage;
    AVWeakReferencingDelegateStorage *_delegateOverrideStorage;
    struct remoteQueueReceiverOpaque *_remoteQueueReceiver;
    CDUnknownBlockType _remoteQueueHandler;
    struct localQueueOpaque *_localQueue;
    CDUnknownBlockType _localQueueHandler;
    _Bool _canSetClientDelegateCallbackQueueWhenRunningInsideMediaserverd;
}

@property (readonly) id activeDelegate;
@property (readonly) NSObject<OS_dispatch_queue> *activeCallbackQueue;
@property (readonly) id clientDelegate;
@property (readonly) NSObject<OS_dispatch_queue> *clientCallbackQueue;
@property (readonly) id delegateOverride;
@property (readonly) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;

+ (void)initialize;

- (void)dealloc;
- (id)_activeDelegate;
- (id)_activeCallbackQueue;
- (_Bool)_validateCallbackQueue:(id)arg1 exceptionReason:(id *)arg2;
- (id)initWithQueueName:(id)arg1 canSetClientDelegateCallbackQueueWhenRunningInsideMediaserverd:(_Bool)arg2;
- (_Bool)setClientDelegate:(id)arg1 clientCallbackQueue:(id)arg2 exceptionReason:(id *)arg3;
- (_Bool)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2 exceptionReason:(id *)arg3;
- (void)updateRemoteQueueReceiver:(struct remoteQueueReceiverOpaque *)arg1 handler:(CDUnknownBlockType)arg2;
- (void)releaseRemoteQueueReceiver;
- (void)updateLocalQueue:(struct localQueueOpaque *)arg1 handler:(CDUnknownBlockType)arg2;

@end
