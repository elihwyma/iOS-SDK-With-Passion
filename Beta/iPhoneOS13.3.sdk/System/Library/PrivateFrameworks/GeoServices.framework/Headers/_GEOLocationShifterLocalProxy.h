/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOLocationShifterPersistence, NSString, _GEOLocationShiftRequester;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOLocationShifterLocalProxy : NSObject

{
    _GEOLocationShiftRequester *_requester;
    int _resetPrivacyToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) GEOLocationShifterPersistence *persistentCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void)dealloc;
- (_Bool)isLocationShiftRequiredForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (unsigned int)locationShiftFunctionVersion;
- (_Bool)isLocationShiftEnabled;
- (void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)flushDiskCache;
- (void)_prunePersistentCache;
- (void)_doNetworkRequestForLatLng:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 shouldCache:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
