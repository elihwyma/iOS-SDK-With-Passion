/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@interface HKCSVParser : NSObject

+ (id)newlineCharacterSet;
+ (id)commaCharacterSet;
+ (id)quoteCharacterSet;
+ (id)terminatingCharacterSet;
+ (_Bool)newlineWithScanner:(id)arg1;
+ (id)fieldWithScanner:(id)arg1 error:(out id *)arg2;
+ (id)recordWithScanner:(id)arg1 error:(out id *)arg2;
+ (id)parseCSV:(id)arg1 error:(out id *)arg2;

@end
