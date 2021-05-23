/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, NRDevice, NSString;

@protocol HDGymKitSettingsDelegate;

@interface HDGymKitSettings : NSObject

{
    HDProfile *_profile;
    unsigned long long _nfcPermission;
    struct os_unfair_lock_s _lock;
    int _privacyNotificationToken;
    NRDevice *_currentDevice;
    id <HDGymKitSettingsDelegate> _delegate;
}

@property (nonatomic, readonly) unsigned long long nfcPermission;
@property (nonatomic, readonly) _Bool fitnessTrackingEnabled;
@property (weak, nonatomic) id <HDGymKitSettingsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)_monitorFieldAndPrivacySettings;
- (void)_startObservingWatchWorkouts;
- (void)_setNFCAlwaysOnPreferenceIfNecessary;
- (void)_stopObservingWatchWorkouts;
- (void)_setConnectedGymPreferencesDefaultNFCAlwaysOnEnabled:(_Bool)arg1;
- (void)_handleNFCPreferencesForNFCAlwaysOn:(_Bool)arg1;
- (void)_enableNFCAlwaysOnIfWatchWorkout;

@end
