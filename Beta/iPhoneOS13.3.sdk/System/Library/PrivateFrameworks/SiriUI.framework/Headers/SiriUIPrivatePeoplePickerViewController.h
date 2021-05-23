/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUISnippetViewController.h>

@class NSString, SAABPersonPicker, SiriUIObjectPickerViewController;

@interface SiriUIPrivatePeoplePickerViewController : SiriUISnippetViewController

{
    SAABPersonPicker *_picker;
    SiriUIObjectPickerViewController *_pickerController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (id)_pickerController;
- (double)desiredHeightForWidth:(double)arg1;
- (void)_showPicker:(id)arg1;
- (id)viewControllerForPickerPresentation:(id)arg1;
- (void)pickerViewController:(id)arg1 willPresentPicker:(id)arg2;
- (void)pickerViewController:(id)arg1 willDismissPicker:(id)arg2;
- (void)pickerViewController:(id)arg1 didSelectObject:(id)arg2 fromPicker:(id)arg3;
- (id)initWithSnippet:(id)arg1;
- (_Bool)usePlatterStyle;
- (Class)footerViewClass;
- (void)configureReusableFooterView:(id)arg1;
- (double)desiredHeightForFooterView;

@end
