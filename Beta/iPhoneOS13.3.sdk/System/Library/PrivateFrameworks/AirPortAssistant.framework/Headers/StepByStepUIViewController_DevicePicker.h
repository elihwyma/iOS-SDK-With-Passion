/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/StepByStepUIViewController.h>

@class NSArray, NSDictionary, NSString, RecommendationActionController;

@interface StepByStepUIViewController_DevicePicker : StepByStepUIViewController

{
    NSDictionary *_selectedDevice;
    NSDictionary *_sourceNetwork;
    NSDictionary *_sourceBase;
    NSDictionary *_targetBase;
    NSArray *sortedDevices;
    NSString *connectionMedium;
    RecommendationActionController *actionController;
    _Bool _showSingleBaseTopo;
    _Bool showFullList;
}

@property (retain, nonatomic) NSArray *sortedDevices;
@property (nonatomic) NSString *connectionMedium;
@property (retain, nonatomic) RecommendationActionController *actionController;

- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)showMoreOptions;
- (void)touchInCellAtIndexPath:(id)arg1;
- (id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned long long)arg2 inCellWithTag:(long long)arg3;
- (void)setupPickerTable;
- (void)updateSelections;
- (id)pickerContent;

@end
