/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface AXIPCOutstandingAsyncRequest : NSObject

{
    unsigned int _replyPort;
    NSObject<OS_dispatch_queue> *_replyQueue;
    CDUnknownBlockType _replyHandler;
    struct __CFRunLoopSource *_replyMachPortSource;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *replyQueue;
@property (nonatomic, readonly) unsigned int replyPort;
@property (nonatomic, readonly) CDUnknownBlockType replyHandler;
@property (nonatomic, readonly) struct __CFRunLoopSource *replyMachPortSource;

+ (void)initialize;
+ (void)registerOutstandingRequest:(id)arg1;
+ (void)unregisterByPort:(unsigned int)arg1;
+ (id)lookupByPort:(unsigned int)arg1;

- (void)dealloc;
- (void)_responseReceived:(id)arg1;
- (id)initWithReplyPort:(unsigned int)arg1 handlerQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)registerAndListenForResponse;
- (void)rawResponseReceived:(id)arg1;
- (void)sendOnceRightDestroyed;
- (void)initialSendAborted;

@end
