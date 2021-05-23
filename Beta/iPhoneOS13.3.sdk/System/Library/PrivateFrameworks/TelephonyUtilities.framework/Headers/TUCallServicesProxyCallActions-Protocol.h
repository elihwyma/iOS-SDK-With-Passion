/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/Swift-Protocol.h>

@protocol TUCallServicesProxyCallActions <Swift>

- (unsigned short)answerCallWithRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)holdCallWithUniqueProxyIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)unholdCallWithUniqueProxyIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)disconnectCallWithUniqueProxyIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)groupCallWithUniqueProxyIdentifier:withOtherCallWithUniqueProxyIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)ungroupCallWithUniqueProxyIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)swapCalls;
- (unsigned short)playDTMFToneForCallWithUniqueProxyIdentifier:key: /* Error: Ran out of types for this method. */;
- (unsigned short)disconnectCurrentCallAndActivateHeld;
- (unsigned short)disconnectAllCalls;
- (unsigned short)setTTYType:forCallWithUniqueProxyIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)pullRelayingCallsFromClient;
- (unsigned short)pushRelayingCallsToHostWithSourceIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)pushHostedCallsToDestination: /* Error: Ran out of types for this method. */;
- (unsigned short)pullHostedCallsFromPairedHostDevice;
- (unsigned short)sendHardPauseDigitsForCallWithUniqueProxyIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)updateCallWithProxy: /* Error: Ran out of types for this method. */;
- (unsigned short)enteredForegroundForCallWithUniqueProxyIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)willEnterBackgroundForAllCalls;
- (unsigned short)enteredBackgroundForAllCalls;
- (unsigned short)setRemoteVideoPresentationSizeForCallWithUniqueProxyIdentifier:size: /* Error: Ran out of types for this method. */;
- (unsigned short)setRemoteVideoPresentationStateForCallWithUniqueProxyIdentifier:presentationState: /* Error: Ran out of types for this method. */;
- (unsigned short)sendMMIOrUSSDCodeWithRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)setUplinkMuted:forCallWithUniqueProxyIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)setDownlinkMuted:forCallWithUniqueProxyIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldSuppressInCallStatusBar: /* Error: Ran out of types for this method. */;

@end
