/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapRequestManager.h>

@class NSObject;

@protocol GEOMapAccessRestrictions, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOZilchDecoder : GEOMapRequestManager

{
    NSObject<OS_dispatch_queue> *_decoderQueue;
    NSObject<OS_dispatch_queue> *_requestQueue;
    struct mutex _lock;
    id <GEOMapAccessRestrictions> _mapAccessRestrictions;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *decoderQueue;
@property (weak, nonatomic) id <GEOMapAccessRestrictions> mapAccessRestrictions;

+ (_Bool)decodingSupported;

- (id)init;
- (id).cxx_construct;
- (void)trackRequest:(id)arg1;
- (void)requestComplete:(id)arg1;
- (id)requestQueue;
- (void)setRequestQueue:(id)arg1;
- (id)decodeZilchMessage:(shared_ptr_27244a92)arg1 pathHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;

@end
