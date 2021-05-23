/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNodeMessage.h>

@class BWPhotoManifest, BWStillImageCaptureSettings, FigCaptureStillImageSettings;

@interface BWNodeStillImagePrewarmMessage : BWNodeMessage

{
    FigCaptureStillImageSettings *_requestedStillImageCaptureSettings;
    BWStillImageCaptureSettings *_resolvedStillImageCaptureSettings;
    BWPhotoManifest *_photoManifest;
}

@property (readonly) FigCaptureStillImageSettings *requestedStillImageCaptureSettings;
@property (readonly) BWStillImageCaptureSettings *resolvedStillImageCaptureSettings;
@property (readonly) BWPhotoManifest *photoManifest;

+ (id)newMessageWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 photoManifest:(id)arg3;

- (void)dealloc;
- (id)_initWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 photoManifest:(id)arg3;

@end
