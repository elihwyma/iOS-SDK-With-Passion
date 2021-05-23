/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTObserverStore;

@interface MTSensitiveUIMonitor : NSObject

{
    _Bool _hideSensitiveUI;
    _Bool _needPrefsUpdate;
    int _notifyToken;
    struct os_unfair_lock_s _lock;
    MTObserverStore *_observers;
}

@property (retain, nonatomic) MTObserverStore *observers;
@property (nonatomic) int notifyToken;
@property (nonatomic) _Bool hideSensitiveUI;
@property (nonatomic) _Bool needPrefsUpdate;
@property (nonatomic) struct os_unfair_lock_s lock;

+ (id)sharedMonitor;

- (id)init;
- (void)dealloc;
- (void)registerForNotifications;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (void)unregisterForNotifications;
- (_Bool)_isVendorRelease;
- (_Bool)_hideSensitiveUI;
- (void)_handleNotification;
- (void)addSensitiveUIObserver:(id)arg1;
- (void)removeSensitiveUIObserver:(id)arg1;
- (_Bool)shouldHideForSensitivity:(long long)arg1;

@end
