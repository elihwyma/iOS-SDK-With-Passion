/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
 */

#import <SoftwareUpdateServices/SUAutoInstallForecast.h>

@interface SUAutoInstallForecast (SUSUI)

- (id)_timeFormatter;
- (id)_componentsFromDate:(id)arg1;
- (id)formatCardinalityForDate:(id)arg1;
- (_Bool)_uses24HourTimeForLocale;
- (id)_susui_formattedRoundedStartTimeString;
- (id)_susui_formattedRoundedEndTimeString;
- (id)_susui_cardinalityForRoundedStartTime;
- (id)_susui_cardinalityForRoundedEndTime;

@end
