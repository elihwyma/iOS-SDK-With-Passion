/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@interface _HKHeartSettingsUtilities : NSObject

+ (_Bool)isHeartRateEnabled;
+ (_Bool)isWristDetectionEnabled;
+ (_Bool)isTachycardiaDetectionEnabled;
+ (long long)tachycardiaThresholdHeartRate;
+ (_Bool)isBradycardiaDetectionSupportedOnActiveWatch;
+ (_Bool)isBradycardiaDetectionSupportedOnAllWatches;
+ (_Bool)isBradycardiaDetectionEnabled;
+ (long long)bradycardiaThresholdHeartRate;
+ (_Bool)isBackgroundHeartRateEnabled;
+ (id)heartRateSettingsURL;
+ (void)deleteAtrialFibrillationDetectionLastAnalyzedSampleDate;

@end
