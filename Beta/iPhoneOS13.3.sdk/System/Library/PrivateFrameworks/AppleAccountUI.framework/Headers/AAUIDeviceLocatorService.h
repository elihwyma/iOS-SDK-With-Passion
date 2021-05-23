/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface AAUIDeviceLocatorService : NSObject

{
    unsigned long long _lastKnownState;
    _Bool _hasAttemptedToFetchState;
    _Bool _wantsToEnable;
    NSObject<OS_dispatch_queue> *_stateUpdateQueue;
}

+ (id)sharedInstance;

- (id)init;
- (_Bool)isEnabled;
- (void)_updateStateAndNotify:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enableInContext:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)disableInContext:(unsigned long long)arg1 withWipeToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isChangingState;
- (_Bool)isStateKnown;
- (void)refreshCurrentState:(CDUnknownBlockType)arg1;
- (void)enableInContext:(unsigned long long)arg1;
- (void)disableInContext:(unsigned long long)arg1 withWipeToken:(id)arg2;
- (void)setShouldEnable:(_Bool)arg1;
- (_Bool)shouldEnable;

@end
