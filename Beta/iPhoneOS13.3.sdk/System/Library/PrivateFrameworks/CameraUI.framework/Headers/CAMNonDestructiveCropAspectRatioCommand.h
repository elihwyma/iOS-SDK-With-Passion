/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMNonDestructiveCropAspectRatioCommand : CAMCaptureCommand

{
    long long __aspectRatioCrop;
}

@property (nonatomic, readonly) long long _aspectRatioCrop;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithSubcommands:(id)arg1;
- (id)initWithAspectRatioCrop:(long long)arg1;

@end
