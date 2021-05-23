/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSDate, NSString, WFLocation;

__attribute__((visibility("hidden")))
@interface WFWeatherDataServiceParserMetadataV1 : NSObject

{
    NSDate *_readTime;
    NSDate *_expireTime;
    unsigned long long _version;
    WFLocation *_location;
    NSString *_language;
}

@property (retain, nonatomic) NSDate *readTime;
@property (retain, nonatomic) NSDate *expireTime;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) WFLocation *location;
@property (retain, nonatomic) NSString *language;

@end
