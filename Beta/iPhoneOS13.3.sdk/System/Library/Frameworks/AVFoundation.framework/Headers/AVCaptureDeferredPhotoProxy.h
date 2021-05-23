/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCapturePhoto.h>

@class NSString;

@interface AVCaptureDeferredPhotoProxy : AVCapturePhoto

{
    NSString *_captureRequestIdentifier;
    NSString *_photoIdentifier;
}

@property (copy, readonly) NSString *persistentStorageUUID;
@property (readonly) NSString *deferredPhotoIdentifier;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)initWithTimestamp:(CDStruct_1b6d18a9)arg1 captureRequestIdentifier:(id)arg2 photoIdentifier:(id)arg3 expectedPhotoProcessingFlags:(unsigned int)arg4;
- (id)captureRequestIdentifier;
- (id)initWithTimestamp:(CDStruct_1b6d18a9)arg1 proxySurface:(struct __IOSurface *)arg2 proxySurfaceSize:(unsigned long long)arg3 proxyFileType:(id)arg4 previewPhotoSurface:(struct __IOSurface *)arg5 metadata:(id)arg6 captureRequest:(id)arg7 sequenceCount:(unsigned long long)arg8 photoCount:(unsigned long long)arg9 captureRequestIdentifier:(id)arg10 photoIdentifier:(id)arg11 expectedPhotoProcessingFlags:(unsigned int)arg12 sourceDeviceType:(id)arg13;
- (id)initWithDeferredPhotoIdentifier:(id)arg1;

@end
