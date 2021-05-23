/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSJSONSerialization.h>

@interface NSJSONSerialization (HealthKit)

+ (id)hk_JSONObjectSecureCodingClasses;
+ (id)hk_JSONObjectFromFHIRData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)hk_stringForDisplayFromFHIRJSONObject:(id)arg1;
+ (id)hk_stringForDisplayFromFHIRData:(id)arg1;

@end
