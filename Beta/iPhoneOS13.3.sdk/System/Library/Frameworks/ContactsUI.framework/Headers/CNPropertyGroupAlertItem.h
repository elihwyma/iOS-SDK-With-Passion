/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyGroupItem.h>

__attribute__((visibility("hidden")))
@interface CNPropertyGroupAlertItem : CNPropertyGroupItem

+ (id)emptyValueForLabel:(id)arg1;

- (id)description;
- (id)labeledValue;
- (id)displayLabel;
- (void)setLabeledValue:(id)arg1;
- (id)displayStringForValue:(id)arg1;
- (_Bool)isValidValue:(id)arg1;
- (id)replacementForInvalidValue:(id)arg1;
- (_Bool)canRemove;
- (_Bool)isEquivalentToItem:(id)arg1 whenEditing:(_Bool)arg2;
- (id)_toneManager;
- (id)_vibrationManager;

@end
