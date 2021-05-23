/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsProcessor.h>

@class NSDate;

@interface TPSAnalyticsUsageEventsProcessor : TPSAnalyticsProcessor

{
    NSDate *_currentDate;
}

+ (id)_firstShownDateForTipStatus:(id)arg1;
+ (_Bool)_tipStatusValidForLiftProcessing:(id)arg1 deliveryInfo:(id)arg2 firstShownDate:(id)arg3;
+ (id)_preHintRangeOutOfBoundsForIdentifier:(id)arg1;
+ (id)_usageEventsProcessedKeyForIdentifier:(id)arg1;
+ (id)_preHintUsageKeyForIdentifier:(id)arg1;

- (id)init;
- (void)processAnalytics:(CDUnknownBlockType)arg1;
- (void)_savePreHintRangeOutOfBounds:(_Bool)arg1 forIdentifier:(id)arg2;
- (void)_saveHistoricalUsage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_calculateLift:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_countsForPredicate:(id)arg1 streamName:(id)arg2 interval:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setCurrentDate:(id)arg1;

@end
