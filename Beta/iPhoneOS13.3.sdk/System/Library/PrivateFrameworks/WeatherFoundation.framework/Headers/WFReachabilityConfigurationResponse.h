/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/WFResponse.h>

@class NSURL, NWPathEvaluator;

@interface WFReachabilityConfigurationResponse : WFResponse

{
    NSURL *_reachabilityHostURL;
}

@property (copy, nonatomic) NSURL *reachabilityHostURL;
@property (nonatomic, readonly) NWPathEvaluator *pathEvaluator;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
