/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOAbstractTicket.h>

@class GEOMapServiceTraits, GEOSpatialLookupBatchRequest, GEOSpatialLookupBatchResponse, NSArray, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface _GEOBatchSpatialLookupTicket : GEOAbstractTicket

{
    GEOSpatialLookupBatchRequest *_request;
    GEOSpatialLookupBatchResponse *_response;
    NSArray *_parameters;
    NSMapTable *_parametersToMapItems;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (CDStruct_d1a7ebee)dataRequestKind;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (id)mapItemsForParameters:(id)arg1;
- (id)initWithRequest:(id)arg1 forParameters:(id)arg2 traits:(id)arg3;

@end
