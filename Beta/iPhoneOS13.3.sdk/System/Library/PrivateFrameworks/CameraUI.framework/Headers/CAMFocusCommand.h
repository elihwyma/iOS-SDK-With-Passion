/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMFocusCommand : CAMCaptureCommand

{
    _Bool __shouldUseSmoothFocus;
    long long __focusMode;
    struct CGPoint __focusPointOfInterest;
}

@property (nonatomic, readonly) long long _focusMode;
@property (nonatomic, readonly) struct CGPoint _focusPointOfInterest;
@property (nonatomic, readonly) _Bool _shouldUseSmoothFocus;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithFocusMode:(long long)arg1 smooth:(_Bool)arg2;
- (id)initWithFocusMode:(long long)arg1;
- (id)initWithFocusMode:(long long)arg1 atPointOfInterest:(struct CGPoint)arg2 smooth:(_Bool)arg3;
- (id)initWithFocusMode:(long long)arg1 atPointOfInterest:(struct CGPoint)arg2;

@end
