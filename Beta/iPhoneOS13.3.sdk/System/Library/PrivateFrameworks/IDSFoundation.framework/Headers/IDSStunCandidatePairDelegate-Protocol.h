/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/Swift-Protocol.h>

@protocol IDSStunCandidatePairDelegate <Swift>

- (unsigned short)candidatePair:didReceiveSessionInfo:success: /* Error: Ran out of types for this method. */;
- (unsigned short)candidatePair:didReceiveStunErrorResponse:errorCode: /* Error: Ran out of types for this method. */;
- (unsigned short)candidatePair:didAddQREvent: /* Error: Ran out of types for this method. */;
- (unsigned short)disconnectCandidatePair: /* Error: Ran out of types for this method. */;
- (unsigned short)sendAllocbindRequest:isRealloc:inResponseToNoSessionState: /* Error: Ran out of types for this method. */;

@end
