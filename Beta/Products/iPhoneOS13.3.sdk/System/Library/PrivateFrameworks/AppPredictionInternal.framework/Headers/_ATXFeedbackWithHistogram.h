/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXFeedbackWithHistogram : NSObject <_ATXFeedbackProtocol> {
    double  _priorAlpha;
    double  _priorBeta;
    _ATXAppLaunchCategoricalHistogram * _store;
}

@property (nonatomic, readonly) double currentAlpha;
@property (nonatomic, readonly) double currentBeta;

- (void).cxx_destruct;
- (double)currentAlpha;
- (double)currentBeta;
- (void)decayCounts;
- (void)feedbackLaunched:(id)arg1 rejected:(id)arg2;
- (void)feedbackLaunched:(id)arg1 rejected:(id)arg2 inUnitTest:(bool)arg3;
- (double)getConfirmsForBundle:(id)arg1;
- (double)getFeedbackScoreForBundle:(id)arg1;
- (double)getRejectsForBundle:(id)arg1;
- (id)initWithHistogram:(id)arg1;
- (void)removeFeedbackForBundle:(id)arg1;
- (void)resetData;
- (void)updatePriors;

@end