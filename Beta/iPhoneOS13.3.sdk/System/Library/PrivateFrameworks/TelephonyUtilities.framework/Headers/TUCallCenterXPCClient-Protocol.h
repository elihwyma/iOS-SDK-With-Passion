/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/Swift-Protocol.h>

@protocol TUCallCenterXPCClient <Swift>

- (unsigned short)resetCallProvisionalStates;
- (unsigned short)handleFrequencyChangedTo:inDirection:forCallsWithUniqueProxyIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)handleMeterLevelChangedTo:inDirection:forCallsWithUniqueProxyIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)handleCurrentCallsChanged:callDisconnected: /* Error: Ran out of types for this method. */;
- (unsigned short)handleNotificationName:forCallWithUniqueProxyIdentifier:userInfo: /* Error: Ran out of types for this method. */;

@end
