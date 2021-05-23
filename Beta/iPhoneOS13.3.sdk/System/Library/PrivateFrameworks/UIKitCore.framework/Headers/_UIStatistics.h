/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIStatistics : NSObject

{
    NSString *_key;
    double _sampleValue;
    NSMutableSet *_children;
    double _sampleRate;
}

@property (nonatomic) double sampleRate;

+ (id)alertButtonTapCount;
+ (id)previewInteractionTapCount;
+ (id)previewInteractionAlertPresentationCount;
+ (id)scrubberUsageTime;
+ (id)scrubberUsageCount;
+ (unsigned long long)currentTime;
+ (id)feedbackEngineActivationCountWithSuffix:(id)arg1;
+ (id)feedbackEngineActivationDurationWithSuffix:(id)arg1;
+ (id)feedbackEnginePrewarmCountWithSuffix:(id)arg1;
+ (id)feedbackEnginePrewarmDurationWithSuffix:(id)arg1;
+ (id)feedbackEngineOutOfChannelsCountWithSuffix:(id)arg1;
+ (id)feedbackGeneratorActivationCountWithSuffix:(id)arg1;
+ (id)feedbackGeneratorActivationDurationWithSuffix:(id)arg1;
+ (id)feedbackGeneratorActivationTimeOutCountWithSuffix:(id)arg1;
+ (id)feedbackGeneratorPreparationCountWithSuffix:(id)arg1;
+ (id)feedbackGeneratorPlayCountWithSuffix:(id)arg1;
+ (id)zoomGestureCount;
+ (id)pinchGestureCount;
+ (id)recentsInputViewItemSelectedCount;
+ (id)recentsInputViewNewEntryCount;
+ (id)recentsInputViewNumberOfItems;
+ (id)recentsInputViewPresentationCount;
+ (id)coverSheetButtonInteractionCountWithActivation:(_Bool)arg1 category:(id)arg2;
+ (id)coverSheetButtonInteractionDurationWithCategory:(id)arg1;
+ (id)coverSheetButtonFirstActivationDurationWithCategory:(id)arg1;
+ (id)coverSheetButtonMaximumForceWithActivation:(_Bool)arg1 category:(id)arg2;
+ (id)previewInteractionPopCount;
+ (id)previewInteractionPeekDuration;
+ (id)previewInteractionPeekCount;
+ (id)controlValueChangeEmittedCountWithCategory:(id)arg1 suffix:(id)arg2;
+ (id)maxForce;
+ (id)controlTapCountWithCategory:(id)arg1 suffix:(id)arg2;
+ (id)controlInteractionDurationDistributionWithCategory:(id)arg1 suffix:(id)arg2;
+ (id)_sharedStatisticWithDomain:(id)arg1 statisticsClass:(Class)arg2 identifierReporting:(long long)arg3;
+ (id)previewInteractionPeekForce;
+ (id)previewInteractionPopForce;
+ (id)scrollBounceCount;

- (id)init;
- (id)description;
- (id)_key;
- (id)initWithDomain:(id)arg1;
- (void)_setValue:(long long)arg1;
- (id)initWithDomain:(id)arg1 identifierReporting:(long long)arg2;
- (void)_resetDistribution;
- (_Bool)_shouldSample;
- (void)_resetDistributionToValue:(double)arg1;
- (void)_resetValue;
- (void)_recordDistributionValue:(double)arg1;
- (void)_recordDistributionTime:(unsigned long long)arg1;
- (void)_incrementValueBy:(long long)arg1;
- (void)_addChildStatistic:(id)arg1;
- (void)_removeChildStatistic:(id)arg1;
- (void)randomizeSampleValue;

@end
