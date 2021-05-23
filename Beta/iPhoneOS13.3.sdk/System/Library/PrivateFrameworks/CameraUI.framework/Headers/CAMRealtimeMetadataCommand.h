/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@class NSArray;

@interface CAMRealtimeMetadataCommand : CAMCaptureCommand

{
    NSArray *__desiredTypes;
}

@property (copy, nonatomic, readonly) NSArray *_desiredTypes;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithTypes:(id)arg1;
- (id)_metadataObjectTypesForRealtimeMetadataTypes:(id)arg1 withAvailableMetadataTypes:(id)arg2;
- (id)_metadataObjectTypeForRealtimeMetadataType:(long long)arg1;

@end
