/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/_GEOPlaceRequestTicket.h>

@class GEOMapServiceTraits, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOMapServiceSpatialPlaceLookupTicket : _GEOPlaceRequestTicket

{
    NSArray *_parameters;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *parameters;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

+ (unsigned long long)maxParametersCount;

- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 queue:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 onQueue:(id)arg2 withResult:(id)arg3 error:(id)arg4;
- (void)handleResponse:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (id)spatialPlaceLookupResultsFromResponse:(id)arg1;
- (void)createSpatialPlaceLookupResultForLookupResults:(id)arg1 mapItems:(id)arg2 completion:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (id)mapItemsForPlaceLookupResponses:(id)arg1 usingIdentifierToMapItemMap:(id)arg2;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (id)initWithRequest:(id)arg1 parameters:(id)arg2 traits:(id)arg3;

@end
