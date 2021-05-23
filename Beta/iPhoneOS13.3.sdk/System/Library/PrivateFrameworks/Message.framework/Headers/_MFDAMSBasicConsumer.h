/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFBufferedQueue.h>

@class MFActivityMonitor, MFDAMailbox, MFDAMessageStore, MFError, MFMailMessageLibrary;

@interface _MFDAMSBasicConsumer : MFBufferedQueue

{
    MFDAMailbox *mailbox;
    MFDAMessageStore *store;
    MFMailMessageLibrary *library;
    MFActivityMonitor *monitor;
    MFError *error;
    unsigned long long numNewMessages;
}

@property (retain, nonatomic) MFActivityMonitor *monitor;
@property (retain, nonatomic) MFError *error;

- (void)dealloc;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;

@end
