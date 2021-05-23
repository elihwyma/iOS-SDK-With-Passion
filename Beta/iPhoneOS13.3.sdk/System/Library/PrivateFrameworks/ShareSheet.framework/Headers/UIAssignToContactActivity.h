/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/UIActivity.h>

@class CNContact, CNContactPickerViewController, NSString, UIImage, UIImagePickerController;

@interface UIAssignToContactActivity : UIActivity

{
    UIImage *_image;
    CNContactPickerViewController *_peoplePicker;
    CNContact *_person;
    UIImagePickerController *_imagePickerController;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) CNContactPickerViewController *peoplePicker;
@property (retain, nonatomic) CNContact *person;
@property (retain, nonatomic) UIImagePickerController *imagePickerController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)_xpcAttributes;
+ (_Bool)_isCapabilityBasedActivity;

- (id)activityType;
- (void)_cleanup;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)_systemImageName;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityViewController;
- (void)_willPresentAsFormSheet;
- (id)_embeddedActivityViewController;

@end
