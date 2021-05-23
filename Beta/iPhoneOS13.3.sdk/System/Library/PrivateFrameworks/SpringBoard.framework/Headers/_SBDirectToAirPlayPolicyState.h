/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface _SBDirectToAirPlayPolicyState : NSObject

{
    NSString *_routeName;
    NSSet *_foregroundIneligibleBundleIDs;
    NSSet *_foregroundEligibleBundleIDs;
    NSSet *_foregroundReadyBundleIDs;
    NSSet *_foregroundPlayingBundleIDs;
    NSSet *_allForegroundBundleIDs;
    NSSet *_allPlayingBundleIDs;
    _Bool _currentRouteIsWired;
    _Bool _playingAppIsActivelyPlaying;
    _Bool _suppressReadyStateForLock;
    _Bool _suppressStateChangesForObscured;
    unsigned long long _policyStateSerialNumber;
}

@property (copy, nonatomic, readonly) NSString *routeName;
@property (copy, nonatomic, readonly) NSSet *foregroundEligibleBundleIDs;
@property (copy, nonatomic, readonly) NSSet *foregroundIneligibleBundleIDs;
@property (copy, nonatomic, readonly) NSSet *foregroundReadyBundleIDs;
@property (copy, nonatomic, readonly) NSSet *foregroundPlayingBundleIDs;
@property (copy, nonatomic, readonly) NSSet *allForegroundBundleIDs;
@property (copy, nonatomic, readonly) NSSet *allPlayingBundleIDs;
@property (nonatomic, readonly) _Bool currentRouteIsWired;
@property (nonatomic, readonly) _Bool playingAppIsActivelyPlaying;
@property (nonatomic, readonly) _Bool suppressReadyStateForLock;
@property (nonatomic, readonly) _Bool suppressStateChangesForObscured;
@property (nonatomic, readonly) _Bool anyEligibleAppIsForeground;
@property (nonatomic, readonly) _Bool anyReadyAppIsForeground;
@property (nonatomic, readonly) _Bool anyPlayingAppIsForeground;
@property (nonatomic, readonly) _Bool anyIneligibleAppIsForeground;
@property (nonatomic, readonly) _Bool anyAppIsPlaying;
@property (nonatomic, readonly) unsigned long long policyStateSerialNumber;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
