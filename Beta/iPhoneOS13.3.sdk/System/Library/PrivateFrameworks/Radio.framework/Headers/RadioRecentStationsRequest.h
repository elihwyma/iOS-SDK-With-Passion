/*
 Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

#import <Radio/RadioRequest.h>

@class NSString, RadioStation, SSURLConnectionRequest;

@interface RadioRecentStationsRequest : RadioRequest

{
    SSURLConnectionRequest *_request;
    RadioStation *_currentStation;
    NSString *_currentStationStringID;
    _Bool _shouldGroupResponses;
    unsigned long long _stationCount;
}

@property (nonatomic) _Bool shouldGroupResponses;
@property (nonatomic) unsigned long long stationCount;

- (void)cancel;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getCachedRecentStationsResponseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCurrentStation:(id)arg1;
- (id)_newRecentStationsURLRequestPropertiesWithBaseURL:(id)arg1;
- (id)_recentStationsResponseWithConnectionResponse:(id)arg1 returningError:(id *)arg2;
- (void)_configureRequestPropertiesForCaching:(id)arg1 returningCacheKey:(id *)arg2;
- (id)initWithCurrentStationStringID:(id)arg1;

@end
