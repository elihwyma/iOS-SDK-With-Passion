/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface WFRequestFailureTracker : NSObject

{
    unsigned long long _requestFailures;
    unsigned long long _requestSuccesses;
}

@property (nonatomic, readonly) unsigned long long requestFailures;
@property (nonatomic, readonly) unsigned long long requestSuccesses;

- (void)incrementFailCount;
- (void)incrementSuccessCount;
- (double)failureRate;

@end
