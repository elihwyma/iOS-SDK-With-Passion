/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@interface CalendarColors : NSObject

+ (void)initialize;
+ (id)grayColor;
+ (id)colorNamesOrderedForAssignment;
+ (int)countOfColor:(id)arg1 inArray:(id)arg2;
+ (void)_bootstrapColorNameMapping;
+ (void)_rebuildColors;
+ (id)symbolicColorForNewCalendarWithExistingSymbolicNames:(id)arg1;
+ (id)defaultCalendarColorNames;
+ (id)nameOfColor:(id)arg1;
+ (id)colorForName:(id)arg1;
+ (id)birthdayCalendarColor;
+ (id)facebookCalendarColor;
+ (id)textColorForName:(id)arg1;
+ (id)localizedColorNameForColorName:(id)arg1;

@end
