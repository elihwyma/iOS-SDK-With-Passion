/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLCoreAnalyticsHelper : NSObject

+ (void)sendMomentStatisticsEvent:(id)arg1;
+ (void)sendAnalysisStateEvent:(id)arg1;
+ (void)sendHyperionLocalResourcesEvent:(id)arg1;
+ (void)sendLibrarySummaryEvent:(id)arg1;
+ (void)sendPersistentHistorySummaryEvent:(id)arg1;
+ (void)sendCMMSummaryEvent:(id)arg1;
+ (void)sendCMMSharingSuggestionsEvent:(id)arg1;
+ (void)sendCTMLibrarySummaryEvent:(id)arg1;
+ (void)_sendCTMScheduleProcessingEvent:(id)arg1;
+ (void)_sendCTMFinishProcessingEvent:(id)arg1;
+ (void)sendCTMScheduleAnalyticsForAsset:(id)arg1 isAutoReframe:(_Bool)arg2 isOnDemand:(_Bool)arg3;
+ (void)sendCTMFinishProcessingEventForAsset:(id)arg1 startDate:(id)arg2 isAutoReframe:(_Bool)arg3 isOnDemand:(_Bool)arg4;

@end
