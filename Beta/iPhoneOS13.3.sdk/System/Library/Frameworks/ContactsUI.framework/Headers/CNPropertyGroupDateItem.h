/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyGroupItem.h>

__attribute__((visibility("hidden")))
@interface CNPropertyGroupDateItem : CNPropertyGroupItem

+ (void)initialize;
+ (id)initialValueForLabel:(id)arg1 group:(id)arg2;
+ (id)emptyValueForLabel:(id)arg1;

- (id)defaultActionURL;
- (id)displayStringForValue:(id)arg1;
- (_Bool)isValidValue:(id)arg1;
- (id)normalizedValue;
- (_Bool)isEquivalentToItem:(id)arg1;
- (id)bestValue:(id)arg1;

@end
