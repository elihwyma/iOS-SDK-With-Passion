/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _MKZoomingGestureControlConfiguration : NSObject

{
    double _decelerationThreshold;
    double _maximumZoomInVelocity;
    double _maximumZoomOutVelocity;
    double _zoomOutFrictionScale;
    double _zoomDraggingResistance;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double decelerationThreshold;
@property (nonatomic, readonly) double maximumZoomInVelocity;
@property (nonatomic, readonly) double maximumZoomOutVelocity;
@property (nonatomic, readonly) double zoomOutFrictionScale;
@property (nonatomic, readonly) double zoomDraggingResistance;

+ (id)defaultConfiguration;
+ (id)configurationForCarPlay;
+ (id)configurationForDigitalCrown;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDecelerationThreshold:(double)arg1 maximumZoomInVelocity:(double)arg2 maximumZoomOutVelocity:(double)arg3 zoomOutFrictionScale:(double)arg4;
- (id)initWithDecelerationThreshold:(double)arg1 maximumZoomInVelocity:(double)arg2 maximumZoomOutVelocity:(double)arg3 zoomOutFrictionScale:(double)arg4 zoomDraggingResistance:(double)arg5;

@end
