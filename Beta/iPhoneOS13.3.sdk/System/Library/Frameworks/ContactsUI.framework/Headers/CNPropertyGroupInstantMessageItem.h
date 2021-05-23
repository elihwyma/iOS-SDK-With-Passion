/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyGroupItem.h>

@class CNInstantMessageAddress;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupInstantMessageItem : CNPropertyGroupItem

@property (nonatomic, readonly) CNInstantMessageAddress *imAddress;

+ (id)emptyValueForLabel:(id)arg1;

- (id)defaultActionURL;
- (id)displayLabel;
- (id)displayStringForValue:(id)arg1;
- (_Bool)isEquivalentToItem:(id)arg1;
- (id)valueForDisplayString:(id)arg1;
- (id)editingStringValue;

@end
