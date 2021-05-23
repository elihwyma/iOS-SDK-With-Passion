/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HKScalarZoomScale : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)zoomForZoomScale:(double)arg1;
- (id)unitZoomScaleValueRange;
- (double)zoomScaleForRange:(struct HKRange)arg1;
- (void)setUnitZoomScaleValueRangeForTimeInterval:(double)arg1;

@end
