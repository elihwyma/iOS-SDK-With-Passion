/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface WFNetworkFailTracker : NSObject

{
    int _numConsecutiveFails;
    double _lastFailTimeInSeconds;
}

@property (nonatomic, readonly) int numConsecutiveFails;
@property (nonatomic, readonly) double lastFailTimeInSeconds;

- (void)incrementFailCount;
- (_Bool)lastFailTimeExpiredForSettings:(id)arg1;

@end
