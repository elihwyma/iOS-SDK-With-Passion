/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUInstructionsTableViewController.h>

@class HFCharacteristicTriggerBuilder, HUCharacteristicTriggerServicePickerContentViewController;

@protocol HUTriggerEditorDelegate;

@interface HUCharacteristicTriggerServicePickerViewController : HUInstructionsTableViewController

@property (nonatomic, readonly) HUCharacteristicTriggerServicePickerContentViewController *servicePickerContentViewController;
@property (nonatomic, readonly) HFCharacteristicTriggerBuilder *characteristicTriggerBuilder;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) unsigned long long source;
@property (weak, nonatomic) id <HUTriggerEditorDelegate> delegate;

+ (_Bool)adoptsDefaultGridLayoutMargins;
+ (_Bool)canPickServicesFromSource:(unsigned long long)arg1 home:(id)arg2;
+ (unsigned long long)sourceForCharacteristicTriggerBuilder:(id)arg1;

- (void)viewDidLoad;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (id)initWithCharacteristicTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 source:(unsigned long long)arg3 delegate:(id)arg4;
- (id)initWithInstructionsItem:(id)arg1 contentViewController:(id)arg2;

@end
