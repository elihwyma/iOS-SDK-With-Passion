/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/WFTask.h>

@interface WFFavoriteLocationRequest : WFTask

{
    CDUnknownBlockType _resultHandler;
}

@property (nonatomic, readonly) CDUnknownBlockType resultHandler;

- (id)initWithResultHandler:(CDUnknownBlockType)arg1;
- (void)handleResponse:(id)arg1;
- (void)startWithService:(id)arg1;
- (void)handleCancellation;

@end
