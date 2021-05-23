/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>

@interface StepByStepUIViewController_ExtendWirelessNetworkChoice : StepByStepUIViewController_DevicePicker

{
    int _selectorChoice;
}

- (void)viewWillAppear:(_Bool)arg1;
- (void)stepByStepUpdateProgress:(id)arg1 forState:(int)arg2;
- (void)touchInCellAtIndexPath:(id)arg1;
- (void)setupHeaderAndFooter;
- (void)setupDevices;
- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (void)updateNavigationButtons;
- (void)selectedDeviceUpdated;
- (_Bool)canBeExtendedWithDWDS;
- (void)addBrowsedRecords:(id)arg1 toDestList:(id)arg2;

@end
