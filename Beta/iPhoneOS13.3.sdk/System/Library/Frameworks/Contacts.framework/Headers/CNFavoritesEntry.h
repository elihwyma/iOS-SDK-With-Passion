/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContact, CNContactProperty, CNContactStore, NSString;

@interface CNFavoritesEntry : NSObject

{
    NSString *_name;
    _Bool _dirty;
    int _abUid;
    int _abIdentifier;
    int _oldAbUid;
    NSString *_actionType;
    NSString *_bundleIdentifier;
    long long _type;
    CNContactStore *_contactStore;
    NSString *_label;
    NSString *_value;
    NSString *_propertyKey;
    NSString *_abDatabaseUUID;
    NSString *_originalName;
    CNContact *_contact;
    NSString *_labeledValueIdentifier;
    NSString *_actionChannel;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSString *propertyKey;
@property (retain, nonatomic) NSString *abDatabaseUUID;
@property (retain, nonatomic) NSString *actionType;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *originalName;
@property (nonatomic) long long type;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSString *labeledValueIdentifier;
@property (nonatomic) int abUid;
@property (nonatomic) int abIdentifier;
@property (retain, nonatomic) NSString *actionChannel;
@property (nonatomic) int oldAbUid;
@property (nonatomic) _Bool dirty;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) CNContactProperty *contactProperty;

+ (void)initialize;
+ (id)contactFormatter;
+ (id)valueStringFromSocialProfile:(id)arg1;
+ (id)valueStringFromInstantMessageAddress:(id)arg1;
+ (id)socialProfileForFavoritesEntryValue:(id)arg1;
+ (id)instantMessageAddressForFavoritesEntryValue:(id)arg1;
+ (id)labeledValueValueForFavoritesEntryValue:(id)arg1 propertyKey:(id)arg2;
+ (id)favoritesEntryValueForLabeledValueValue:(id)arg1 propertyKey:(id)arg2;
+ (id)descriptorsForRequiredKeysForPropertyKey:(id)arg1;
+ (id)createLabeledValueForFavoritesEntryValue:(id)arg1 label:(id)arg2 iOSLegacyIdentifier:(int)arg3 propertyKey:(id)arg4;
+ (_Bool)favoritesEntryValueForLabeledValueValue:(id)arg1 propertyKey:(id)arg2 isEqualToValue:(id)arg3;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)dictionaryRepresentation;
- (id)_initWithContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 entryType:(long long)arg4 actionType:(id)arg5 bundleIdentifier:(id)arg6 store:(id)arg7;
- (void)_convertFromEntryType:(long long)arg1 toActionType:(id *)arg2 bundleIdentifier:(id *)arg3;
- (int)_entryTypeForActionType:(id)arg1 bundleIdentifier:(id)arg2;
- (struct CNPair *)rematch;
- (void)resetContactMatch;
- (void)applyChangeRecord:(id)arg1;
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(long long)arg4;
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(long long)arg4 store:(id)arg5;
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5 store:(id)arg6;
- (id)initWithDictionaryRepresentation:(id)arg1 store:(id)arg2;
- (void)dictionaryRepresentation:(id *)arg1 isDirty:(_Bool *)arg2;
- (_Bool)rematchWithContacts;
- (_Bool)rematchWithGeminiManager:(id)arg1;

@end
