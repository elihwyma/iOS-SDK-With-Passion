/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/Swift-Protocol.h>

@protocol ARSensorDelegate;

@protocol ARSensor <Swift>

@property (weak, nonatomic) id <ARSensorDelegate> delegate;
@property (nonatomic) unsigned long long powerUsage;

- (unsigned short)stop;
- (unsigned short)start;
- (unsigned short)providedDataTypes;

@end
