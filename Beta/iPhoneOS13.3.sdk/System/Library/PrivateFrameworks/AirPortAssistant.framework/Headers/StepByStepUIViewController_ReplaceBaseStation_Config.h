/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>

@class NSString, UILabel, UIView;

@interface StepByStepUIViewController_ReplaceBaseStation_Config : StepByStepUIViewController_DevicePicker

{
    UIView *justTextContainerView2;
    UILabel *justTextLabel2;
    NSString *personalizedBaseName;
}

@property (retain, nonatomic) UIView *justTextContainerView2;
@property (retain, nonatomic) NSString *personalizedBaseName;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4;
- (void)validateAndUpdateNextButton;
- (void)setupHeaderAndFooter;
- (void)setupDevices;
- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (void)primaryActionSelected:(_Bool)arg1;
- (void)prepareParams;
- (void)updateNavigationButtons;
- (void)selectedDeviceUpdated;
- (void)setupEditableBaseStationName;

@end
