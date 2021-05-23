/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMutableDictionary;

@interface GEOThrottlerAnalyticsFormatter : NSObject

{
    NSMutableDictionary *_throttlerAggregatedInfo;
}

+ (id)sharedThrottlerFormatter;

- (id)init;
- (int)networkServiceForRequestKind:(CDStruct_d1a7ebee)arg1;
- (_Bool)hasInitialInfoForKeyPath:(id)arg1;
- (_Bool)hasThrottledInfoForKeyPath:(id)arg1;
- (void)captureThrottledReqsForKeyPath:(id)arg1 maxReqCount:(id)arg2 policyTimeWindow:(double)arg3;
- (void)setRequestInfoForKeyPath:(id)arg1 at:(id)arg2 kind:(CDStruct_d1a7ebee)arg3 appId:(id)arg4;
- (void)addThrottledReqForKeyPath:(id)arg1 at:(id)arg2;
- (int)throttleModeForString:(id)arg1;
- (int)throttleTypeForString:(id)arg1;

@end
