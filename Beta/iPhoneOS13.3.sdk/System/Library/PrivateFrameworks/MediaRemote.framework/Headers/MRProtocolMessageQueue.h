/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MRPendingMessageQueue, NSMutableDictionary;

@protocol MRProtocolMessageQueueDataSource, MRProtocolMessageQueueDelegate, OS_dispatch_queue;

@interface MRProtocolMessageQueue : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    id <MRProtocolMessageQueueDataSource> _datasource;
    id <MRProtocolMessageQueueDelegate> _delegate;
    MRPendingMessageQueue *_pendingMessageQueue;
    NSMutableDictionary *_pendingReplyQueue;
}

@property (weak, nonatomic) id <MRProtocolMessageQueueDataSource> datasource;
@property (weak, nonatomic) id <MRProtocolMessageQueueDelegate> delegate;

- (void)dealloc;
- (void)flush;
- (id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1;
- (id)_dataForMessage:(id)arg1;
- (void)enqueueMessage:(id)arg1 reply:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (_Bool)reply:(id)arg1;

@end
