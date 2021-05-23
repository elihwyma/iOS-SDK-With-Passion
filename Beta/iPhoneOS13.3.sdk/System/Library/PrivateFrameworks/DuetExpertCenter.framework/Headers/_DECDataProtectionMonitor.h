/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@protocol _DECDataProtectionMonitorDelegate;

@interface _DECDataProtectionMonitor : NSObject

{
    id <_DECDataProtectionMonitorDelegate> _delegate;
    long long _encryptedDataAvailability;
    _Bool _unlockedSinceBoot;
    long long _dataProtectionStatus;
    struct _opaque_pthread_rwlock_t _rwlock;
}

@property (weak, nonatomic) id <_DECDataProtectionMonitorDelegate> delegate;
@property (nonatomic, readonly) long long encryptedDataAvailability;
@property (nonatomic, readonly) _Bool unlockedSinceBoot;
@property (nonatomic, readonly) long long dataProtectionStatus;

+ (id)_DECDataProtectionMonitorLockStateToString:(long long)arg1;
+ (id)_DECDataProtectionMonitorEncryptedDataAvailabilityToString:(long long)arg1;
+ (id)_DECDataProtectionMonitorDataProtectionStatus:(long long)arg1;

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
