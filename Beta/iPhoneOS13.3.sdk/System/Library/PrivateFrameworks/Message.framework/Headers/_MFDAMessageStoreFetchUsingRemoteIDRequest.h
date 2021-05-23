/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <DataAccess/DAMailboxFetchMessageRequest.h>

@interface _MFDAMessageStoreFetchUsingRemoteIDRequest : DAMailboxFetchMessageRequest

@property (nonatomic, readonly) _Bool shouldSend;
@property (nonatomic, readonly) _Bool isUserRequested;

- (unsigned long long)generationNumber;

@end
