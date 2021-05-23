/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString, _ATXAppLaunchCategoricalHistogram, _ATXDataStore, _ATXInternalUninstallNotification;

@interface _ATXFeedback : NSObject

{
    _ATXDataStore *_store;
    _ATXInternalUninstallNotification *_uninstallNotificationListener;
    double _priorAlpha;
    double _priorBeta;
    NSString *_abGroupIdentifier;
    _ATXAppLaunchCategoricalHistogram *_appCoarseTimePOWLocationConfirmsHistogram;
    _ATXAppLaunchCategoricalHistogram *_appSpecificTimeDOWLocationConfirmsHistogram;
    _ATXAppLaunchCategoricalHistogram *_appCoarseTimePOWLocationRejectsHistogram;
    _ATXAppLaunchCategoricalHistogram *_appSpecificTimeDOWLocationRejectsHistogram;
}

@property (nonatomic, readonly) double currentAlpha;
@property (nonatomic, readonly) double currentBeta;

+ (id)sharedInstance;

- (id)init;
- (id)initWithDataStore:(id)arg1;
- (void)resetData;
- (void)doDecayAtTime:(double)arg1;
- (void)feedbackLaunched:(id)arg1 rejected:(id)arg2 date:(id)arg3 location:(id)arg4;
- (void)feedbackLaunched:(id)arg1 rejected:(id)arg2 inUnitTest:(_Bool)arg3 date:(id)arg4 location:(id)arg5;
- (void)decayCounts;
- (void)removeFeedbackForBundle:(id)arg1;
- (id)initWithDataStore:(id)arg1 coarseTimePOWLocationConfirmsHistogram:(id)arg2 specificTimeDOWLocationConfirmsHistogram:(id)arg3 coarseTimePOWLocationRejectsHistogram:(id)arg4 specificTimeDOWLocationRejectsHistogram:(id)arg5;
- (void)putNopScoresForApps:(id)arg1 into:(double *)arg2 atTime:(double)arg3;
- (void)putFeedbackScoresForApps:(id)arg1 intoScores:(double *)arg2 confirms:(double *)arg3 rejects:(double *)arg4;
- (void)removeFeedbackForBundles:(id)arg1;

@end
