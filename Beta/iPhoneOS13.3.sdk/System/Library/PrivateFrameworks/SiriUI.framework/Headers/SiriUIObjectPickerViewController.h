/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIViewController.h>

@class SAUIDomainObjectPicker;

@protocol SiriUIObjectPickerViewControllerDelegate;

@interface SiriUIObjectPickerViewController : UIViewController

{
    id <SiriUIObjectPickerViewControllerDelegate> _pickerDelegate;
    SAUIDomainObjectPicker *_picker;
}

@property (nonatomic, readonly, getter=_picker) SAUIDomainObjectPicker *picker;
@property (weak, nonatomic) id <SiriUIObjectPickerViewControllerDelegate> pickerDelegate;

+ (id)pickerControllerWithPicker:(id)arg1;

- (void)showPicker:(id)arg1;
- (id)initWithPicker:(id)arg1;

@end
