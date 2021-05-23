/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice;

@interface NTKCaliforniaStyleTransitionHandler : NSObject

{
    double _fraction;
    unsigned long long _dial;
    struct CGPoint *_fadeOutHourMarkersCenterPoints;
    struct CGPoint *_fadeInHourMarkersCenterPoints;
    unsigned long long _hourMarkersCount;
    CLKDevice *_device;
    struct CGPoint _centerPoint;
}

@property (retain, nonatomic) CLKDevice *device;
@property (nonatomic) double fraction;
@property (nonatomic) unsigned long long dial;
@property (nonatomic) struct CGPoint centerPoint;
@property (nonatomic) struct CGPoint *fadeOutHourMarkersCenterPoints;
@property (nonatomic) struct CGPoint *fadeInHourMarkersCenterPoints;
@property (nonatomic) unsigned long long hourMarkersCount;

- (id)initWithDevice:(id)arg1;
- (double)opacityForMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2;
- (struct CGPoint)positionForMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2;
- (struct CGAffineTransform)transformForMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2;
- (double)animationProgressForHourMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2;
- (double)animationStartTimeForMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2;
- (double)animationDurationForHourMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2;

@end
