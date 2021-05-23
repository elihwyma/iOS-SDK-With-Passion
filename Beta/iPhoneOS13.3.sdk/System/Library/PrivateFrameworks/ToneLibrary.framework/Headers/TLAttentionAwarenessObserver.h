/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class AWAttentionAwarenessClient, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface TLAttentionAwarenessObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSMutableDictionary *_pollingForAttentionEventHandlers;
    _Bool _isFullyInitialized;
    _Bool _isPollingForAttention;
    AWAttentionAwarenessClient *_attentionAwarenessClient;
    NSObject<OS_dispatch_queue> *_attentionAwarenessClientQueue;
}

+ (id)sharedAttentionAwarenessObserver;
+ (_Bool)supportsAttenuatingTonesForAttentionDetected;

- (id)init;
- (void)dealloc;
- (void)_assertRunningOnAccessQueue;
- (void)_assertNotRunningOnAccessQueue;
- (void)_didCompleteInitialization;
- (void)_endPollingForAttention;
- (void)_invokePollingForAttentionEventHandlers:(id)arg1 eventType:(long long)arg2;
- (void)_beginPollingForAttention;
- (void)_didReceiveAttentionPollingEventOfType:(unsigned long long)arg1 attentionEvent:(id)arg2;
- (id)pollForAttentionWithEventHandler:(CDUnknownBlockType)arg1;
- (void)cancelPollForAttentionWithToken:(id)arg1;

@end
