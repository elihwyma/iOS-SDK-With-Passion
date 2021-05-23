/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@interface CKDateUtilities : NSObject

+ (id)thePastDateFormatter;
+ (id)thisWeekRelativeDateFormatter;
+ (id)relativeDateFormatterFromDate:(id)arg1 toDate:(id)arg2;
+ (id)relativeDateOnlyFormatterFromDate:(id)arg1 toDate:(id)arg2;
+ (id)thisYearDateFormatter;
+ (id)thePastDateFormatterNoTime;
+ (id)thisYearDateFormatterNoTime;
+ (id)thisWeekRelativeDateFormatterNoTime;

@end
