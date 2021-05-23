/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Security/Swift-Protocol.h>

@protocol EscrowRequestXPCProtocol <Swift>

- (unsigned short)triggerEscrowUpdate:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)cachePrerecord:serializedPrerecord:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchPrerecord:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchRequestWaitingOnPasscode: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchRequestStatuses: /* Error: Ran out of types for this method. */;
- (unsigned short)resetAllRequests: /* Error: Ran out of types for this method. */;
- (unsigned short)storePrerecordsInEscrow: /* Error: Ran out of types for this method. */;

@end
