/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMServiceGroup.h>

#import <Home/Swift-Protocol.h>

@class HFServiceDescriptor, HFServiceNameComponents, HFUserNotificationServiceSettings, NSDate, NSString, NSUUID;

@interface HMServiceGroup (HFDebugging) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hf_isSupported;
@property (nonatomic, readonly) HFServiceDescriptor *hf_serviceDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hf_supportsHomeStatus;
@property (nonatomic, readonly) _Bool hf_isVisibleInHomeStatus;
@property (nonatomic, readonly) _Bool hf_hasSetVisibleInHomeStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hf_isFavorite;
@property (nonatomic, readonly) _Bool hf_hasSetFavorite;
@property (nonatomic, readonly) _Bool hf_shouldShowInFavorites;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (copy, nonatomic, readonly) HFUserNotificationServiceSettings *hf_userNotificationSettings;
@property (nonatomic, readonly) HFServiceNameComponents *hf_serviceNameComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (copy, nonatomic, readonly) NSDate *hf_dateAdded;
@property (copy, nonatomic, readonly) NSString *hf_displayName;

- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (_Bool)hf_isValidObject;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateIsFavorite:(_Bool)arg1;
- (id)hf_updateIsVisibleInHomeStatus:(_Bool)arg1;
- (id)hf_updateUserNotificationSettings:(id)arg1;
- (id)_hf_allBulletinBoardNotifications;

@end
