/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraEditKit/CEKBadgeTextView.h>

@interface CAMFocusLockBadge : CEKBadgeTextView

{
    _Bool _focusLocked;
    _Bool _exposureLocked;
}

@property (nonatomic, getter=isFocusLocked) _Bool focusLocked;
@property (nonatomic, getter=isExposureLocked) _Bool exposureLocked;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateText;

@end
