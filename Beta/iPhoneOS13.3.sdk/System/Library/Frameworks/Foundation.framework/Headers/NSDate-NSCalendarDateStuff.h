/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSDate.h>

@interface NSDate (NSCalendarDateStuff)

+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;
+ (id)dateWithNaturalLanguageString:(id)arg1;
+ (id)dateWithNaturalLanguageString:(id)arg1 locale:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)dateWithCalendarFormat:(id)arg1 timeZone:(id)arg2;
- (id)descriptionWithCalendarFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3;
- (long long)_web_compareDay:(id)arg1;
- (id)_web_RFC1123DateString;
- (_Bool)_web_isToday;

@end
