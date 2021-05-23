/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMNonDestructiveCropEnabledCommand : CAMCaptureCommand

{
    _Bool __enabled;
}

@property (nonatomic, readonly, getter=_isEnabled) _Bool _enabled;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithSubcommands:(id)arg1;
- (id)initWithNonDestructiveCropEnabled:(_Bool)arg1;

@end
