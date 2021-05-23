/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/Swift-Protocol.h>

@protocol CXCallSourceUpdates <Swift>

- (unsigned short)callSource:registeredWithConfiguration: /* Error: Ran out of types for this method. */;
- (unsigned short)callSource:reportedNewIncomingCallWithUUID:update:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)callSource:reportedCallWithUUID:updated: /* Error: Ran out of types for this method. */;
- (unsigned short)callSource:reportedCallWithUUID:endedAtDate:privateReason:failureContext: /* Error: Ran out of types for this method. */;
- (unsigned short)callSource:reportedOutgoingCallWithUUID:sentInvitationAtDate: /* Error: Ran out of types for this method. */;
- (unsigned short)callSource:reportedOutgoingCallWithUUID:startedConnectingAtDate: /* Error: Ran out of types for this method. */;
- (unsigned short)callSource:reportedOutgoingCallWithUUID:connectedAtDate: /* Error: Ran out of types for this method. */;
- (unsigned short)callSource:reportedAudioFinishedForCallWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)callSource:reportedCallWithUUID:changedFrequencyData:forDirection: /* Error: Ran out of types for this method. */;
- (unsigned short)callSource:reportedCallWithUUID:changedMeterLevel:forDirection: /* Error: Ran out of types for this method. */;
- (unsigned short)callSource:reportedCallWithUUID:crossDeviceIdentifier:changedBytesOfDataUsed: /* Error: Ran out of types for this method. */;
- (unsigned short)callSource:requestedTransaction:completion: /* Error: Ran out of types for this method. */;

@end
