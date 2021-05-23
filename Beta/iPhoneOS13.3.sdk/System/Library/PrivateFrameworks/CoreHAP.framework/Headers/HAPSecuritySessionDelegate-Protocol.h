/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <CoreHAP/Swift-Protocol.h>

@protocol HAPSecuritySessionDelegate <Swift>

- (unsigned short)securitySession:didReceiveLocalPairingIdentityRequestWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)securitySession:didReceiveRequestForPeerPairingIdentityWithIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)securitySession:didReceiveSetupExchangeData: /* Error: Ran out of types for this method. */;

@end
