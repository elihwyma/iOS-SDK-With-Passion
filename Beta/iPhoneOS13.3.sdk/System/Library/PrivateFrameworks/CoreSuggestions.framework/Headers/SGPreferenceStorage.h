/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@interface SGPreferenceStorage : NSObject

+ (id)defaults;
+ (_Bool)showContactsFoundInMail;
+ (void)setShowContactsFoundInMail:(_Bool)arg1;
+ (_Bool)showEventsFoundInMail;
+ (void)setShowEventsFoundInMail:(_Bool)arg1;
+ (void)resetAllPreferences;
+ (long long)suggestionsLogLevel;
+ (_Bool)showPastEvents;
+ (void)setShowPastEvents:(_Bool)arg1;
+ (_Bool)alwaysShowCancelledEvents;
+ (void)setAlwaysShowCancelledEvents:(_Bool)arg1;
+ (void)updateBoolSettingKey:(id)arg1 withValue:(_Bool)arg2;
+ (void)updateIntSettingKey:(id)arg1 withValue:(int)arg2;
+ (_Bool)onlyShowSignificantPseudoContacts;
+ (void)setOnlyShowSignificantPseudoContacts:(_Bool)arg1;
+ (void)setOnlyShowSignificantPseudoContactsForTests:(_Bool)arg1;
+ (_Bool)onlyShowSignificantNLEvents;
+ (void)setOnlyShowSignificantNLEvents:(_Bool)arg1;
+ (long long)hashedSessionsLogging;
+ (void)setHashedSessionsLogging:(int)arg1;
+ (_Bool)showSuggestionsCalendar;
+ (int)registerBlockOnSuggestionsSettingsChange:(CDUnknownBlockType)arg1;
+ (void)removeDeprecatedDefaults;
+ (long long)messagesToProcessImmediately;
+ (void)setMessagesToProcessImmediately:(long long)arg1;
+ (_Bool)syncHistoryToCloud;
+ (void)setSyncHistoryToCloud:(_Bool)arg1;
+ (_Bool)allowGeocode;
+ (void)setAllowGeocode:(_Bool)arg1;
+ (_Bool)allowAgeBasedPruning;
+ (void)setAllowAgeBasedPruning:(_Bool)arg1;
+ (_Bool)useMLModelForContacts;
+ (void)setUseMLModelForContacts:(_Bool)arg1;
+ (_Bool)useMLModelForSelfId;
+ (void)setUseMLModelForSelfId:(_Bool)arg1;
+ (_Bool)useMLModelForContactSharing;
+ (void)setUseMLModelForContactSharing:(_Bool)arg1;
+ (float)contactSharingNegativeSamplingRate;
+ (void)setContactSharingNegativeSamplingRate:(float)arg1;
+ (_Bool)detectContacts;
+ (_Bool)detectNLEvents;
+ (_Bool)detectStructuredEvents;
+ (_Bool)detectReminders;
+ (void)updateDetection:(_Bool)arg1 forKey:(id)arg2;
+ (void)setDetectStructuredEvents:(_Bool)arg1;
+ (void)setDetectNLEvents:(_Bool)arg1;
+ (void)setDetectContacts:(_Bool)arg1;
+ (void)setDetectReminders:(_Bool)arg1;
+ (void)setFirstPartyCalendarAppIsInstalled:(_Bool)arg1;
+ (void)setFirstPartyMailAppIsInstalled:(_Bool)arg1;
+ (_Bool)shouldHarvestEvents;
+ (id)cloudKitPersistedState;
+ (void)setCloudKitPersistedState:(id)arg1;
+ (_Bool)useManateeSaltForHistory;
+ (void)setUseManateeSaltForHistory:(_Bool)arg1;
+ (_Bool)showOperatingSystemVersionInSnippets;
+ (void)setShowOperatingSystemVersionInSnippets:(_Bool)arg1;
+ (_Bool)hidePastEventsForTests;
+ (void)setHidePastEventsForTests:(_Bool)arg1;
+ (void)setShowCancelledEventsForTests:(_Bool)arg1;
+ (void)setNLEventsDetectionEnabledForTests:(_Bool)arg1;
+ (void)setStructuredEventsDetectionEnabledForTests:(_Bool)arg1;
+ (void)setRemindersDetectionEnabledForTests:(_Bool)arg1;
+ (void)setContactsDetectionEnabledForTests:(_Bool)arg1;
+ (void)setAllowGeocodeForTests:(_Bool)arg1;
+ (void)setSyncHistoryToCloudForTests:(_Bool)arg1;
+ (void)setMessagesToProcessImmediatelyForTests:(long long)arg1;
+ (void)setUseMLModelForSelfIdForTests:(_Bool)arg1;
+ (id)defaultsForTests;
+ (void)suspendNotificationQueue;
+ (void)resumeNotificationQueue;

@end
