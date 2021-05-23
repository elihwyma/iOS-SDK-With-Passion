/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/Swift-Protocol.h>

@class WFResponse, WFTaskIdentifier;

@protocol WFLocationQuery <Swift>

@property (readonly) WFResponse *response;
@property (retain) WFTaskIdentifier *identifier;

- (unsigned short)start;

@end
