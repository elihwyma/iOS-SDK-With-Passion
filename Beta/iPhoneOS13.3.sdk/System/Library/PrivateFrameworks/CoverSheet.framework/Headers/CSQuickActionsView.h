/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

#import <CoverSheet/Swift-Protocol.h>

@class CSDashBoardQuickActionsButtonSettings, CSQuickActionsButton, NSString, _UILegibilitySettings;

@protocol CSQuickActionsDelegate;

@interface CSQuickActionsView : SBFTouchPassThroughView <Swift>

{
    _Bool _flashlightOn;
    id <CSQuickActionsDelegate> _delegate;
    CSQuickActionsButton *_flashlightButton;
    CSQuickActionsButton *_cameraButton;
    _UILegibilitySettings *_legibilitySettings;
    CSDashBoardQuickActionsButtonSettings *_quickActionsSettings;
}

@property (retain, nonatomic) CSDashBoardQuickActionsButtonSettings *quickActionsSettings;
@property (weak, nonatomic) id <CSQuickActionsDelegate> delegate;
@property (retain, nonatomic) CSQuickActionsButton *flashlightButton;
@property (retain, nonatomic) CSQuickActionsButton *cameraButton;
@property (nonatomic) _Bool flashlightOn;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)refreshSupportedButtons;
- (void)refreshFlashlightAvailability;
- (void)_addOrRemoveCameraButtonIfNecessary;
- (void)_addOrRemoveFlashlightButtonIfNecessary;
- (void)_updateButtonBackgroundVisible;
- (void)_layoutQuickActionButtons;
- (double)_insetX;
- (struct UIEdgeInsets)_buttonOutsets;
- (double)_insetY;
- (_Bool)_prototypingAllowsButtons;
- (id)_buttonGroupName;
- (void)_addTargetsToButton:(id)arg1;
- (void)_removeTargetsFromButton:(id)arg1;
- (void)handleButtonTouchBegan:(id)arg1;
- (void)handleButtonTouchEnded:(id)arg1;
- (void)handleButtonPress:(id)arg1;
- (void)_setButtonBackgroundVisible:(_Bool)arg1;

@end
