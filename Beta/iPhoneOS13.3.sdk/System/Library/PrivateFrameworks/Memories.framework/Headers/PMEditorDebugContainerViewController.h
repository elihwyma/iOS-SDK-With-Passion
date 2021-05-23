/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIViewController.h>

@class MiroMemory, PMDebugPickerViewController;

@protocol PMPlayerControlling;

@interface PMEditorDebugContainerViewController : UIViewController

{
    id <PMPlayerControlling> _playerController;
    MiroMemory *_memory;
    unsigned long long _pickerMode;
    PMDebugPickerViewController *_moodPartPicker;
}

@property (retain, nonatomic) PMDebugPickerViewController *moodPartPicker;
@property (weak, nonatomic) id <PMPlayerControlling> playerController;
@property (weak, nonatomic) MiroMemory *memory;
@property (nonatomic) unsigned long long pickerMode;

- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;

@end
