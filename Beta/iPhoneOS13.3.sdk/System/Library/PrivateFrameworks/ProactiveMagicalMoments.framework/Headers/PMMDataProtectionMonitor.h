/*
 Image: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
 */

#import <Foundation/NSObject.h>

@protocol PMMDataProtectionMonitorDelegate;

@interface PMMDataProtectionMonitor : NSObject

{
    id <PMMDataProtectionMonitorDelegate> _delegate;
    long long _encryptedDataAvailability;
    _Bool _unlockedSinceBoot;
    long long _dataProtectionStatus;
    struct _opaque_pthread_rwlock_t {
        long long __sig;
        char __opaque[192];
    } _rwlock;
}

@property (weak, nonatomic) id <PMMDataProtectionMonitorDelegate> delegate;
@property (nonatomic, readonly) long long encryptedDataAvailability;
@property (nonatomic, readonly) _Bool unlockedSinceBoot;
@property (nonatomic, readonly) long long dataProtectionStatus;

+ (id)PMMDataProtectionMonitorDataProtectionStatus:(long long)arg1;
+ (id)PMMDataProtectionMonitorEncryptedDataAvailabilityToString:(long long)arg1;
+ (id)PMMDataProtectionMonitorLockStateToString:(long long)arg1;

- (id)init;
- (void)dealloc;
- (void)_registerForKeyBagNotifications;
- (void)setDataProtectionStatus:(_Bool)arg1;
- (void)setEncryptedDataAvailability:(long long)arg1;
- (void)setUnlockedSinceBoot:(_Bool)arg1;
- (void)handkeKeybagLockStatusChange:(long long)arg1;
- (void)handleUnlockedSinceBoot;
- (_Bool)dataProtectionEnabled;

@end
