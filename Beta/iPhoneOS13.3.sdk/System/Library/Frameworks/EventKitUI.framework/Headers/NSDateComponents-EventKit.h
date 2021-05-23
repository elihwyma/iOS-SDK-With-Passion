/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (EventKit)

- (id)dateComponentsForDateOnly;
- (id)dateComponents:(unsigned long long)arg1 byAddingComponents:(id)arg2 calendar:(id)arg3;
- (id)dateComponents:(unsigned long long)arg1 byAddingDays:(int)arg2 calendar:(id)arg3;
- (id)dateComponentsForEndOfDay;
- (CDStruct_79f9e052)gregorianDate;
- (_Bool)hasTimeComponents;
- (void)clearTimeComponents;

@end
