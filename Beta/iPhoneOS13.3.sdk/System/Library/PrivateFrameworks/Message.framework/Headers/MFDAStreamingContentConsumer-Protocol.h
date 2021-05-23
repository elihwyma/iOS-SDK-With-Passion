/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Swift-Protocol.h>

@protocol MFDAStreamingContentConsumer <Swift>

- (unsigned short)data;
- (unsigned short)succeeded;
- (unsigned short)didBeginStreaming;
- (unsigned short)timeOfLastActivity;

@end
