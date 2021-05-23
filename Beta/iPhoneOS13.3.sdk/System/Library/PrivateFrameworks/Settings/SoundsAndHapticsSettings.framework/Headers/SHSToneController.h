/*
 Image: /System/Library/PrivateFrameworks/Settings/SoundsAndHapticsSettings.framework/SoundsAndHapticsSettings
 */

#import <Preferences/PSViewController.h>

@class NSString, TKTonePickerViewController, TKVibrationPickerViewController;

@interface SHSToneController : PSViewController

{
    TKTonePickerViewController *_tonePickerViewController;
    TKVibrationPickerViewController *_vibrationPickerViewController;
}

@property (retain, nonatomic) TKTonePickerViewController *tonePickerViewController;
@property (retain, nonatomic) TKVibrationPickerViewController *vibrationPickerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setSpecifier:(id)arg1;
- (void)_handleAlertOverridePolicyDidChangeNotification:(id)arg1;
- (void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
- (void)tonePickerViewController:(id)arg1 willPresentVibrationPickerViewController:(id)arg2;
- (void)tonePickerViewController:(id)arg1 didDismissVibrationPickerViewController:(id)arg2;
- (void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2;
- (id)_defaultToneIdentifierForTonePickerWithAlertType:(long long)arg1 topic:(id)arg2;
- (void)_insertTonePickerView;
- (void)_updateReloadSpecifierInParentController;
- (id)_defaultVibrationIdentifierForVibrationPickerWithAlertType:(long long)arg1 topic:(id)arg2;

@end
