/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSCalendar.h>

__attribute__((visibility("hidden")))
@interface _UIDatePickerChineseCalendar : NSCalendar

{
    NSCalendar *realCalendar;
}

@property NSCalendar *realCalendar;

+ (id)cyclicalFromRelated:(id)arg1;
+ (id)relatedFromCyclical:(id)arg1;

- (id)calendarIdentifier;
- (void)setTimeZone:(id)arg1;
- (id)dateFromComponents:(id)arg1;
- (struct _NSRange)maximumRangeOfUnit:(unsigned long long)arg1;
- (struct _NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithCalendar:(id)arg1;

@end
