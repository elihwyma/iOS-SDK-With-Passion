/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Security/Swift-Protocol.h>

@protocol CKKSControlProtocol <Swift>

- (unsigned short)rpcStatus:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)rpcFastStatus:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)rpcResetLocal:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)rpcResetCloudKit:reason:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)rpcResync:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)rpcFetchAndProcessChanges:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)rpcFetchAndProcessClassAChanges:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)rpcPushOutgoingChanges:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)rpcCKMetric:attributes:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)rpcGetCKDeviceIDWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)performanceCounters: /* Error: Ran out of types for this method. */;
- (unsigned short)rpcResyncLocal:reply: /* Error: Ran out of types for this method. */;

@end
