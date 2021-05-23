/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@interface EKFeatureSet : NSObject

+ (_Bool)isTravelAdvisorySupported;
+ (_Bool)calendarListViewCellsFeaturesExtraContent;
+ (_Bool)eventDetailsDayPreviewEnabled;
+ (unsigned long long)_currentSplashScreenVersion;
+ (_Bool)isConservativeEntryEnabled;
+ (_Bool)areVehicleTriggersEnabled;
+ (_Bool)calendarListViewCellsFeaturesAttendeeInformation;
+ (_Bool)areQuickActionsSupported;
+ (_Bool)areApplicationBadgesSupported;
+ (_Bool)isSuggestionsEnabled;
+ (_Bool)isContinuitySupported;
+ (_Bool)areContextualRemindersSupported;
+ (_Bool)mustDisplaySplashScreenToUser;
+ (void)userAcknowledgedSplashScreen;
+ (_Bool)automaticGeocodingEnabled;
+ (_Bool)eventsFoundInAppsEnabled;

@end
