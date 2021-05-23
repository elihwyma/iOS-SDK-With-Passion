/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/WFTask.h>

@class MKLocalSearchCompletion, NSString, WFLocation;

@interface WFGeocodeRequest : WFTask

{
    CDUnknownBlockType _resultHandler;
    NSString *_searchString;
    MKLocalSearchCompletion *_autocompleteSearchResult;
    WFLocation *_geocodedResult;
    struct CLLocationCoordinate2D _coordinate;
}

@property (retain) NSString *searchString;
@property (retain) MKLocalSearchCompletion *autocompleteSearchResult;
@property struct CLLocationCoordinate2D coordinate;
@property (retain) WFLocation *geocodedResult;
@property (readonly) CDUnknownBlockType resultHandler;
@property (readonly) NSString *searchTerm;

- (id)description;
- (void)cleanup;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)initWithSearchString:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)handleResponse:(id)arg1;
- (void)startWithService:(id)arg1;
- (id)initWithSearchCompletion:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)handleCancellation;

@end
