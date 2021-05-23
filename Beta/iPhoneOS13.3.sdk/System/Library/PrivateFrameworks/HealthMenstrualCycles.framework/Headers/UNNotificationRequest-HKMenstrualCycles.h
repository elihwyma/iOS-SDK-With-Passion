/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
 */

#import <UserNotifications/UNNotificationRequest.h>

@interface UNNotificationRequest (HKMenstrualCycles)

+ (id)_hkmc_requestForCategoryIdentifier:(id)arg1 startDate:(id)arg2;
+ (id)_hkmc_notificationRequestWithCategory:(id)arg1 body:(id)arg2 title:(id)arg3 expirationDate:(id)arg4;
+ (id)_hkmc_notificationRequestWithContent:(id)arg1;
+ (id)hkmc_requestForCategoryIdentifier:(id)arg1;

@end
