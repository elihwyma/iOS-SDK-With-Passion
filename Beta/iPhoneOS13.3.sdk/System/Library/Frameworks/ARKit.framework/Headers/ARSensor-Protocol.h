/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/Swift-Protocol.h>

@protocol ARSensorDelegate;

@protocol ARSensor <Swift>

@property (weak, nonatomic) id <ARSensorDelegate> delegate;
@property (nonatomic) unsigned long long powerUsage;

- (unsigned short)stop;
- (unsigned short)start;
- (unsigned short)providedDataTypes;

@end
