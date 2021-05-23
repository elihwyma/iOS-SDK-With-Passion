/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/PeriodicMaintenanceActivity.h>

@interface WeeklyMaintenanceActivity : PeriodicMaintenanceActivity

+ (id)sharedInstance;
+ (const char *)periodicActivityID;
+ (long long)periodicActivityInterval;

@end
