/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/PeriodicMaintenanceActivity.h>

@interface DailyMaintenanceActivity : PeriodicMaintenanceActivity

+ (id)sharedInstance;
+ (const char *)periodicActivityID;
+ (long long)periodicActivityInterval;

@end
