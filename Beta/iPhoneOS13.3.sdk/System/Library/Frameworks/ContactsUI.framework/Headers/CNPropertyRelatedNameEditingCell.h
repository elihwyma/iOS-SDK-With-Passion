/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertySimpleEditingCell.h>

#import <ContactsUI/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNPropertyRelatedNameEditingCell : CNPropertySimpleEditingCell <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)performAccessoryAction;

@end
