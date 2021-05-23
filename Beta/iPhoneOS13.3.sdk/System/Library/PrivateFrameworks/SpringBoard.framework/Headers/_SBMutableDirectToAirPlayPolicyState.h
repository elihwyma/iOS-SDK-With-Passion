/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/_SBDirectToAirPlayPolicyState.h>

@class NSSet, NSString;

@interface _SBMutableDirectToAirPlayPolicyState : _SBDirectToAirPlayPolicyState

@property (copy, nonatomic) NSString *routeName;
@property (copy, nonatomic) NSSet *foregroundEligibleBundleIDs;
@property (copy, nonatomic) NSSet *foregroundIneligibleBundleIDs;
@property (copy, nonatomic) NSSet *foregroundReadyBundleIDs;
@property (copy, nonatomic) NSSet *foregroundPlayingBundleIDs;
@property (copy, nonatomic) NSSet *allForegroundBundleIDs;
@property (copy, nonatomic) NSSet *allPlayingBundleIDs;
@property (nonatomic) _Bool currentRouteIsWired;
@property (nonatomic) _Bool playingAppIsActivelyPlaying;
@property (nonatomic) _Bool suppressReadyStateForLock;
@property (nonatomic) _Bool suppressStateChangesForObscured;
@property (nonatomic) unsigned long long policyStateSerialNumber;

@end
