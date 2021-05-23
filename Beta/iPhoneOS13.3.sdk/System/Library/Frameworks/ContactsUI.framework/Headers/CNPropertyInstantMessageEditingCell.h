/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertySimpleEditingCell.h>

@class CNInstantMessageAddress, NSString;

__attribute__((visibility("hidden")))
@interface CNPropertyInstantMessageEditingCell : CNPropertySimpleEditingCell

@property (nonatomic, readonly) CNInstantMessageAddress *imAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (void)labelButtonClicked:(id)arg1;

@end
