/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/PeriodicMaintenanceActivity.h>

@interface SemiDailyMaintenanceActivity : PeriodicMaintenanceActivity

+ (id)sharedInstance;
+ (const char *)periodicActivityID;
+ (long long)periodicActivityInterval;

@end
