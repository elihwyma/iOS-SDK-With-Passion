/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@interface IMService : NSObject

+ (id)notificationCenter;
+ (id)callService;
+ (id)facetimeService;
+ (id)allServices;
+ (id)smsService;
+ (id)iMessageService;
+ (void)forgetStatusImageAppearance;
+ (id)imageNameForStatus:(unsigned long long)arg1;
+ (id)imageURLForStatus:(unsigned long long)arg1;
+ (id)allServicesNonBlocking;
+ (id)serviceWithName:(id)arg1;
+ (id)myIdleTime;
+ (unsigned long long)myStatus;
+ (_Bool)isEmailAddress:(id)arg1 inDomains:(id)arg2;
+ (unsigned long long)statusForIMPerson:(id)arg1;
+ (unsigned long long)statusForABPerson:(id)arg1;
+ (id)canonicalFormOfID:(id)arg1 withIDSensitivity:(int)arg2;
+ (id)aimService;
+ (id)subnetService;
+ (id)jabberService;

- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)localizedName;
- (id)localizedShortName;
- (unsigned long long)status;
- (_Bool)isEnabled;
- (void)login;
- (void)logout;
- (_Bool)initialSyncPerformed;
- (id)infoForScreenName:(id)arg1;
- (id)infoForAllScreenNames;
- (id)infoForPreferredScreenNames;
- (id)canonicalFormOfID:(id)arg1;
- (id)peopleWithScreenName:(id)arg1;
- (id)screenNamesForPerson:(id)arg1;
- (id)myScreenNames;
- (id)infoForPerson:(id)arg1;
- (id)infoForAllPeople;
- (id)infoForDisplayedPeople;

@end
