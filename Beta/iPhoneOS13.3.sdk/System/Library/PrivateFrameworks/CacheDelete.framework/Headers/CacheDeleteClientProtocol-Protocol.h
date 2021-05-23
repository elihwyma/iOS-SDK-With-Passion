/*
 Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

@protocol CacheDeleteClientProtocol

- (unsigned short)clientUpdatePurgeable: /* Error: Ran out of types for this method. */;
- (unsigned short)clientPurgeableSpace:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)clientItemizedPurgeableSpace:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)clientCancelPurge: /* Error: Ran out of types for this method. */;
- (unsigned short)clientPerformOperation:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRequestCacheableSpaceGuidance:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRegisterLowDiskFailure:failureType:isRoot: /* Error: Ran out of types for this method. */;
- (unsigned short)clientSetState:key: /* Error: Ran out of types for this method. */;
- (unsigned short)clientGetState:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)clientPerformServiceRequest:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)clientCheckin:endpoint:info:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)clientPurge:replyBlock: /* Error: Ran out of types for this method. */;

@end
