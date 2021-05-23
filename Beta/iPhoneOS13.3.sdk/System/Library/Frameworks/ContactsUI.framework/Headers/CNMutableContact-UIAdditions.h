/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Contacts/CNMutableContact.h>

@class NSArray;

@interface CNMutableContact (UIAdditions)

@property (copy, nonatomic) NSArray *birthdays;

- (_Bool)hasNonPersistedData;
- (id)addProperties:(id)arg1 excludingProperties:(id)arg2 fromContact:(id)arg3;
- (_Bool)saveContactInStore:(id)arg1 group:(id)arg2 container:(id)arg3 request:(id)arg4;
- (id)addAllPropertiesFromContact:(id)arg1;
- (void)updateContactTypeWithPolicy:(id)arg1;
- (_Bool)saveContactInStore:(id)arg1 group:(id)arg2 container:(id)arg3;
- (void)removePhoto;
- (void)updateImageInfoWithType:(unsigned long long)arg1;

@end
