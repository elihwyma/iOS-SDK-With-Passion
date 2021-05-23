/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/StepByStepUIViewController.h>

@class NSString, RecommendationActionController;

@interface StepByStepUIViewController_Create_Config : StepByStepUIViewController

{
    NSString *_wifiName;
    NSString *_personalizedBaseName;
    NSString *_basePassword;
    NSString *_basePasswordVerify;
    NSString *_wifiPassword;
    NSString *_wifiPasswordVerify;
    NSString *_diskPassword;
    NSString *_diskPasswordVerify;
    _Bool useSinglePassword;
    _Bool hasDisk;
    _Bool useDifferentDiskPassword;
    RecommendationActionController *actionController;
}

@property (copy, nonatomic) NSString *wifiName;
@property (copy, nonatomic) NSString *personalizedBaseName;
@property (copy, nonatomic) NSString *basePassword;
@property (copy, nonatomic) NSString *basePasswordVerify;
@property (copy, nonatomic) NSString *wifiPassword;
@property (copy, nonatomic) NSString *wifiPasswordVerify;
@property (copy, nonatomic) NSString *diskPassword;
@property (copy, nonatomic) NSString *diskPasswordVerify;
@property (nonatomic) _Bool useSinglePassword;
@property (nonatomic) _Bool hasDisk;
@property (nonatomic) _Bool useDifferentDiskPassword;
@property (retain, nonatomic) RecommendationActionController *actionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)touchInCellAtIndexPath:(id)arg1;
- (_Bool)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4;
- (void)switchTouchedInCellAtIndexPath:(id)arg1 forSwitchIndex:(unsigned long long)arg2 isOn:(_Bool)arg3;
- (void)textFieldDidChangeAtIndexPath:(id)arg1;
- (void)setupInitialTableHeaderConfiguration;
- (void)setupTable;
- (void)updateTable;
- (void)validateAndUpdateNextButton;
- (_Bool)validateAndSetValues;
- (void)updateTableForSinglePassword;
- (void)updateTableForMultiplePasswords;
- (void)updateSinglePasswordSwitchExplanation:(_Bool)arg1;
- (void)addDiskPasswordSection;

@end
