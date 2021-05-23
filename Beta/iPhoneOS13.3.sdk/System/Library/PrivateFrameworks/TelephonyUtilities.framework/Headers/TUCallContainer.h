/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSArray, NSString, TUCall;

@interface TUCallContainer : NSObject <Swift>

{
    NSArray *_calls;
}

@property (copy, nonatomic) NSArray *calls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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
@property (copy, nonatomic, readonly) NSArray *_allCalls;
@property (nonatomic, readonly) TUCall *displayedCall;
@property (nonatomic, readonly) TUCall *conferenceCall;
@property (nonatomic, readonly) TUCall *frontmostCall;
@property (retain, nonatomic, readonly) TUCall *frontmostAudioOrVideoCall;
@property (nonatomic, readonly) _Bool existingCallsHaveMultipleProviders;

- (id)init;
- (id)initWithCalls:(id)arg1;
- (void)enumerateCallsWithOptions:(unsigned long long)arg1 invokingBlock:(CDUnknownBlockType)arg2 forCallsPassingTest:(CDUnknownBlockType)arg3;
- (void)enumerateCallsInvokingBlock:(CDUnknownBlockType)arg1 forCallsPassingTest:(CDUnknownBlockType)arg2;
- (id)callsPassingTest:(CDUnknownBlockType)arg1;
- (id)callPassingTest:(CDUnknownBlockType)arg1 withOptions:(unsigned long long)arg2;
- (id)callPassingTest:(CDUnknownBlockType)arg1;
- (id)callPassingTest:(CDUnknownBlockType)arg1 sortedUsingComparator:(CDUnknownBlockType)arg2;
- (id)callWithStatus:(int)arg1;
- (id)audioOrVideoCallWithStatus:(int)arg1;
- (unsigned long long)countOfCallsPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)anyCallPassesTest:(CDUnknownBlockType)arg1;
- (_Bool)allCallsPassTest:(CDUnknownBlockType)arg1;
- (id)_callGroupsFromCalls:(id)arg1;
- (id)callsWithStatus:(int)arg1;
- (id)audioAndVideoCallsWithStatus:(int)arg1;
- (id)callsWithGroupUUID:(id)arg1;
- (id)videoCallWithStatus:(int)arg1;
- (id)callWithUniqueProxyIdentifier:(id)arg1;
- (id)callWithCallUUID:(id)arg1;
- (id)displayedCallFromCalls:(id)arg1;
- (_Bool)allCallsAreOfService:(int)arg1;

@end
