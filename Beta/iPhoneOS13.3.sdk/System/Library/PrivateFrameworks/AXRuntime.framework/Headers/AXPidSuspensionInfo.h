/*
 Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface AXPidSuspensionInfo : NSObject

{
    NSMutableDictionary *_suspendsPids;
    NSMutableDictionary *_probationPids;
    NSMutableDictionary *_tentativeSuspendedPids;
    NSMutableDictionary *_associatedRemotePidCache;
    NSMutableDictionary *_associatedRemotePids;
}

+ (id)shared;

- (id)init;
- (id)timeoutProbationPidsForDisplay:(int)arg1;
- (id)suspendedPidsForDisplay:(int)arg1;
- (id)associatedRemotePidCacheForDisplay:(int)arg1;
- (id)tentativeSuspendedPidsForDisplay:(int)arg1;
- (id)associatedRemotePidsForDisplay:(int)arg1;

@end
