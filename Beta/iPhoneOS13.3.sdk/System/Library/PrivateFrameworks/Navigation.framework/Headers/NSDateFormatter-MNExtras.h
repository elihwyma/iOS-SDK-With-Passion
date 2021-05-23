/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSDateFormatter.h>

@interface NSDateFormatter (MNExtras)

+ (id)_navigation_localizedTimestampStringForDepartureArrivalDate:(id)arg1 inTimeZone:(id)arg2 canIncludeDate:(_Bool)arg3 suppressTimeZoneDisplay:(_Bool)arg4 useShortFormat:(_Bool)arg5;
+ (id)_navigation_localizedTimestampStringForDepartureArrivalDate:(id)arg1 inTimeZone:(id)arg2 canIncludeDate:(_Bool)arg3 showTimeZone:(_Bool)arg4 useShortFormat:(_Bool)arg5;
+ (id)_timestampFormatterForTimeZone:(id)arg1 displayTimeZone:(_Bool)arg2;
+ (id)_navigation_localizedTimestampStringForDepartureArrivalDate:(id)arg1 inTimeZone:(id)arg2 canIncludeDate:(_Bool)arg3;
+ (id)_navigation_localizedTimestampStringForDepartureArrivalDate:(id)arg1 inTimeZone:(id)arg2 canIncludeDate:(_Bool)arg3 relativeToTimeZone:(id)arg4;
+ (id)_navigation_debugDescriptionForDate:(id)arg1;

@end
