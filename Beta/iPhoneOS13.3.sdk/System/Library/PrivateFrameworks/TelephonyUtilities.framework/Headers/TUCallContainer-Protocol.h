/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSArray, TUCall;

@protocol TUCallContainer <Swift>

@property (copy, nonatomic, readonly) NSArray *currentCalls;
@property (copy, nonatomic, readonly) NSArray *currentVideoCalls;
@property (copy, nonatomic, readonly) NSArray *currentAudioAndVideoCalls;
@property (copy, nonatomic, readonly) NSArray *incomingCalls;
@property (copy, nonatomic, readonly) NSArray *displayedCalls;
@property (copy, nonatomic, readonly) NSArray *displayedAudioAndVideoCalls;
@property (copy, nonatomic, readonly) NSArray *conferenceParticipantCalls;
@property (copy, nonatomic, readonly) NSArray *callsHostedElsewhere;
@property (copy, nonatomic, readonly) NSArray *callsWithAnEndpointElsewhere;
@property (copy, nonatomic, readonly) NSArray *callsHostedOrAnEndpointElsewhere;
@property (copy, nonatomic, readonly) NSArray *callsOnDefaultPairedDevice;
@property (nonatomic, readonly) TUCall *incomingCall;
@property (nonatomic, readonly) TUCall *incomingVideoCall;
@property (nonatomic, readonly) TUCall *activeVideoCall;
@property (nonatomic, readonly) TUCall *currentVideoCall;
@property (nonatomic, readonly) unsigned long long currentCallCount;
@property (nonatomic, readonly) unsigned long long currentVideoCallCount;
@property (nonatomic, readonly) unsigned long long currentAudioAndVideoCallCount;
@property (nonatomic, readonly) unsigned long long callCountOnDefaultPairedDevice;
@property (nonatomic, readonly) _Bool hasCurrentCalls;
@property (nonatomic, readonly) _Bool hasCurrentAudioCalls;
@property (nonatomic, readonly) _Bool hasCurrentVideoCalls;
@property (nonatomic, readonly) _Bool anyCallIsHostedOnCurrentDevice;
@property (nonatomic, readonly) _Bool anyCallIsEndpointOnCurrentDevice;
@property (copy, nonatomic, readonly) NSArray *currentCallGroups;
@property (copy, nonatomic, readonly) NSArray *callGroupsOnDefaultPairedDevice;

- (unsigned short)callsPassingTest: /* Error: Ran out of types for this method. */;
- (unsigned short)callPassingTest: /* Error: Ran out of types for this method. */;
- (unsigned short)callWithStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)audioOrVideoCallWithStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)countOfCallsPassingTest: /* Error: Ran out of types for this method. */;
- (unsigned short)anyCallPassesTest: /* Error: Ran out of types for this method. */;
- (unsigned short)allCallsPassTest: /* Error: Ran out of types for this method. */;
- (unsigned short)callsWithStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)audioAndVideoCallsWithStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)callsWithGroupUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)videoCallWithStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)callWithUniqueProxyIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)callWithCallUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)displayedCallFromCalls: /* Error: Ran out of types for this method. */;
- (unsigned short)allCallsAreOfService: /* Error: Ran out of types for this method. */;

@end
