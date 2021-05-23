/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class PPConnectionsMetricsTracker;

@interface PPQuickTypeConnectionsServant : NSObject

{
    PPConnectionsMetricsTracker *_metricsTracker;
}

- (id)init;
- (id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3;
- (id)_locationForQuery:(id)arg1 limit:(unsigned long long)arg2 consumer:(unsigned long long)arg3 explanationSet:(id)arg4;
- (id)criteriaFromQuery:(id)arg1;

@end
