/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class GEOLocationShifter;

@protocol OS_dispatch_queue;

@interface CLSLocationShifter : NSObject

{
    NSObject<OS_dispatch_queue> *_locationShiftQueue;
    GEOLocationShifter *_locationShifter;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *locationShiftQueue;
@property (nonatomic, readonly) GEOLocationShifter *locationShifter;

+ (_Bool)isLocationShiftRequiredForCoordinate:(CDStruct_c3b9c2ee)arg1;
+ (id)sharedLocationShifter;

- (id)init;
- (CDStruct_c3b9c2ee)shiftedCoordinateForOriginalCoordinate:(CDStruct_c3b9c2ee)arg1;

@end
