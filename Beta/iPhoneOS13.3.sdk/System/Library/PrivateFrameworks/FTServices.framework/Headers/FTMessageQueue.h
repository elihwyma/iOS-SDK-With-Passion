/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <Foundation/NSObject.h>

@class CUTDeferredTaskQueue, IDSBaseMessage, NSArray, NSMutableArray;

@protocol FTMessageQueueDelegate;

@interface FTMessageQueue : NSObject

{
    NSMutableArray *_queue;
    NSMutableArray *_addDates;
    id <FTMessageQueueDelegate> _delegate;
    CUTDeferredTaskQueue *_timeoutTask;
}

@property (retain) NSMutableArray *_queue;
@property (retain) NSMutableArray *_addDates;
@property (readonly) IDSBaseMessage *topMessage;
@property (readonly) long long count;
@property (readonly) NSArray *messages;
@property (weak) id <FTMessageQueueDelegate> delegate;

- (id)init;
- (_Bool)addMessage:(id)arg1;
- (void)removeAllMessages;
- (void)_timeoutHit;
- (void)_clearTimeout;
- (void)_setTimeout;
- (id)dequeueTopMessage;
- (_Bool)addMessageAtHeadOfQueue:(id)arg1;
- (_Bool)removeMessage:(id)arg1;

@end
