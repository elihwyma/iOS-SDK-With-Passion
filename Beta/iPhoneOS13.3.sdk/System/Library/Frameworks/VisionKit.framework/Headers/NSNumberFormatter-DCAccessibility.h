/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSNumberFormatter.h>

@interface NSNumberFormatter (DCAccessibility)

+ (id)dcaxLocalizedUnsignedInteger:(unsigned long long)arg1;
+ (id)dcaxLocalizedNumber:(id)arg1;
+ (id)dcaxLocalizedPercentage:(double)arg1;
+ (id)dcaxLocalizedNumber:(id)arg1 maximumNumberOfDigitsAfterDecimalSeparator:(unsigned long long)arg2;
+ (id)dcaxLocalizedDouble:(double)arg1 maximumNumberOfDigitsAfterDecimalSeparator:(unsigned long long)arg2;
+ (id)dcaxLocalizedPercentage:(double)arg1 maximumNumberOfDigitsAfterDecimalSeparator:(unsigned long long)arg2;
+ (id)dcaxLocalizedNumber:(id)arg1 numberStyle:(unsigned long long)arg2 maximumNumberOfDigitsAfterDecimalSeparator:(unsigned long long)arg3;
+ (id)dcaxLocalizedDouble:(double)arg1;
+ (id)dcaxLocalizedNumber:(id)arg1 numberStyle:(unsigned long long)arg2;

@end
