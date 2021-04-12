//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/_GEOPlaceRequestTicket.h>

#import <GeoServices/GEOMapServiceSpatialPlaceLookupTicket-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _GEOMapServiceSpatialPlaceLookupTicket : _GEOPlaceRequestTicket <GEOMapServiceSpatialPlaceLookupTicket>
{
    NSArray *_parameters;
}

+ (NSUInteger)maxParametersCount;
@property(readonly, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
// - (void).cxx_destruct;
- (void)callCompletion:(id /* CDUnknownBlockType */)arg1 onQueue:(id)arg2 withResult:(id)arg3 error:(id)arg4;
- (id)mapItemsForPlaceLookupResponses:(id)arg1 usingIdentifierToMapItemMap:(id)arg2;
- (void)createSpatialPlaceLookupResultForLookupResults:(id)arg1 mapItems:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3 queue:(id)arg4;
- (id)spatialPlaceLookupResultsFromResponse:(id)arg1;
- (void)handleResponse:(id)arg1 userInfo:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3 queue:(id)arg4;
- (void)submitWithHandler:(id /* CDUnknownBlockType */)arg1 auditToken:(id)arg2 queue:(id)arg3;
- (void)submitWithHandler:(id /* CDUnknownBlockType */)arg1 queue:(id)arg2;
- (id)initWithRequest:(id)arg1 parameters:(id)arg2 traits:(id)arg3;

@end

