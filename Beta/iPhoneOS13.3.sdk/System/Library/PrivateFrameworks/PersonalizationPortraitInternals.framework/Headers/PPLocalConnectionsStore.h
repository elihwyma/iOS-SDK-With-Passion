/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

#import <PersonalizationPortraitInternals/Swift-Protocol.h>

@class PPConnectionsDonationStore, PPConnectionsPredictionStore, PPM2FeedbackPortraitRegistered, PPMFeedbackRegistered;

@interface PPLocalConnectionsStore : NSObject <Swift>

{
    PPMFeedbackRegistered *_feedbackTracker;
    PPM2FeedbackPortraitRegistered *_feedbackTracker2;
    PPConnectionsPredictionStore *_predictionStore;
    PPConnectionsDonationStore *_donationStore;
}

+ (id)defaultStore;

- (id)init;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)recentLocationDonationsSinceDate:(id)arg1 error:(id *)arg2;
- (id)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 timeout:(unsigned long long)arg5 error:(id *)arg6;
- (id)initWithPredictionStore:(id)arg1 donationStore:(id)arg2;

@end
