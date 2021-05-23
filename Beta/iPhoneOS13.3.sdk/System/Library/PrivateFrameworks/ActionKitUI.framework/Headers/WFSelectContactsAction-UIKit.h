/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <ActionKit/WFSelectContactsAction.h>

@class NSString;

@interface WFSelectContactsAction (UIKit)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)respondsToSelector:(SEL)arg1;
- (void)contactPicker:(id)arg1 didSelectContactProperties:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;

@end
