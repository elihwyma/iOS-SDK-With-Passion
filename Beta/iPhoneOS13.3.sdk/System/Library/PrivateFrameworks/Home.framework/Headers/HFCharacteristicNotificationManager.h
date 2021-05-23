/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HMHome, NSDate, NSMutableSet, NSString;

@interface HFCharacteristicNotificationManager : NSObject

{
    _Bool _hasRegisteredForMediaAccessoryControl;
    NSDate *_lastNotificationsEnableRequestDate;
    NSMutableSet *_notificationsEnabledReasons;
    HMHome *_notificationsEnabledHome;
}

@property (nonatomic, readonly) NSMutableSet *notificationsEnabledReasons;
@property (retain, nonatomic) HMHome *notificationsEnabledHome;
@property (retain, nonatomic) NSDate *lastNotificationsEnableRequestDate;
@property (nonatomic) _Bool hasRegisteredForMediaAccessoryControl;
@property (nonatomic, readonly) _Bool notificationsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (void)_updateNotificationsEnabled;
- (void)enableNotificationsForSelectedHomeWithReason:(id)arg1;
- (void)disableNotificationsForSelectedHomeWithReason:(id)arg1;

@end
