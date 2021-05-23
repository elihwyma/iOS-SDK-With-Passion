/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <Foundation/NSDate.h>

@interface NSDate (ADCoreExtensions)

+ (id)dateFromServerTime:(int)arg1;
+ (int)maxServerTime;
+ (int)minServerTime;

- (id)doubleDateTimeAsString;
- (int)toServerTime;
- (id)localDateTimeAsString;
- (id)universalDateTimeAsString;

@end
