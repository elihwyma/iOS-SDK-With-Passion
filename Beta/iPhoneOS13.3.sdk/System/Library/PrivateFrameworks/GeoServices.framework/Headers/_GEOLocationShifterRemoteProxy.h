/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOLocationShifterRemoteProxy : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (_Bool)isLocationShiftRequiredForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (unsigned int)locationShiftFunctionVersion;
- (_Bool)isLocationShiftEnabled;
- (void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)flushDiskCache;

@end
