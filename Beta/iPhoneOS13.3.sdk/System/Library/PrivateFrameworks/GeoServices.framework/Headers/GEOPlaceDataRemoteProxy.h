/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMapTable, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOPlaceDataRemoteProxy : NSObject

{
    NSObject<OS_dispatch_queue> *_requestQ;
    NSMapTable *_requestToUUID;
    struct os_unfair_lock_s _requestToUUIDLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)clearCache;
- (void)cancelRequest:(id)arg1;
- (unsigned long long)shrinkBySizeSync:(unsigned long long)arg1;
- (void)requestIdentifiers:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 options:(unsigned long long)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 requesterHandler:(CDUnknownBlockType)arg7;
- (void)requestComponentsFromNetwork:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 traits:(id)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 requesterHandler:(CDUnknownBlockType)arg7;
- (void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(_Bool)arg2 traits:(id)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 requesterHandler:(CDUnknownBlockType)arg6;
- (void)fetchAllCacheEntriesWithRequesterHandler:(CDUnknownBlockType)arg1;
- (void)trackPlaceData:(id)arg1;
- (void)performPlaceDataRequest:(id)arg1 traits:(id)arg2 cachePolicy:(unsigned long long)arg3 timeout:(double)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 networkActivity:(CDUnknownBlockType)arg7 requesterHandler:(CDUnknownBlockType)arg8;
- (void)calculateFreeableSpaceWithHandler:(CDUnknownBlockType)arg1;
- (void)shrinkBySize:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2;
- (unsigned long long)calculateFreeableSpaceSync;
- (_Bool)_parseReply:(id)arg1 placeResponse:(id *)arg2 userInfo:(id *)arg3 error:(id *)arg4;

@end
