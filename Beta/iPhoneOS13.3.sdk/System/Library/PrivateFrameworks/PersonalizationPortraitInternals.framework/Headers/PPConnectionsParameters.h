/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@protocol OS_dispatch_queue;

@interface PPConnectionsParameters : NSObject

{
    NSString *_abGroupIdentifier;
    NSDictionary *_assets;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (id)donationBlacklistApps;
- (id)assetValueForKey:(id)arg1;
- (long long)unsignedIntegerValueForKey:(id)arg1 default:(long long)arg2;
- (long long)integerValueForKey:(id)arg1 default:(long long)arg2;
- (double)doubleValueForKey:(id)arg1 default:(long long)arg2;
- (_Bool)boolValueForKey:(id)arg1 default:(_Bool)arg2;
- (long long)expirySeconds;
- (double)userActivityExpirySeconds;
- (double)namedEntitySourceLookBackSeconds;
- (double)namedEntitySourceExpirySeconds;
- (double)foundInAppsSourceLookBackSeconds;
- (double)foundInAppsSourceExpirySeconds;
- (double)calendarEventLocationLookaheadTimeSeconds;
- (double)calendarEventLocationExpirySeconds;
- (unsigned long long)quickTypePredictionLimit;
- (unsigned long long)userActivityBatchSize;
- (double)userActivityCandidateScore;
- (long long)appSwitcherPredictionExpiry;
- (long long)locationAppPredictionInstallHalflife;
- (long long)locationAppPredictionInstallMaxScore;
- (long long)locationAppPredictionLaunchTimeOfDayFactor;
- (long long)locationAppPredictionOverallLaunchFactor;
- (double)linguisticTriggerExpirySeconds;
- (double)pasteboardItemExpirySeconds;
- (double)locationAppLastUseTimeoutSeconds;
- (_Bool)shouldUseWhitelistWebsite;
- (_Bool)shouldUseWhitelistApps;
- (id)locationPredictionBlacklistApps;
- (id)donationWhitelistWebsites;
- (id)donationBlacklistWebsites;
- (id)donationWhitelistApps;

@end
