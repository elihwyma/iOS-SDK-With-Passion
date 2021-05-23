/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMFlashStatusIndicator : CAMControlStatusIndicator

{
    _Bool _flashActive;
    _Bool _flashUnavailable;
    long long _flashMode;
}

@property (nonatomic) long long flashMode;
@property (nonatomic, getter=isFlashActive) _Bool flashActive;
@property (nonatomic, getter=isFlashUnavailable) _Bool flashUnavailable;

- (_Bool)shouldUseOutline;
- (id)imageNameForCurrentState;
- (_Bool)shouldUseActiveTintForCurrentState;

@end
