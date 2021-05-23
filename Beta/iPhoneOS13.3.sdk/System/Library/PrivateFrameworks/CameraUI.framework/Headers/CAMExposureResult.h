/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMExposureResult : NSObject

{
    _Bool _adjustingExposure;
    _Bool _exposureDidStart;
    _Bool _exposureDidEnd;
    _Bool _deviceSupportsFocus;
    float _exposureTargetBias;
    long long _exposureMode;
    struct CGPoint _pointOfInterest;
}

@property (nonatomic, readonly, getter=isAdjustingExposure) _Bool adjustingExposure;
@property (nonatomic, readonly) struct CGPoint pointOfInterest;
@property (nonatomic, readonly) long long exposureMode;
@property (nonatomic, readonly) float exposureTargetBias;
@property (nonatomic, readonly) _Bool exposureDidStart;
@property (nonatomic, readonly) _Bool exposureDidEnd;
@property (nonatomic, readonly) _Bool deviceSupportsFocus;

- (id)description;
- (id)initWithMode:(long long)arg1 pointOfInterest:(struct CGPoint)arg2 exposureTargetBias:(float)arg3 adjusting:(_Bool)arg4 exposureDidStart:(_Bool)arg5 exposureDidEnd:(_Bool)arg6 deviceSupportsFocus:(_Bool)arg7;

@end
