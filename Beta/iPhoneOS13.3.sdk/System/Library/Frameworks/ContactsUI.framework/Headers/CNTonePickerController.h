/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UINavigationController.h>

@class TKTonePickerViewController;

@protocol CNPickerControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNTonePickerController : UINavigationController

{
    TKTonePickerViewController *_tonePicker;
}

@property (retain, nonatomic) TKTonePickerViewController *tonePicker;
@property (weak, nonatomic) id <CNPickerControllerDelegate> delegate;

- (id)initWithAlertType:(long long)arg1 activityAlert:(id)arg2;
- (void)doneButton:(id)arg1;
- (void)cancelButton:(id)arg1;

@end
