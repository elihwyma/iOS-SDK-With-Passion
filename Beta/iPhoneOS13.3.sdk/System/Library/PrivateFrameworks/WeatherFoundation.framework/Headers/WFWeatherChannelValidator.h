/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface WFWeatherChannelValidator : NSObject

+ (id)expectedStructure;
+ (_Bool)isLeafNodeType:(id)arg1;

- (_Bool)validateDictionary:(id)arg1 expectedStructure:(id)arg2;
- (_Bool)validateResponseData:(id)arg1;

@end
