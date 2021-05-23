/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <DataAccess/DAMailboxFetchMessageRequest.h>

@class MFDAMessageStore, MFMessage;

@protocol MFRequestQueueResponseConsumer;

@interface _MFDAMessageStoreFetchHeadersRequest : DAMailboxFetchMessageRequest

{
    id <MFRequestQueueResponseConsumer> consumer;
    MFDAMessageStore *store;
    MFMessage *message;
}

@property (nonatomic, readonly) _Bool shouldSend;
@property (nonatomic, readonly) _Bool isUserRequested;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)generationNumber;
- (id)deferredOperation;

@end
