/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/Swift-Protocol.h>

@protocol TUEmergencyCoreTelephonyClient <Swift>

- (unsigned short)inEmergencyMode;
- (unsigned short)isEmergencyNumberForDigits:subscriptionUUID:error: /* Error: Ran out of types for this method. */;
- (unsigned short)isWhitelistedEmergencyNumberForDigits:subscriptionUUID:error: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldShowEmergencyCallbackModeAlertForSubscriptionUUID:error: /* Error: Ran out of types for this method. */;

@end
