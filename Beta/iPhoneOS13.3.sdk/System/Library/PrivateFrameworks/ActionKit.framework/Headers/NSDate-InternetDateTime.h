/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSDate.h>

@interface NSDate (InternetDateTime)

+ (id)dateFromRFC822String:(id)arg1;
+ (id)dateFromRFC3339String:(id)arg1;
+ (id)internetDateTimeFormatter;
+ (id)dateFromInternetDateTimeString:(id)arg1 formatHint:(int)arg2;
+ (id)dateWithEDAMTimestamp:(long long)arg1;

- (long long)edamTimestamp;

@end
