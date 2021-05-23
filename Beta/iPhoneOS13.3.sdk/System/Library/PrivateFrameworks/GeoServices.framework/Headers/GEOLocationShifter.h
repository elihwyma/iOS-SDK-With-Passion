/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSCache, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface GEOLocationShifter : NSObject

{
    _Bool _isRequestingShiftFunction;
    struct os_unfair_lock_s _lock;
    NSMutableArray *_locationsToShift;
    NSCache *_shiftFunctionCache;
    int _resetPrivacyToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) _Bool locationShiftEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_proxy;
+ (void)useLocalProxy;
+ (_Bool)isLocationShiftRequiredForCoordinate:(CDStruct_c3b9c2ee)arg1;
+ (unsigned int)locationShiftFunctionVersion;
+ (_Bool)isLocationShiftEnabled;
+ (void)flushDiskCache;

- (id)init;
- (void)dealloc;
- (void)_reset;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)shiftLatLng:(id)arg1 accuracy:(double)arg2 auditToken:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4 mustGoToNetworkCallback:(CDUnknownBlockType)arg5 errorHandler:(CDUnknownBlockType)arg6 callbackQueue:(id)arg7;
- (void)_countryProvidersDidChange:(id)arg1;
- (_Bool)_shiftLocation:(id)arg1;
- (void)_requestNextShiftFunctionIfNecessary;
- (void)shiftLatLng:(id)arg1 accuracy:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)shiftLatLng:(id)arg1 accuracy:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 mustGoToNetworkCallback:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;
- (_Bool)shiftLatLng:(id)arg1 accuracy:(double)arg2 shiftedCoordinate:(CDStruct_c3b9c2ee *)arg3 shiftedAccuracy:(double *)arg4;
- (void)shiftCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)shiftCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 mustGoToNetworkCallback:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;
- (_Bool)shiftCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2 shiftedCoordinate:(CDStruct_c3b9c2ee *)arg3 shiftedAccuracy:(double *)arg4;
- (void)_fetchShiftFunctionForLatLng:(id)arg1 auditToken:(id)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
