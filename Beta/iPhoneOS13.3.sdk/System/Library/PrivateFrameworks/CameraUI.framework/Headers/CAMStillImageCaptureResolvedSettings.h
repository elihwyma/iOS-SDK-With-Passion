/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMStillImageCaptureResolvedSettings : NSObject

{
    _Bool _HDREnabled;
    _Bool _portraitEffectEnabled;
    double _lowLightCaptureTime;
}

@property (nonatomic, readonly, getter=isHDREnabled) _Bool HDREnabled;
@property (nonatomic, readonly, getter=isPortraitEffectEnabled) _Bool portraitEffectEnabled;
@property (nonatomic, readonly) double lowLightCaptureTime;

- (id)initWithHDREnabled:(_Bool)arg1 portraitEffectEnabled:(_Bool)arg2 lowLightCaptureTime:(double)arg3;

@end
