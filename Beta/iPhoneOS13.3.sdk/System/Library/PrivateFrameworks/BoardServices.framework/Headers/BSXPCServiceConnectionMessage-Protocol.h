/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <BoardServices/Swift-Protocol.h>

@protocol BSXPCServiceConnectionMessage <Swift>

- (unsigned short)send;
- (unsigned short)expectsReply;
- (unsigned short)createReply;
- (unsigned short)sendSynchronously;

@end
