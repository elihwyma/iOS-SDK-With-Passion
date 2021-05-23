/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, OSActivityStream;

@protocol MXMProbeableDevice;

@interface MXMOSLogDeviceStore_Internal : NSObject

{
    OSActivityStream *_stream;
    id <MXMProbeableDevice> _hostDevice;
    NSMutableDictionary *_devices;
}

@property (nonatomic, readonly) id <MXMProbeableDevice> hostDevice;
@property (nonatomic, readonly) NSMutableDictionary *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)shared;

- (id)init;
- (_Bool)activityStream:(id)arg1 deviceUDID:(id)arg2 deviceID:(id)arg3 status:(long long)arg4 error:(id)arg5;

@end
