/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyGroupItem.h>

@class CNContactRelation;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupContactRelationItem : CNPropertyGroupItem

@property (nonatomic, readonly) CNContactRelation *contactRelation;

+ (id)emptyValueForLabel:(id)arg1;

- (id)displayStringForValue:(id)arg1;
- (id)normalizedValue;
- (id)valueForDisplayString:(id)arg1;

@end
