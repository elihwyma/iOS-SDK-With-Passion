/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>

@class NSString;

@interface StepByStepUIViewController_ExtendWireless_Config : StepByStepUIViewController_DevicePicker

{
    NSString *connectionType;
    NSString *unlocalizedStatusString;
    NSString *personalizedBaseName;
    _Bool isReallyJoin;
}

@property (retain, nonatomic) NSString *personalizedBaseName;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4;
- (void)validateAndUpdateNextButton;
- (void)setupAndShowEditableBaseStationName;
- (void)setupHeaderAndFooter;
- (void)setupDevices;
- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (void)primaryActionSelected:(_Bool)arg1;
- (void)updateNavigationButtons;
- (void)selectedDeviceUpdated;

@end
