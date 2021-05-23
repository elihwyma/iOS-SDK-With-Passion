/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

#import <Foundation/NSObject.h>

@interface VCActionDonationFetcher : NSObject

+ (void)sourceAppIdentifierArrayForApplicationBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)streams;
+ (id)donationFromEvent:(id)arg1;
+ (id)donationFromEvent:(id)arg1 filteringForTopLevel:(_Bool)arg2;
+ (_Bool)shouldKeepAction:(id)arg1 forAppWithBundleIdentifier:(id)arg2 filteringForTopLevel:(_Bool)arg3;
+ (_Bool)shouldKeepActionWithAppBundleIdentifierForDisplay:(id)arg1;
+ (id)keyPathForStream:(id)arg1;
+ (id)fetchEventsWithPredicate:(id)arg1 limit:(unsigned long long)arg2;
+ (id)fetchDonationsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 filteringForTopLevel:(_Bool)arg3;
+ (id)fetchDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 filteringForTopLevel:(_Bool)arg3 filteringForIsEligibleForPrediction:(_Bool)arg4;
+ (void)getPredicateForUserActivitiesWithApplicationBundleIdentifier:(id)arg1 filteringForIsEligibleForPrediction:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)getPredicateForIntentsWithApplicationBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)fetchDonationsWithLimit:(unsigned long long)arg1 filteringForIsEligibleForPrediction:(_Bool)arg2;
+ (id)donationWithUUID:(id)arg1;
+ (id)isEligibleForPredictionPredicate;
+ (_Bool)shouldFilterDonationsForAppWithApplicationBundleIdentifier:(id)arg1;
+ (id)filterDonations:(id)arg1 forApplicationBundleIdentifier:(id)arg2;
+ (id)actionPredictionBlacklist;
+ (id)appPredictionBlacklist;

@end
