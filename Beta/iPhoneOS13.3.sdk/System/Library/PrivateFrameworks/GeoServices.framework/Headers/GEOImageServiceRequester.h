/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSHashTable, NSMapTable, geo_isolater;

@interface GEOImageServiceRequester : NSObject

{
    geo_isolater *_isolater;
    NSHashTable *_pendingRequests;
    NSMapTable *_requestToIdentifier;
}

+ (id)sharedRequester;

- (id)init;
- (unsigned long long)shrinkDiskCacheToSize:(unsigned long long)arg1;
- (unsigned long long)calculateFreeableSize;
- (_Bool)_finishRequest:(id)arg1;
- (void)startImageServiceRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 queue:(id)arg4 finished:(CDUnknownBlockType)arg5 networkActivity:(CDUnknownBlockType)arg6 error:(CDUnknownBlockType)arg7;
- (void)cancelImageServiceRequest:(id)arg1;

@end
