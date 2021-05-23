/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@interface WFWeatherDataServiceRequestSigner : NSObject

+ (void)signRequest:(id)arg1 withDate:(id)arg2;
+ (void)signRequest:(id)arg1 withSecret:(id)arg2 andDate:(id)arg3;
+ (id)buildAuthHeader:(id)arg1 withSecret:(id)arg2 andDate:(id)arg3;
+ (id)roundDate:(id)arg1 toMinutes:(unsigned long long)arg2;

@end
