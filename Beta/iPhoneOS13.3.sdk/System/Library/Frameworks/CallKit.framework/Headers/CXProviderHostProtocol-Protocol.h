/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/Swift-Protocol.h>

@protocol CXProviderHostProtocol <Swift>

- (unsigned short)registerWithConfiguration: /* Error: Ran out of types for this method. */;
- (unsigned short)reportNewIncomingCallWithUUID:update:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)reportCallWithUUID:updated: /* Error: Ran out of types for this method. */;
- (unsigned short)reportOutgoingCallWithUUID:sentInvitationAtDate: /* Error: Ran out of types for this method. */;
- (unsigned short)reportOutgoingCallWithUUID:startedConnectingAtDate: /* Error: Ran out of types for this method. */;
- (unsigned short)reportOutgoingCallWithUUID:connectedAtDate: /* Error: Ran out of types for this method. */;
- (unsigned short)reportCallWithUUID:endedAtDate:privateReason:failureContext: /* Error: Ran out of types for this method. */;
- (unsigned short)reportAudioFinishedForCallWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)reportCallWithUUID:changedFrequencyData:forDirection: /* Error: Ran out of types for this method. */;
- (unsigned short)reportCallWithUUID:changedMeterLevel:forDirection: /* Error: Ran out of types for this method. */;
- (unsigned short)reportCallWithUUID:crossDeviceIdentifier:changedBytesOfDataUsed: /* Error: Ran out of types for this method. */;
- (unsigned short)requestTransaction:reply: /* Error: Ran out of types for this method. */;

@end
