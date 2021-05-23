/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCapturePhotoSettings, AVCaptureResolvedPhotoSettings, AVWeakReferencingDelegateStorage, NSArray;

__attribute__((visibility("hidden")))
@interface AVCapturePhotoRequest : NSObject

{
    AVWeakReferencingDelegateStorage *_delegateStorage;
    unsigned int _photoCallbackFlavor;
    AVCapturePhotoSettings *_unresolvedSettings;
    AVCaptureResolvedPhotoSettings *_resolvedSettings;
    NSArray *_expectedPhotoManifest;
    unsigned int _firedCallbackFlags;
    unsigned long long _firedPhotoCallbacksCount;
    struct __IOSurface *_previewSurface;
    struct opaqueCMSampleBuffer *_previewSampleBuffer;
    struct __IOSurface *_thumbnailSurface;
    _Bool _delegateSupportsDebugMetadataSidecarFile;
    _Bool _lensStabilizationSupported;
}

@property (readonly) unsigned int photoCallbackFlavor;
@property (readonly) AVWeakReferencingDelegateStorage *delegateStorage;
@property (readonly) AVCapturePhotoSettings *unresolvedSettings;
@property (retain, nonatomic) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property (nonatomic, readonly) NSArray *expectedPhotoManifest;
@property (nonatomic, readonly) unsigned long long expectedPhotoCount;
@property (nonatomic) unsigned int firedCallbackFlags;
@property (nonatomic) unsigned long long firedPhotoCallbacksCount;
@property (readonly) _Bool delegateSupportsDebugMetadataSidecarFile;
@property (readonly) _Bool lensStabilizationSupported;
@property (retain, nonatomic) struct __IOSurface *previewSurface;
@property (retain, nonatomic) struct opaqueCMSampleBuffer *previewSampleBuffer;
@property (retain, nonatomic) struct __IOSurface *thumbnailSurface;

+ (id)requestWithDelegate:(id)arg1 settings:(id)arg2 lensStabilizationSupported:(_Bool)arg3;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1 settings:(id)arg2 lensStabilizationSupported:(_Bool)arg3;
- (void)_resolveExpectedPhotoManifest;

@end
