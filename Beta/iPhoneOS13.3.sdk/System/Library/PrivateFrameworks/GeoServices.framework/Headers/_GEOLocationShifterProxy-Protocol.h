/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSObject;

@protocol OS_dispatch_queue;

@protocol _GEOLocationShifterProxy <Swift>

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (unsigned short)isLocationShiftRequiredForCoordinate: /* Error: Ran out of types for this method. */;
- (unsigned short)locationShiftFunctionVersion;
- (unsigned short)isLocationShiftEnabled;
- (unsigned short)shiftLatLng:auditToken:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)flushDiskCache;

@end
