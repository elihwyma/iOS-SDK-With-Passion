/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNUIDate : NSObject

+ (void)initialize;
+ (void)localeDidChange:(id)arg1;
+ (id)currentCalendarGMT;
+ (id)gregorianCalendarGMT;
+ (id)GMTComponentsFromDate:(id)arg1 sourceCalendar:(id)arg2;
+ (id)componentsFromDate:(id)arg1 sourceCalendar:(id)arg2 destinationCalendar:(id)arg3;
+ (id)yearlessGregorianComponentsFromGMTDate:(id)arg1;
+ (id)yearlessComponentsFromDate:(id)arg1 calendar:(id)arg2;
+ (id)dateFromComponents:(id)arg1 destinationCalendar:(id)arg2;
+ (id)dateByNormalizingToGMT:(id)arg1;
+ (_Bool)isYearlessComponents:(id)arg1;

@end
