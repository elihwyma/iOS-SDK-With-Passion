/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@interface EFPrivacy : NSObject

+ (id)partiallyRedactedStringForString:(id)arg1;
+ (id)fullyRedactedStringForString:(id)arg1;
+ (id)partiallyRedactedStringForString:(id)arg1 maximumUnredactedLength:(unsigned long long)arg2;
+ (id)dateByRemovingTimeComponentsFromDate:(id)arg1;
+ (long long)weeksSinceDate:(id)arg1;
+ (unsigned int)bucketMessageCount:(unsigned long long)arg1;

@end
