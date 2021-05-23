/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIViewController.h>

@class EKCalendarShareePicker, NSArray, NSString;

@protocol EKShareePickerViewControllerDelegate;

@interface EKShareePickerViewController : UIViewController

{
    EKCalendarShareePicker *_picker;
    id <EKShareePickerViewControllerDelegate> _delegate;
}

@property (copy, nonatomic, readonly) NSArray *sharees;
@property (weak, nonatomic) id <EKShareePickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_shouldForwardViewWillTransitionToSize;

- (void)cancel;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void)setSearchAccountID:(id)arg1;
- (void)setSharees:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 calendar:(id)arg2;
- (void)add;
- (id)_createShareeFromRecipient:(id)arg1;
- (id)_createRecipientFromSharee:(id)arg1;
- (id)_shareeFromRecipient:(id)arg1;
- (id)_recipientFromSharee:(id)arg1;
- (void)eventAttendeePicker:(id)arg1 cacheValidationStatus:(unsigned long long)arg2 forAddress:(id)arg3;
- (unsigned long long)eventAttendeePicker:(id)arg1 getValidationStatusForAddress:(id)arg2;

@end
