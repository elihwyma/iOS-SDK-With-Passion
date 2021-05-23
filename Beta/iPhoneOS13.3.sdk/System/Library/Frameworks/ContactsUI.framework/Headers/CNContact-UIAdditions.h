/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Contacts/CNContact.h>

@class NSArray, NSData, NSString;

@interface CNContact (UIAdditions)

@property (nonatomic, readonly, getter=isUnknown) _Bool unknown;
@property (nonatomic, readonly) _Bool supportsInstantMessageService;
@property (nonatomic, readonly) NSString *personName;
@property (nonatomic, readonly) NSArray *birthdays;
@property (nonatomic, readonly) NSData *vCardRepresentation;
@property (nonatomic, readonly) _Bool hasNonPersistedData;
@property (nonatomic, readonly) NSArray *allLinkedIdentifiers;

+ (unsigned long long)rawImageTypeForIdentifier:(id)arg1;
+ (id)stringIdentifierForImageType:(unsigned long long)arg1;
+ (_Bool)suggestionsEnabled;
+ (_Bool)suggestionsShownInEditMode;
+ (_Bool)quickActionsEnabled;
+ (_Bool)geminiEnabled;
+ (_Bool)contactRemindersEnabled;
+ (_Bool)settableMeCardEnabled;
+ (_Bool)downtimeWhitelistUIEnabled;
+ (_Bool)nameAndPhotoSharingDebugUIEnabled;
+ (id)descriptorForAllUIKeys;
+ (id)contactWithStateRestorationCoder:(id)arg1 store:(id)arg2 keys:(id)arg3;
+ (id)multiValuePropertiesSupportingPredicateValidation;

- (id)validPropertiesByEvaluatingPredicate:(id)arg1 onMultiValueProperties:(id)arg2;
- (unsigned long long)rawImageType;
- (_Bool)hasImageOfType:(unsigned long long)arg1;

@end
