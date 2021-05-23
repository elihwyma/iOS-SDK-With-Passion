/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyGroupItem.h>

@class CNPhoneNumber;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupPhoneItem : CNPropertyGroupItem

@property (nonatomic, readonly) CNPhoneNumber *phoneNumber;

+ (id)emptyValueForLabel:(id)arg1;

- (id)defaultActionURL;
- (id)displayStringForValue:(id)arg1;
- (id)normalizedValue;
- (id)valueForDisplayString:(id)arg1;
- (id)bestLabel:(id)arg1;

@end
