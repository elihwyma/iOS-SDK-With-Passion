/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <MetricMeasurement/MXMProbe.h>

@class NSString, OSActivityStream;

@interface MXMOSLogProbe : MXMProbe

{
    OSActivityStream *_activityStream;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)connectedDevices;
+ (id)hostDevice;
+ (id)probeHostOSLog;

- (void)_beginUpdates;
- (void)_stopUpdates;
- (void)streamDidStart:(id)arg1;
- (void)streamDidStop:(id)arg1;
- (_Bool)activityStream:(id)arg1 results:(id)arg2;
- (void)streamDidFail:(id)arg1 error:(id)arg2;
- (id)initWithTargetDevice:(id)arg1;

@end
