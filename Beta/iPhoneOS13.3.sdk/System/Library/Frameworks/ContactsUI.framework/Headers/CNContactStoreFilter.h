/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactFilter.h>

@class NSSet;

@interface CNContactStoreFilter : CNContactFilter

{
    _Bool _isServerFilter;
    NSSet *_groupIdentifiers;
    NSSet *_containerIdentifiers;
}

@property (retain, nonatomic) NSSet *groupIdentifiers;
@property (retain, nonatomic) NSSet *containerIdentifiers;
@property (nonatomic, readonly) _Bool showsEverything;
@property (nonatomic) _Bool isServerFilter;

+ (_Bool)getContainerIdentifiers:(id *)arg1 groupIdentifiers:(id *)arg2 serverFilter:(_Bool *)arg3 fromLegacyDictionary:(id)arg4 contactStore:(id)arg5;
+ (_Bool)getContainerIdentifiers:(id *)arg1 groupIdentifiers:(id *)arg2 serverFilter:(_Bool *)arg3 fromSundanceToOkemoAndAddressBookUIDictionary:(id)arg4 contactStore:(id)arg5;
+ (_Bool)getContainerIdentifiers:(id *)arg1 groupIdentifiers:(id *)arg2 serverFilter:(_Bool *)arg3 fromPreSundanceDictionary:(id)arg4 contactStore:(id)arg5;
+ (id)contactStoreFilterFromPreferencesWithContactStore:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)predicate;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 contactStore:(id)arg2;
- (id)dictionaryRepresentationWithContactStore:(id)arg1;
- (void)addAddressBookUIKeysToDictionaryRepresentation:(id)arg1 withAllContainers:(id)arg2 excludedContainers:(id)arg3 excludedGroups:(id)arg4;
- (_Bool)supportsSections;
- (void)saveToPreferencesWithContactStore:(id)arg1;

@end
