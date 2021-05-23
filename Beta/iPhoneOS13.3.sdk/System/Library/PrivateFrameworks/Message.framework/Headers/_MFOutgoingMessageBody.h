/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <MIME/MFMessageBody.h>

#import <Message/Swift-Protocol.h>

@class MFBufferedDataConsumer, NSData, NSString;

@interface _MFOutgoingMessageBody : MFMessageBody <Swift>

{
    MFBufferedDataConsumer *_consumer;
    NSData *_rawData;
    unsigned long long _count;
    _Bool _lastNewLine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (unsigned long long)count;
- (id)data;
- (long long)appendData:(id)arg1;
- (void)done;
- (id)rawData;
- (_Bool)isLastCharacterNewLine;

@end
