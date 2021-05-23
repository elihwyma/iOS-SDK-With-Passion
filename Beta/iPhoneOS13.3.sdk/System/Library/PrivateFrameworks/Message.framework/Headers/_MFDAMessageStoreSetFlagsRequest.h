/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <DataAccess/DAMailboxSetFlagsRequest.h>

@interface _MFDAMessageStoreSetFlagsRequest : DAMailboxSetFlagsRequest

@property (nonatomic, readonly) _Bool shouldSend;
@property (nonatomic, readonly) _Bool isUserRequested;

- (unsigned long long)generationNumber;

@end
