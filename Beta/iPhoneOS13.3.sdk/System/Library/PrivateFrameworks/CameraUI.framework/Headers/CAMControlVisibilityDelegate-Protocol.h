/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/Swift-Protocol.h>

@protocol CAMControlVisibilityDelegate <Swift>

@property (nonatomic, readonly) _Bool shouldHideTopBar;
@property (nonatomic, readonly) _Bool shouldHideFlashButton;
@property (nonatomic, readonly) _Bool shouldHideHDRButton;
@property (nonatomic, readonly) _Bool shouldHideTimerButton;
@property (nonatomic, readonly) _Bool shouldHideFlipButton;
@property (nonatomic, readonly) _Bool shouldHideElapsedTimeView;
@property (nonatomic, readonly) _Bool shouldHideLivePhotoButton;
@property (nonatomic, readonly) _Bool shouldHidePortraitModeInstructionLabel;
@property (nonatomic, readonly) _Bool shouldHideQRCodeInstructionLabel;
@property (nonatomic, readonly) _Bool shouldHideFilterNameBadge;
@property (nonatomic, readonly) _Bool shouldHideLightingControl;
@property (nonatomic, readonly) _Bool shouldLayoutLightingNameBadgeAtBottom;
@property (nonatomic, readonly) _Bool shouldShiftPreviewForUtilityBar;

- (unsigned short)shouldHideLightingNameBadgeForOrientation: /* Error: Ran out of types for this method. */;

@end
