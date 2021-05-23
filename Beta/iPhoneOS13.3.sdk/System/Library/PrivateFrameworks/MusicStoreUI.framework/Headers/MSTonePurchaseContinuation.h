/*
 Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

#import <SUPurchaseContinuation.h>

@class CNContactPickerViewController, NSString, UIActionSheet, UIAlertView;

@interface MSTonePurchaseContinuation : SUPurchaseContinuation

{
    UIActionSheet *_actionSheet;
    UIAlertView *_alertView;
    CNContactPickerViewController *_contactPicker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)actionSheetCancel:(id)arg1;
- (id)initWithPurchase:(id)arg1;
- (void)_dismissContactPicker;
- (void)_destroyActionSheet;
- (void)_destroyAlertView;
- (id)_copyAllowedToneStyles;
- (void)_showPeoplePicker;
- (void)_pickAssigneeToneStyle;

@end
