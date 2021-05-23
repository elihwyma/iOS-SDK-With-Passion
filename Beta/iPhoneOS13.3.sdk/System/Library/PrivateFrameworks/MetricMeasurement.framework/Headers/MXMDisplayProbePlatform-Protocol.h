/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <MetricMeasurement/Swift-Protocol.h>

@protocol MXMDisplayProbePlatformDelegate;

@protocol MXMDisplayProbePlatform <Swift>

@property (weak, nonatomic) id <MXMDisplayProbePlatformDelegate> delegate;

+ (unsigned short)_allDescriptors;

- (unsigned short)_start;
- (unsigned short)_stop;
- (unsigned short)initPrivateWithDescriptor:queue: /* Error: Ran out of types for this method. */;

@end
