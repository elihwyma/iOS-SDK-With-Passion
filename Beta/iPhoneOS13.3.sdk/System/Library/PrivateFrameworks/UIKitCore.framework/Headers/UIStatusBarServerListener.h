/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@protocol OS_dispatch_mach, OS_dispatch_workloop;

__attribute__((visibility("hidden")))
@interface UIStatusBarServerListener : NSObject

{
    NSMutableArray *_clientPorts;
    NSMutableArray *_publishers;
    NSObject<OS_dispatch_workloop> *_workloop;
    NSObject<OS_dispatch_mach> *_channel;
    CDStruct_0942cde0 _statusBarData;
    CDStruct_0942cde0 _composedStatusBarData;
    CDStruct_f9a79af9 _overrides;
    struct __CFDictionary *_doubleHeightStatusStrings;
    struct __CFDictionary *_glowAnimationStates;
    NSMutableDictionary *_glowAnimationEndTimes;
    _Bool _composedStatusBarDataValid;
}

+ (id)sharedInstance;

- (id)init;
- (void)async:(CDUnknownBlockType)arg1;
- (id)_publisherForPort:(unsigned int)arg1;
- (void)_broadcastStatusBarDataWithActions:(int)arg1 animated:(_Bool)arg2;
- (void)_broadcastStyleOverrides;
- (CDStruct_0942cde0 *)_statusBarData;
- (int)_styleOverrides;
- (void)_setAnimationEndTimesForOverrides:(int)arg1;
- (void)_removeAnimationEndTimesForOverrides:(int)arg1;
- (double)_glowAnimationEndTimeForStyle:(long long)arg1;
- (void)_addClient:(unsigned int)arg1;
- (void)_removeClient:(struct __CFMachPort *)arg1;
- (void)_removePublisher:(struct __CFMachPort *)arg1;
- (CDStruct_f9a79af9 *)_statusBarOverrideData;
- (void)_postStatusBarData:(CDStruct_0942cde0 *)arg1 actions:(int)arg2 animated:(_Bool)arg3;
- (void)_addStyleOverrides:(int)arg1 forPublisher:(id)arg2;
- (void)_removeStyleOverrides:(int)arg1 forPublisher:(id)arg2;
- (_Bool)_glowAnimationStateForStyle:(long long)arg1;
- (void)_postGlowAnimationState:(_Bool)arg1 forStyle:(long long)arg2;
- (id)_doubleHeightStatusStringForStyle:(long long)arg1;
- (void)_postDoubleHeightStatus:(char *)arg1 forStyle:(long long)arg2;
- (void)_postStatusBarOverrideData:(CDStruct_f9a79af9 *)arg1;
- (_Bool)_permanentizeStatusBarOverrideData;
- (void)_addStatusBarItem:(int)arg1 forPublisher:(id)arg2;
- (void)_removeStatusBarItem:(int)arg1 forPublisher:(id)arg2;

@end
