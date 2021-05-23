/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNCardGroupItem.h>

@class CNCardPropertyGroup, CNContact, CNContactProperty, CNContactStore, CNLabeledValue, CNMutableContact, CNUIContactsEnvironment, NSArray, NSString, NSURL;

@protocol CNPropertyGroupItemDelegate;

@interface CNPropertyGroupItem : CNCardGroupItem

{
    _Bool _allowsIMessage;
    _Bool _allowsPhone;
    _Bool _allowsTTY;
    _Bool _allowsEmail;
    CNLabeledValue *_labeledValue;
    CNCardPropertyGroup *_group;
    NSString *_property;
    CNContact *_contact;
    CNContactStore *_contactStore;
    id <CNPropertyGroupItemDelegate> _delegate;
    CNLabeledValue *_originalLabeledValue;
    CNUIContactsEnvironment *_environment;
    unsigned long long _policyFlags;
}

@property (retain, nonatomic) NSString *property;
@property (retain, nonatomic) CNLabeledValue *labeledValue;
@property (retain, nonatomic) CNLabeledValue *originalLabeledValue;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic, readonly) CNMutableContact *mutableContact;
@property (nonatomic, readonly) CNUIContactsEnvironment *environment;
@property (nonatomic) unsigned long long policyFlags;
@property (nonatomic, readonly) CNContactProperty *contactProperty;
@property (weak, nonatomic, readonly) CNCardPropertyGroup *group;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (weak, nonatomic) id <CNPropertyGroupItemDelegate> delegate;
@property (nonatomic) _Bool allowsIMessage;
@property (nonatomic) _Bool allowsPhone;
@property (nonatomic) _Bool allowsTTY;
@property (nonatomic) _Bool allowsEmail;
@property (nonatomic, readonly) id normalizedValue;
@property (nonatomic, readonly) NSString *displayValue;
@property (nonatomic, readonly) NSString *displayLabel;
@property (nonatomic, readonly) NSString *editingStringValue;
@property (nonatomic, readonly) NSString *placeholderString;
@property (weak, nonatomic, readonly) NSArray *standardLabels;
@property (weak, nonatomic, readonly) NSArray *extendedLabels;
@property (weak, nonatomic, readonly) NSArray *promotedExtendedLabels;
@property (nonatomic, readonly) NSURL *defaultActionURL;
@property (nonatomic, readonly) _Bool modified;
@property (nonatomic, readonly, getter=isSuggested) _Bool suggested;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (nonatomic, readonly, getter=isReadonly) _Bool readonly;
@property (nonatomic, readonly) _Bool supportsLabel;
@property (nonatomic, readonly) _Bool canRemove;
@property (nonatomic, readonly, getter=isFavorite) _Bool favorite;

+ (Class)classForProperty:(id)arg1;
+ (id)initialValueForLabel:(id)arg1 group:(id)arg2;
+ (id)emptyValueForLabel:(id)arg1;
+ (void)deleteCoreRecentsEntriesMatchingProperty:(id)arg1 recentsManager:(id)arg2;
+ (id)propertyGroupItemWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3;
+ (id)propertyGroupItemWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3;
+ (id)propertyGroupItemWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3 environment:(id)arg4;
+ (id)propertyGroupItemWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3 environment:(id)arg4;
+ (id)newPropertyGroupItemForProperty:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithGroup:(id)arg1;
- (id)contactViewCache;
- (void)updateLabeledValueWithLabel:(id)arg1;
- (void)confirmSuggestion;
- (id)displayStringForValue:(id)arg1;
- (_Bool)isValidValue:(id)arg1;
- (id)replacementForInvalidValue:(id)arg1;
- (_Bool)isEquivalentToItem:(id)arg1 whenEditing:(_Bool)arg2;
- (_Bool)isEquivalentToItem:(id)arg1;
- (id)bestValue:(id)arg1;
- (id)valueForDisplayString:(id)arg1;
- (id)initWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3 environment:(id)arg4;
- (id)initWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3 environment:(id)arg4;
- (int)anyContactLegacyIdentifier;
- (int)labeledValueMultiValueIdentifierForChosenSourceContact;
- (_Bool)isFavoriteOfActionType:(id)arg1 bundleIdentifier:(id)arg2;
- (id)bestLabel:(id)arg1;
- (void)mergeItem:(id)arg1;
- (id)updateWithLabel:(id)arg1 value:(id)arg2;
- (void)updateLabeledValueWithValue:(id)arg1;
- (_Bool)isValidIdentifier:(id)arg1;
- (void)_removeSuggestion;
- (void)rejectSuggestion;
- (void)saveChangesImmediately:(_Bool)arg1;
- (_Bool)shouldCreateNewMeContactToSaveChangesTo;

@end
