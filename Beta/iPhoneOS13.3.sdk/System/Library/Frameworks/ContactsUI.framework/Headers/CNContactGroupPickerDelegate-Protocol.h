/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/Swift-Protocol.h>

@protocol CNContactGroupPickerDelegate <Swift>

- (unsigned short)policy;
- (unsigned short)alreadyPickedGroups;
- (unsigned short)contactGroupPickerDidCancel: /* Error: Ran out of types for this method. */;
- (unsigned short)contactGroupPickerDidFinish:withGroup: /* Error: Ran out of types for this method. */;

@end
