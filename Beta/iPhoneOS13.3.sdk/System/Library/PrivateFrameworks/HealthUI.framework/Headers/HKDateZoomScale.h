/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKValueRange, NSString;

@interface HKDateZoomScale : NSObject

{
    double _previousZoomScale;
    long long _previousZoom;
    HKValueRange *_unitZoomScaleValueRange;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)minDate;
- (long long)zoomForZoomScale:(double)arg1;
- (id)unitZoomScaleValueRange;
- (id)maxDate;
- (double)zoomScaleForRange:(struct HKRange)arg1;
- (void)setUnitZoomScaleValueRangeForTimeInterval:(double)arg1;

@end
