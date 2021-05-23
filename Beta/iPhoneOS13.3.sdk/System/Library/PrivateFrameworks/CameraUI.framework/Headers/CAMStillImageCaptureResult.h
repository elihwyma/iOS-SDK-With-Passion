/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class AVCapturePhoto, CAMCaptureCoordinationInfo, NSArray, NSDate, NSDictionary, NSError, NSString;

@interface CAMStillImageCaptureResult : NSObject

{
    _Bool _shouldPersistAdjustmentSidecar;
    _Bool _expectingPairedVideo;
    struct __IOSurface *_stillImageFullsizeSurface;
    unsigned long long _stillImageFullsizeSurfaceSize;
    struct __IOSurface *_stillImageUnfilteredPreviewSurface;
    struct __IOSurface *_stillImageFilteredPreviewSurface;
    AVCapturePhoto *_capturePhoto;
    NSString *_deferredPhotoIdentifier;
    NSDate *_captureDate;
    NSDictionary *_metadata;
    NSError *_error;
    NSArray *_adjustmentFilters;
    NSString *_persistenceUUID;
    CAMCaptureCoordinationInfo *_coordinationInfo;
}

@property (nonatomic, readonly) struct __IOSurface *stillImageFullsizeSurface;
@property (nonatomic, readonly) unsigned long long stillImageFullsizeSurfaceSize;
@property (nonatomic, readonly) struct __IOSurface *stillImageUnfilteredPreviewSurface;
@property (nonatomic, readonly) struct __IOSurface *stillImageFilteredPreviewSurface;
@property (nonatomic, readonly) AVCapturePhoto *capturePhoto;
@property (copy, nonatomic, readonly) NSString *deferredPhotoIdentifier;
@property (nonatomic, readonly) NSDate *captureDate;
@property (copy, nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) NSDictionary *compactMetadata;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) _Bool shouldPersistAdjustmentSidecar;
@property (nonatomic, readonly) NSArray *adjustmentFilters;
@property (copy, nonatomic, readonly) NSString *persistenceUUID;
@property (nonatomic, readonly) CAMCaptureCoordinationInfo *coordinationInfo;
@property (copy, nonatomic, readonly) NSString *imageGroupIdentifier;
@property (nonatomic, readonly, getter=isExpectingPairedVideo) _Bool expectingPairedVideo;

- (void)dealloc;
- (id)description;
- (id)initWithFullsizeSurface:(struct __IOSurface *)arg1 size:(unsigned long long)arg2 unfilteredPreviewSurface:(struct __IOSurface *)arg3 filteredPreviewSurface:(struct __IOSurface *)arg4 metadata:(id)arg5 expectingPairedVideo:(_Bool)arg6 shouldPersistAdjustmentSidecar:(_Bool)arg7 adjustmentFilters:(id)arg8 persistenceUUID:(id)arg9 coordinationInfo:(id)arg10 error:(id)arg11;
- (id)compactMetadataWithSecondaryMakerNote:(id)arg1;
- (id)_captureDateFromMetadata:(id)arg1;
- (id)initWithCapturePhoto:(id)arg1 expectingPairedVideo:(_Bool)arg2 adjustmentFilters:(id)arg3 filteredPreviewSurface:(struct __IOSurface *)arg4 shouldPersistAdjustmentSidecar:(_Bool)arg5 persistenceUUID:(id)arg6 coordinationInfo:(id)arg7 error:(id)arg8;
- (id)initWithCaptureDeferredPhotoProxy:(id)arg1 expectingPairedVideo:(_Bool)arg2 adjustmentFilters:(id)arg3 filteredPreviewSurface:(struct __IOSurface *)arg4 shouldPersistAdjustmentSidecar:(_Bool)arg5 persistenceUUID:(id)arg6 coordinationInfo:(id)arg7 error:(id)arg8;

@end
