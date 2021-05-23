/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMAccessory.h>

@class HFUserNotificationServiceSettings, HMHome, NSPredicate, NSString, NSUUID;

@interface HFDemoModeAccessory : HMAccessory

{
    _Bool _notificationsEnabled;
    _Bool _isInternallyCertified;
    NSUUID *_internalUniqueIdentifier;
    NSPredicate *_notificationCondition;
    HMHome *_home;
}

@property (retain, nonatomic) NSUUID *internalUniqueIdentifier;
@property (copy, nonatomic, readonly) NSString *model;
@property (copy, nonatomic, readonly) NSString *manufacturer;
@property (copy, nonatomic, readonly) NSString *firmwareVersion;
@property (nonatomic, getter=areNotificationsEnabled) _Bool notificationsEnabled;
@property (retain, nonatomic) NSPredicate *notificationCondition;
@property (retain, nonatomic) HMHome *home;
@property (nonatomic) _Bool isInternallyCertified;
@property (copy, nonatomic, readonly) HFUserNotificationServiceSettings *hf_userNotificationSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (id)accessoryWithContentsOfDictionary:(id)arg1 forHome:(id)arg2;
+ (_Bool)_hasValidKeys:(id)arg1;

- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)category;
- (id)serialNumber;
- (id)services;
- (id)room;
- (_Bool)isReachable;
- (long long)certificationStatus;
- (id)symptomsHandler;
- (_Bool)hf_shouldShowSoftwareUpdateInfo;
- (id)hf_serviceNameComponents;
- (id)hf_updateIsFavorite:(_Bool)arg1;
- (_Bool)hf_isFavorite;
- (_Bool)hf_hasSetFavorite;
- (_Bool)hf_shouldShowInFavorites;
- (id)initWithContentsOfDictionary:(id)arg1 forHome:(id)arg2;
- (_Bool)_isAppleInternalAccessory;
- (_Bool)_shouldShowAppleInternalManufacturerInfo;
- (void)_updateManufacturerInfoWithString:(id)arg1 forKey:(id)arg2;
- (id)hf_updateUserNotificationSettings:(id)arg1;

@end
