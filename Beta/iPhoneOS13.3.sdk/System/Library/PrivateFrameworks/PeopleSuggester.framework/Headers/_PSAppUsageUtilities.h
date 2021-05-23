/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@interface _PSAppUsageUtilities : NSObject

+ (id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)arg1 daysAgo:(long long)arg2 knowledgeStore:(id)arg3;
+ (id)sharingAppUsageDurations;
+ (id)mostUsedAppBundleIdsUsingPredicate:(id)arg1 knowledgeStore:(id)arg2;
+ (id)shareExtensionsUsedAndInstalledDaysAgo:(long long)arg1 appBundleIdsToShareExtensionBundleIdsMapping:(id)arg2 knowledgeStore:(id)arg3;
+ (id)mostUsedAppShareExtensionsWithAppBundleIdsToShareExtensionBundleIdsMapping:(id)arg1;
+ (void)cacheSharingAppUsageDurations:(id)arg1;

@end
