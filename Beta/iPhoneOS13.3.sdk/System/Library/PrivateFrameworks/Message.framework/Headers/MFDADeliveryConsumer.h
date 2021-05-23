/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFDAMailAccountConsumer.h>

@class MFError;

@interface MFDADeliveryConsumer : MFDAMailAccountConsumer

{
    MFError *_error;
    long long _status;
    unsigned long long _bytesRead;
    unsigned long long _bytesWritten;
}

@property (retain, nonatomic) MFError *error;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) unsigned long long bytesRead;
@property (nonatomic, readonly) unsigned long long bytesWritten;

- (void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)messageDidSendWithContext:(id)arg1 sentBytesCount:(unsigned long long)arg2 receivedBytesCount:(unsigned long long)arg3;

@end
