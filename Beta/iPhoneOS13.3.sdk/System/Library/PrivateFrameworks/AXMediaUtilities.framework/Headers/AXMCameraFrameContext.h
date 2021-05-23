/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class CMAttitude;

@interface AXMCameraFrameContext : NSObject

{
    float _videoFieldOfView;
    float _videoZoomFactor;
    long long _videoSourceWidth;
    long long _videoSourceHeight;
    double _presentationTimestamp;
    CMAttitude *_deviceAttitude;
}

@property (nonatomic, readonly) float videoFieldOfView;
@property (nonatomic, readonly) float videoZoomFactor;
@property (nonatomic, readonly) long long videoSourceWidth;
@property (nonatomic, readonly) long long videoSourceHeight;
@property (nonatomic, readonly) double presentationTimestamp;
@property (nonatomic, readonly) CMAttitude *deviceAttitude;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoFieldOfView:(float)arg1 zoomFactor:(float)arg2 sourceWidth:(long long)arg3 sourceHeight:(long long)arg4 presentationTimestamp:(double)arg5 attitude:(id)arg6;
- (struct CGRect)motionCorrectedNormalizedFrame:(struct CGRect)arg1 targetAttitude:(id)arg2 targetZoomFactor:(float)arg3 interfaceOrientation:(long long)arg4 mirrored:(_Bool)arg5;

@end
