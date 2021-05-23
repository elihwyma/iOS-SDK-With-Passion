/*
 Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface CPNetworkObserver : NSObject

{
    NSLock *_lock;
    NSMutableDictionary *_reachabilityRequests;
    unsigned int _networkReachability;
    struct __SCNetworkReachability *_networkReach;
    struct __CFDictionary *_networkObservers;
    struct __SCPreferences *_wifiPreferences;
    struct __CFDictionary *_wifiObservers;
    _Bool _networkNotified;
    _Bool _networkReachable;
    _Bool _wifiNotified;
    _Bool _wifiEnabled;
}

+ (id)sharedNetworkObserver;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forHostname:(id)arg2;
- (void)_networkReachableFirstCallBack:(id)arg1;
- (void)_networkReachableCallBack:(unsigned int)arg1;
- (void)_networkObserversInitialize;
- (void)_wifiFirstCallBack:(id)arg1;
- (void)_wifiCallBack:(unsigned int)arg1;
- (void)_wifiObserversInitialize;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 forHostname:(id)arg3;
- (_Bool)isNetworkReachable;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
- (void)removeNetworkReachableObserver:(id)arg1;
- (_Bool)isWiFiEnabled;
- (void)addWiFiObserver:(id)arg1 selector:(SEL)arg2;
- (void)removeWiFiObserver:(id)arg1;

@end
