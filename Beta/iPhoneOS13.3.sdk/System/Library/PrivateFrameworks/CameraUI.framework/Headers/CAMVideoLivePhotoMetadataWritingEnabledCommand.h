/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMVideoLivePhotoMetadataWritingEnabledCommand : CAMCaptureCommand

{
    _Bool __livePhotoMetadataWritingEnabled;
}

@property (nonatomic, readonly, getter=isLivePhotoMetadataWritingEnabled) _Bool _livePhotoMetadataWritingEnabled;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithEnabled:(_Bool)arg1;

@end
