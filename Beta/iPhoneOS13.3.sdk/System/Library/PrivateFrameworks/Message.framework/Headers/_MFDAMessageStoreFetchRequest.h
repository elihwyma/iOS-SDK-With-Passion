/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <DataAccess/DAMailboxFetchMessageRequest.h>

@class MFDAMessageStore, MFMessage, MFMimePart;

@protocol MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory;

@interface _MFDAMessageStoreFetchRequest : DAMailboxFetchMessageRequest

{
    id <MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory> consumer;
    MFDAMessageStore *store;
    MFMessage *message;
    MFMimePart *part;
    int format;
    _Bool partial;
}

@property (nonatomic, readonly) _Bool shouldSend;
@property (nonatomic, readonly) _Bool isUserRequested;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)generationNumber;
- (id)deferredOperation;

@end
