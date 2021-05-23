/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface RBMeteredMessageQueue : NSObject

{
    NSMutableDictionary *_pendingMessagesByIdentifier;
    _Bool _isProcessingPendingMessages;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    CDUnknownBlockType _messageSendBlock;
}

@property (copy, nonatomic) CDUnknownBlockType messageSendBlock;

- (id)initWithQueue:(id)arg1;
- (_Bool)containsMessageWithIdentifier:(id)arg1;
- (void)_lockQueue_processPendingMessages;
- (void)enqueueIdentifier:(id)arg1 message:(id)arg2;

@end
