/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <BarcodeSupport/BCSActionPickerItem.h>

@class CNContact, DDAction, NSString;

@interface BCSDataDetectionActionPickerItem : BCSActionPickerItem

{
    DDAction *_ddAction;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) NSString *icsString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)label;
- (void)performAction;
- (void)action:(id)arg1 didDismissAlertController:(id)arg2;
- (id)actionURL;
- (_Bool)isCopyActionItem;
- (_Bool)shouldDismissAlertWhenActionIsTaken;
- (id)targetApplicationBundleIdentifier;
- (id)initWithAction:(id)arg1 ddAction:(id)arg2;

@end
