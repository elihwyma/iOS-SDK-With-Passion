/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

#import <Foundation/NSObject.h>

@interface VCActionDonationRecommender : NSObject

+ (void)initialize;
+ (void)fetchRecommendedDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 query:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)fetchRecommendedDonationsForAppPredictionsWithLimit:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)fetchRecommendedDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 query:(id)arg3 filteringForIsEligibleForPrediction:(_Bool)arg4 filteringActiveShortcuts:(_Bool)arg5 actionDonationCategory:(unsigned long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)fetchRecommendedDonationsByAppIdentifierWithLimit:(unsigned long long)arg1 query:(id)arg2 filteringForIsEligibleForPrediction:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)fetchSuggestedDonationsForAllAppsWithLimit:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)fetchSuggestedDonationsForApplicationBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)fetchRecentDonationsWithLimit:(unsigned long long)arg1 applicationBundleIdentifier:(id)arg2 filteringForTopLevel:(_Bool)arg3 filteringForIsEligibleForPrediction:(_Bool)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
+ (void)fetchPredictedDonationsWithLimit:(unsigned long long)arg1 applicationBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)donationsByRemovingDuplicatesFromDonations:(id)arg1 query:(id)arg2 excludingAppIdentifiers:(id)arg3 includingSingleDonationPerApp:(_Bool)arg4;
+ (_Bool)actionDonation:(id)arg1 matchesQuery:(id)arg2;
+ (id)filteredActionDonations:(id)arg1 byApplicationAppIdentifier:(id)arg2;
+ (id)filterDonationsForTitleLength:(id)arg1;
+ (id)getDonationsFromActionResponse:(id)arg1;
+ (id)disabledSpotlightApps;

@end
