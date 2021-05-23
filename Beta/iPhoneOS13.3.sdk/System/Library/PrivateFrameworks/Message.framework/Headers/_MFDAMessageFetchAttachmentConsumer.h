/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFDAMailAccountConsumer.h>

@class MFActivityMonitor, MFProgressFilterDataConsumer;

@interface _MFDAMessageFetchAttachmentConsumer : MFDAMailAccountConsumer

{
    MFProgressFilterDataConsumer *_progressFilter;
    unsigned long long _expectedLength;
    unsigned long long _accumulatedLength;
    MFActivityMonitor *_monitor;
    _Bool _dataWasBase64;
    _Bool _fetchSucceeded;
}

@property (retain, nonatomic) MFProgressFilterDataConsumer *progressFilter;
@property (nonatomic) unsigned long long expectedLength;
@property (readonly) _Bool dataWasBase64;
@property (readonly) _Bool fetchSucceeded;

- (id)initWithActivityMonitor:(id)arg1;
- (void)consumeData:(id)arg1 ofContentType:(id)arg2 forAttachmentNamed:(id)arg3 ofMessageWithServerID:(id)arg4;
- (void)attachmentFetchCompletedWithStatus:(long long)arg1 forAttachmentNamed:(id)arg2 ofMessageWithServerID:(id)arg3 dataWasBase64:(_Bool)arg4 sentBytesCount:(unsigned long long)arg5 receivedBytesCount:(unsigned long long)arg6;

@end
