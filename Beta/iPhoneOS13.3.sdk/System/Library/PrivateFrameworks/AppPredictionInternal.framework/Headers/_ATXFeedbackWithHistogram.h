/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class _ATXAppLaunchCategoricalHistogram;

@interface _ATXFeedbackWithHistogram : NSObject

{
    _ATXAppLaunchCategoricalHistogram *_store;
    double _priorAlpha;
    double _priorBeta;
}

@property (nonatomic, readonly) double currentAlpha;
@property (nonatomic, readonly) double currentBeta;

- (id)initWithHistogram:(id)arg1;
- (void)resetData;
- (void)feedbackLaunched:(id)arg1 rejected:(id)arg2;
- (void)feedbackLaunched:(id)arg1 rejected:(id)arg2 inUnitTest:(_Bool)arg3;
- (void)decayCounts;
- (void)removeFeedbackForBundle:(id)arg1;
- (double)getConfirmsForBundle:(id)arg1;
- (double)getRejectsForBundle:(id)arg1;
- (double)getFeedbackScoreForBundle:(id)arg1;
- (void)updatePriors;

@end
