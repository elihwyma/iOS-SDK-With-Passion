/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCameraViewfinder.h>

@class FigCameraViewfinderSessionLocal, NSDictionary, NSString;

@interface FigCameraViewfinderLocal : FigCameraViewfinder

{
    _Bool _observing;
    NSDictionary *_options;
    FigCameraViewfinderSessionLocal *_activeViewfinderSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) int photoThumbnailMaxDimension;
@property (readonly) _Bool photoThumbnailQualitySpecified;
@property (readonly) float photoThumbnailQuality;

+ (void)initialize;
+ (id)cameraViewfinder;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)startWithOptions:(id)arg1;
- (void)_updateActiveViewfinderSession:(id)arg1;
- (void)captureSessionDidStart:(id)arg1;
- (void)captureSessionDidStop:(long long)arg1;
- (void)captureSession:(long long)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(CDStruct_1b6d18a9)arg4;

@end
