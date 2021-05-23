/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class PETDistributionEventTracker, PETGoalConversionEventTracker, PETScalarEventTracker;

@protocol OS_dispatch_queue;

@interface PPConnectionsMetricsTracker : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    PETScalarEventTracker *_opportunityTracker;
    PETGoalConversionEventTracker *_conversionTracker;
    PETScalarEventTracker *_dismissalTracker;
    PETDistributionEventTracker *_timingTracker;
    PETScalarEventTracker *_donationTracker;
    PETScalarEventTracker *_pasteboardTracker;
}

@property (retain, nonatomic) PETScalarEventTracker *opportunityTracker;
@property (retain, nonatomic) PETGoalConversionEventTracker *conversionTracker;
@property (retain, nonatomic) PETScalarEventTracker *dismissalTracker;
@property (retain, nonatomic) PETDistributionEventTracker *timingTracker;
@property (retain, nonatomic) PETScalarEventTracker *donationTracker;
@property (retain, nonatomic) PETScalarEventTracker *pasteboardTracker;

+ (id)sharedInstance;
+ (id)consumerStringForConsumerType:(unsigned long long)arg1;
+ (id)donationSourceFromBundleID:(id)arg1;
+ (id)triggerFromCriteria:(id)arg1;

- (id)init;
- (void)trackConversionGoalForConsumer:(id)arg1 source:(id)arg2 trigger:(id)arg3 originatingApp:(id)arg4 targetApp:(id)arg5 converted:(_Bool)arg6;
- (void)trackOpportunityForConsumer:(id)arg1 trigger:(id)arg2 targetApp:(id)arg3;
- (void)trackDismissalForConsumer:(id)arg1 source:(id)arg2 trigger:(id)arg3 originatingApp:(id)arg4 targetApp:(id)arg5;
- (void)trackTimingForConsumer:(id)arg1 time:(unsigned long long)arg2;
- (void)trackDonationFromBundleId:(id)arg1 source:(id)arg2 hasLatLon:(_Bool)arg3 isEligible:(_Bool)arg4;
- (void)trackPasteboardItemFromBundleId:(id)arg1 hasAddress:(_Bool)arg2 isEligible:(_Bool)arg3;
- (id)privacyFriendlyBundleIdentifierWith:(id)arg1;

@end
