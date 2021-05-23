/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, NWEntityMapper;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AppStateHandler : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_appPidState;
    NSMutableDictionary *_appBundlesMonitored;
    NSMutableDictionary *_appsWithStates;
    NSMutableSet *_foregroundApps;
    NWEntityMapper *_entityMapper;
    _Bool _hasAnyForegroundApp;
    _Bool _handlesRnf;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)getAppsWithStates;

- (void)configure:(id)arg1;
- (unsigned int)currentStateForProcessWithPid:(int)arg1;
- (id)_getAppsWithStates;
- (_Bool)_trackerSetHasForeground:(id)arg1;
- (void)handleApplicationStateChangeForDisplayName:(id)arg1 UUID:(id)arg2 pid:(int)arg3 state:(unsigned int)arg4;
- (void)purgeInvalidPidState;
- (void)_removeStateTracker:(id)arg1 hadForeground:(_Bool *)arg2 hasForeground:(_Bool *)arg3;
- (id)foregroundAppKeys;
- (_Bool)hasAnyForegroundApp;
- (id)initWithMapper:(id)arg1;

@end
