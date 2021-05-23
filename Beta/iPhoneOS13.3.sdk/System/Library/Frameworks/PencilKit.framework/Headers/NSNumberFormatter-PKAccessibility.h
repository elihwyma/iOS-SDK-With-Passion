/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSNumberFormatter.h>

@interface NSNumberFormatter (PKAccessibility)

+ (id)pkaxLocalizedNumber:(id)arg1 maximumNumberOfDigitsAfterDecimalSeparator:(unsigned long long)arg2;
+ (id)pkaxLocalizedDouble:(double)arg1 maximumNumberOfDigitsAfterDecimalSeparator:(unsigned long long)arg2;
+ (id)pkaxLocalizedPercentage:(double)arg1 maximumNumberOfDigitsAfterDecimalSeparator:(unsigned long long)arg2;
+ (id)pkaxLocalizedNumber:(id)arg1 numberStyle:(unsigned long long)arg2 maximumNumberOfDigitsAfterDecimalSeparator:(unsigned long long)arg3;
+ (id)pkaxLocalizedUnsignedInteger:(unsigned long long)arg1;
+ (id)pkaxLocalizedDouble:(double)arg1;
+ (id)pkaxLocalizedPercentage:(double)arg1;
+ (id)pkaxLocalizedNumber:(id)arg1;
+ (id)pkaxLocalizedNumber:(id)arg1 numberStyle:(unsigned long long)arg2;

@end
