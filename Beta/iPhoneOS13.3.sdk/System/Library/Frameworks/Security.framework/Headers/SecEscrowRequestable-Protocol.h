/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Security/Swift-Protocol.h>

@protocol SecEscrowRequestable <Swift>

+ (unsigned short)request: /* Error: Ran out of types for this method. */;

- (unsigned short)triggerEscrowUpdate:error: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchStatuses: /* Error: Ran out of types for this method. */;
- (unsigned short)pendingEscrowUpload: /* Error: Ran out of types for this method. */;

@end
