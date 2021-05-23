/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@interface HKAudioExposureUtilities : NSObject

+ (id)localizedDisplayNameForClassification:(unsigned long long)arg1 isEmbedded:(_Bool)arg2;
+ (id)_classificationValueWithLEQ:(double)arg1 duration:(double)arg2 days:(long long)arg3;
+ (double)_rounded:(double)arg1;
+ (id)localizedDisplayNameForClassification:(unsigned long long)arg1;
+ (unsigned long long)classifyLEQ:(id)arg1 forDuration:(double)arg2 overDays:(long long)arg3;
+ (id)computeLEQFromAudioExposureValues:(id)arg1;
+ (double)maximumDurationInSecondsForLEQ:(double)arg1 days:(long long)arg2;

@end
