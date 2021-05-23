/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXActionResolution, INUIAppIntentDeliverer, NSDictionary, PETScalarEventTracker, PMMPredictionNotification, _PASLock;

@protocol OS_dispatch_queue;

@interface ATXMagicalMomentsNowPlayingUpdateMonitor : NSObject

{
    PMMPredictionNotification *_mmUpdateListener;
    ATXActionResolution *_actionResolver;
    INUIAppIntentDeliverer *_currentAppIntentDeliverer;
    NSObject<OS_dispatch_queue> *_queue;
    _PASLock *nowPlayingLock;
    PETScalarEventTracker *_mmEngaged;
    PETScalarEventTracker *_mmError;
    PETScalarEventTracker *_mmTriggered;
    NSDictionary *plistParameters;
}

+ (_Bool)eventOrderingIsSaneForNowPlayingEvent:(id)arg1 donationEvent:(id)arg2;
+ (_Bool)receivedDonationForMostRecentlyPlayingBundleIdGivenNowPlayingEvent:(id)arg1 donationEvent:(id)arg2;
+ (_Bool)isRecentNowPlayingEvent:(id)arg1 maxAgeInHours:(double)arg2;
+ (_Bool)isRecentDonationEvent:(id)arg1 maxAgeInHours:(double)arg2;
+ (double)secondsSinceDate:(id)arg1;
+ (_Bool)bundleIdsMatchForDonationEvent:(id)arg1 nowPlayingEvent:(id)arg2;

- (id)init;
- (id)initWithActionResolver:(id)arg1;
- (void)setupPredictionUpdateListener;
- (void)setupNowPlayingPlayerChangedUpdateListener;
- (_Bool)createMagicalMomentsNowPlayingExperienceWithMMAppPrediction:(id)arg1 consumer:(unsigned long long)arg2;
- (_Bool)predictionIsBlacklisted:(id)arg1;
- (double)maxAgeInHoursToLookForNowPlayingHistory;
- (double)maxAgeInHoursToBeConsideredAVeryRecentNowPlayingEvent;
- (id)mostRecentNowPlayingDuetEvent;
- (id)getIntentEventForMostRecentINPlayMediaIntentDonation;
- (id)getINPlayMediaIntentFromMostRecentDonationEvent:(id)arg1;
- (id)getUpcomingMediaContainerForBundleId:(id)arg1;
- (id)getValidUpcomingMediaMatchingINPlayMediaIntent:(id)arg1 upcomingMediaContainer:(id)arg2;
- (_Bool)intentExistsInUpcomingMediaForIntent:(id)arg1 upcomingMediaItems:(id)arg2;
- (_Bool)foundMatchingUpcomingMediaItemForINPlayMediaIntent:(id)arg1 upcomingMediaContainer:(id)arg2;
- (_Bool)appSupportsUpcomingMediaForBundleId:(id)arg1;
- (_Bool)trackTitlesMatchForDonationEvent:(id)arg1 nowPlayingEvent:(id)arg2;
- (id)predictionForUpcomingMediaAppGivenRecentDonation:(id)arg1 mostRecentNowPlayingEvent:(id)arg2 predictedIntent:(id)arg3;
- (id)magicalMomentsPredictionGivenMostRecentDonation:(id)arg1 mostRecentNowPlayingEvent:(id)arg2 predictedIntent:(id)arg3;
- (_Bool)userHasNotListenedToContentForALongTimeGivenNowPlayingEvent:(id)arg1 donationEvent:(id)arg2;
- (_Bool)userVeryRecentlyListenedToContentGivenNowPlayingEvent:(id)arg1;
- (id)finalMMIntentPredictionGivenCandidatePrediction:(id)arg1;
- (double)minMagicalMomentsConfidenceThreshold;
- (double)minActionResolutionScoreThreshold;
- (_Bool)magicalMomentsPredictionIsValidForPredictionItem:(id)arg1;
- (_Bool)actionPredictionIsValidForPredictedIntent:(id)arg1 withScore:(float)arg2;
- (id)getPlayMediaActionPredictionsForBundleId:(id)arg1;
- (id)hydrateNowPlayingAppPrediction:(id)arg1;
- (id)prepareNowPlayingInfoFromNowPlayingInfoDictionary:(id)arg1 andIntent:(id)arg2;
- (void)primeApplicationWithHydratedPlayMediaIntent:(id)arg1;
- (void)resignFallbackNowPlayingInfoCenter;

@end
