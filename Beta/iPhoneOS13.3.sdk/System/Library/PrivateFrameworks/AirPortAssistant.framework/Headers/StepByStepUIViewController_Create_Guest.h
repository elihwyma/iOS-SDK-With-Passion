/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/StepByStepUIViewController.h>

@class NSString;

@interface StepByStepUIViewController_Create_Guest : StepByStepUIViewController

{
    NSString *_wifiName;
    NSString *_wifiPassword;
    _Bool _guestNetworkEnabled;
    int _guestNetSecMode;
}

@property (copy, nonatomic) NSString *wifiName;
@property (copy, nonatomic) NSString *wifiPassword;
@property (nonatomic) _Bool guestNetworkEnabled;
@property (nonatomic) int guestNetSecMode;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4;
- (void)switchTouchedInCellAtIndexPath:(id)arg1 forSwitchIndex:(unsigned long long)arg2 isOn:(_Bool)arg3;
- (void)textFieldDidChangeAtIndexPath:(id)arg1;
- (void)setupInitialTableHeaderConfiguration;
- (void)setupTable;
- (void)updateTable;
- (void)validateAndUpdateNextButton;
- (_Bool)validateAndSetValues;
- (void)addGuestNetworkIsEnabledSection;
- (void)addGuestNetworkPasswordSection;

@end
