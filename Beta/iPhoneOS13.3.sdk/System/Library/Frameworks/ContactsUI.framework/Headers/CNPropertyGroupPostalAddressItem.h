/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyGroupItem.h>

@class CNPostalAddress;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupPostalAddressItem : CNPropertyGroupItem

@property (nonatomic, readonly) CNPostalAddress *address;

+ (id)emptyValueForLabel:(id)arg1;

- (id)defaultActionURL;
- (id)displayStringForValue:(id)arg1;
- (_Bool)isEquivalentToItem:(id)arg1 whenEditing:(_Bool)arg2;
- (id)normalizedValue;
- (id)bestValue:(id)arg1;
- (_Bool)_isMinimalAddress:(id)arg1;

@end
