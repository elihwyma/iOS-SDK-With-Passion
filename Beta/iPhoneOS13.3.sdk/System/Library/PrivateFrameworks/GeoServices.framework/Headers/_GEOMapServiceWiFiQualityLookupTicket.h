/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOAbstractTicket.h>

@class GEOWiFiQualityServiceRequest, NSString;

__attribute__((visibility("hidden")))
@interface _GEOMapServiceWiFiQualityLookupTicket : GEOAbstractTicket

{
    GEOWiFiQualityServiceRequest *_request;
    NSString *_tileKey;
    NSString *_eTag;
    NSString *_requestID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CDStruct_d1a7ebee dataRequestKind;

- (void)_cancel;
- (id)initWithRequestID:(id)arg1;
- (void)submitNetworkSearchWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelNetworkSearch;
- (void)submitLocationSearchWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelLocationSearch;
- (void)submitTileLoadWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelTileLoad;
- (id)initWithRequest:(id)arg1 requestId:(id)arg2;
- (id)initWithTileKey:(id)arg1 eTag:(id)arg2 requestId:(id)arg3;

@end
