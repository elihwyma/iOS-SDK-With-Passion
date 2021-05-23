/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <DataAccess/DAMailboxDeleteMessageRequest.h>

@interface _MFDAMessageStoreDeleteRequest : DAMailboxDeleteMessageRequest

@property (nonatomic, readonly) _Bool shouldSend;
@property (nonatomic, readonly) _Bool isUserRequested;

- (unsigned long long)generationNumber;

@end
