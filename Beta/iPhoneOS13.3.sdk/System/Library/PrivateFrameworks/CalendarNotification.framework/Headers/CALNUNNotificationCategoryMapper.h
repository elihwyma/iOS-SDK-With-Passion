/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@interface CALNUNNotificationCategoryMapper : NSObject

+ (id)calnNotificationCategoriesFromUNNotificationCategories:(id)arg1;
+ (id)unNotificationCategoriesFromCALNNotificationCategories:(id)arg1;
+ (id)_unNotificationCategoryFromCALNNotificationCategory:(id)arg1;
+ (id)_calnNotificationCategoryFromUNNotificationCategory:(id)arg1;
+ (unsigned long long)_unNotificationCategoryOptionsFromCALNNotificationCategoryOptions:(unsigned long long)arg1;
+ (unsigned long long)_calnNotificationCategoryOptionsFromUNNotificationCategoryOptions:(unsigned long long)arg1;

@end
