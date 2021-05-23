/*
 Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import <Foundation/NSObject.h>

@interface DDURLifier : NSObject

+ (id)urlMatchesForString:(id)arg1;
+ (id)urlMatchesForString:(id)arg1 includingTel:(_Bool)arg2;
+ (id)urlMatchesForString:(id)arg1 phoneNumberTypes:(unsigned long long)arg2;
+ (id)urlMatchesForString:(id)arg1 usingScanner:(struct __DDScanner *)arg2 withPhoneNumberTypes:(unsigned long long)arg3 referenceDate:(id)arg4 timeZone:(id)arg5 storingResultsIn:(id)arg6;
+ (_Bool)urlIfyTextNode:(id)arg1 inNode:(id)arg2 forMatches:(id)arg3;
+ (_Bool)urlIfyNode:(id)arg1 phoneNumberTypes:(unsigned long long)arg2;
+ (_Bool)urlIfyNode:(id)arg1;
+ (id)urlIfyNode:(id)arg1 usingScanner:(struct __DDScanner *)arg2 phoneNumberTypes:(unsigned long long)arg3;
+ (id)urlIfyNode:(id)arg1 usingScanner:(struct __DDScanner *)arg2 phoneNumberTypes:(unsigned long long)arg3 withReferenceDate:(id)arg4 andTimeZone:(id)arg5;

@end
