/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSString, NSURL;

@interface WFAttribution : NSObject

@property (readonly) NSString *sourceName;
@property (readonly) NSString *localizedSourceAttribution;
@property (readonly) NSURL *sourceAttributionURL;

+ (id)platformSpecializedWeatherSourceAttributionURLForTrafficParameter:(id)arg1;
+ (id)weatherSourceAttributionURLForTrafficParameter:(id)arg1;
+ (id)sharedAttribution;

- (id)sourceAttributionImageForStyle:(unsigned long long)arg1;

@end
