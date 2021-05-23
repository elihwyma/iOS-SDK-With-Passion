/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyGroupItem.h>

@class CNSocialProfile;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupSocialProfileItem : CNPropertyGroupItem

@property (nonatomic, readonly) CNSocialProfile *profile;

+ (id)emptyValueForLabel:(id)arg1;

- (id)defaultActionURL;
- (id)displayLabel;
- (id)displayStringForValue:(id)arg1;
- (_Bool)isEquivalentToItem:(id)arg1;
- (id)valueForDisplayString:(id)arg1;
- (id)editingStringValue;

@end
