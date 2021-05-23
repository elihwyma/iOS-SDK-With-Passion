/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertySimpleEditingCell.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNSocialProfile, NSString;

__attribute__((visibility("hidden")))
@interface CNPropertySocialProfileEditingCell : CNPropertySimpleEditingCell <Swift>

@property (nonatomic, readonly) CNSocialProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (void)labelButtonClicked:(id)arg1;

@end
