/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSSocketPairDataMessage.h>

@interface IDSSocketPairResourceTransferMessage : IDSSocketPairDataMessage

+ (id)resumeMessageWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 messageUUID:(id)arg3 nextByteOffset:(unsigned long long)arg4;
+ (id)cancelMessageWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 messageUUID:(id)arg3 cancelReason:(unsigned char)arg4;

- (unsigned char)type;
- (unsigned char)command;
- (unsigned long long)byteOffset;
- (unsigned char)cancelReason;

@end
