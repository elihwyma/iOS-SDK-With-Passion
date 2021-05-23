/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>

@class NSString;

@interface StepByStepUIViewController_Join_Config : StepByStepUIViewController_DevicePicker

{
    NSString *personalizedBaseName;
    unsigned int productID;
    int deviceKind;
    _Bool supportsSpruce;
}

@property (retain, nonatomic) NSString *personalizedBaseName;

- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)showMoreOptions;
- (_Bool)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4;
- (void)textFieldDidChangeAtIndexPath:(id)arg1;
- (void)syncTopoUIForTarget:(id)arg1 andSource:(id)arg2 andNetwork:(id)arg3 connectionType:(id)arg4;
- (void)setupTable;
- (void)validateAndUpdateNextButton;
- (void)setupHeaderAndFooter;
- (void)setupDevices;
- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (void)primaryActionSelected:(_Bool)arg1;
- (void)prepareParams;
- (void)updateNavigationButtons;
- (void)selectedDeviceUpdated;
- (_Bool)shouldEnableNextButton;
- (void)setupEditableBaseStationName;

@end
