/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMRampToVideoZoomFactorCommand : CAMCaptureCommand

{
    float __rate;
    double __videoZoomFactor;
    double __duration;
}

@property (nonatomic, readonly) double _videoZoomFactor;
@property (nonatomic, readonly) float _rate;
@property (nonatomic, readonly) double _duration;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithVideoZoomFactor:(double)arg1 rate:(float)arg2;
- (id)initWithVideoZoomFactor:(double)arg1 duration:(double)arg2;

@end
