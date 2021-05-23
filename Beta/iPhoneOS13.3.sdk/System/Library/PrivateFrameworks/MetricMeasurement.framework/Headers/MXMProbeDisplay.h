/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <MetricMeasurement/MXMProbe.h>

@class NSString;

@protocol MXMDisplayProbePlatform;

@interface MXMProbeDisplay : MXMProbe

{
    id <MXMDisplayProbePlatform> _impl;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptors;
+ (id)probe;
+ (id)mainDescriptor;
+ (id)probeWithDescriptor:(id)arg1;

- (id)init;
- (void)_beginUpdates;
- (id)initWithDescriptor:(id)arg1;
- (void)_stopUpdates;
- (void)_didRecieveData:(id)arg1;

@end
