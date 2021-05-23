/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <CoreServices/NSUserActivity.h>

@interface NSUserActivity (_HKURLSupport)

+ (id)_hk_userActivityForElectrocardiogramType;
+ (id)_hk_userActivityForAtrialFibrillationEventType;

@end
