/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@interface CalChronometry : NSObject

+ (void)initialize;
+ (id)currentLanguageCode;
+ (id)activeTimeZone;
+ (id)activeCalendar;
+ (void)_configureChronometry;
+ (void)_updateActiveCalendar;
+ (void)_currentLocaleDidChange:(id)arg1;
+ (void)_currentTimeZoneDidChange:(id)arg1;
+ (void)_updateForLocaleChange;
+ (void)_updateEveything;
+ (void)_updateActiveTimeZone;
+ (void)setActiveTimeZone:(id)arg1;
+ (id)currentLocationCode;

@end
