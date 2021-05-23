/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUIObjectPickerViewController.h>

@class NSString, UIViewController;

@interface SiriUIPersonPickerViewController : SiriUIObjectPickerViewController

{
    UIViewController *_presentingViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)_dismissPicker;
- (void)showPicker:(id)arg1;
- (id)_pickerResponseForPerson:(id)arg1;

@end
