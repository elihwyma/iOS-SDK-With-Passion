/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class CLGeocoder, MKLocalSearch, MKLocalSearchCompletion, NSString, WFResponse, WFTaskIdentifier;

__attribute__((visibility("hidden")))
@interface WFLocationQueryGeocode : NSObject

{
    _Bool _finished;
    WFTaskIdentifier *identifier;
    MKLocalSearchCompletion *_searchCompletion;
    NSString *_searchString;
    CDUnknownBlockType _resultHandler;
    WFResponse *_response;
    CLGeocoder *_reverseGeocoder;
    MKLocalSearch *_search;
    struct CLLocationCoordinate2D _searchCoordinate;
    struct CLLocationCoordinate2D _unshiftedCoordinate;
}

@property (copy) CDUnknownBlockType resultHandler;
@property (retain) WFResponse *response;
@property (retain, nonatomic) CLGeocoder *reverseGeocoder;
@property (retain, nonatomic) MKLocalSearch *search;
@property (nonatomic) struct CLLocationCoordinate2D searchCoordinate;
@property (nonatomic) struct CLLocationCoordinate2D unshiftedCoordinate;
@property (readonly) MKLocalSearchCompletion *searchCompletion;
@property (readonly) NSString *searchString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain) WFTaskIdentifier *identifier;

+ (id)queryWithCoordinate:(struct CLLocationCoordinate2D)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (id)clReverseGeocoderCache;
+ (id)mkLocalSearchGeoCodeCache;
+ (id)queryWithDictionaryRepresentation:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (id)queryWithSearchCompletion:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)invalidateCaches;
+ (id)queryWithSearchString:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

- (void)cancel;
- (void)start;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)initWithSearchString:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)initWithSearchCompletion:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)_reverseGeocoderLocation;
- (void)_startCLGeocoderReverseGeo;
- (id)_mkLocalSearchRequest;
- (void)_startMKLocalSearch;
- (void)_handleErrorResponse:(id)arg1;
- (void)handleSearchResponseWithLocation:(id)arg1;

@end
