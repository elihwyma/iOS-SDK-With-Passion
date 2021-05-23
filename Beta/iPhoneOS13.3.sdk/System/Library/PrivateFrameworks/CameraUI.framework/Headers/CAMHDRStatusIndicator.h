/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMHDRStatusIndicator : CAMControlStatusIndicator

{
    _Bool _autoHDRAllowed;
    long long _hdrMode;
}

@property (nonatomic, setter=setHDRMode:) long long hdrMode;
@property (nonatomic, getter=isAutoHDRAllowed) _Bool autoHDRAllowed;

- (struct CGSize)intrinsicContentSize;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (id)imageNameForCurrentState;
- (_Bool)shouldUseActiveTintForCurrentState;
- (void)setAllowAutoHDR:(_Bool)arg1;

@end
