/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface DevicePINSetupController

{
    _Bool _success;
    _Bool _allowOptionsButton;
}

@property (nonatomic) _Bool allowOptionsButton;

- (id)init;
- (_Bool)success;
- (struct CGSize)preferredContentSize;
- (_Bool)canBeShownFromSuspendedState;
- (void)showController:(id)arg1 animate:(_Bool)arg2;
- (_Bool)usePopupStyle;
- (_Bool)popupStyleIsModal;

@end
