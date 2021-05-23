/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteResult, CNComposeRecipientOriginContext, CNContact, NSArray, NSPersonNameComponents, NSString;

@interface CNComposeRecipient : NSObject

{
    _Bool _isMemberOfGroup;
    CNComposeRecipientOriginContext *_originContext;
    NSString *_address;
    unsigned long long _kind;
    NSString *_countryCode;
    NSArray *_cachedCompleteMatches;
    NSArray *_cachedMatchedStrings;
    NSArray *_cachedSortedMembers;
    NSString *_compositeName;
    NSString *_contactIdentifier;
    NSString *_valueIdentifier;
    NSString *_unlocalizedLabel;
    NSString *_inputAddress;
    CNContact *_contact;
    NSString *_label;
    NSString *_displayString;
    CNAutocompleteResult *_autocompleteResult;
    NSPersonNameComponents *_nameComponents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;
@property (retain, nonatomic) NSArray *cachedCompleteMatches;
@property (retain, nonatomic) NSArray *cachedMatchedStrings;
@property (retain, nonatomic) NSArray *cachedSortedMembers;
@property (copy, nonatomic) NSString *compositeName;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSString *valueIdentifier;
@property (copy, nonatomic) NSString *unlocalizedLabel;
@property (copy, nonatomic) NSString *inputAddress;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) _Bool isMemberOfGroup;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *displayString;
@property (retain, nonatomic) CNAutocompleteResult *autocompleteResult;
@property (retain, nonatomic) NSPersonNameComponents *nameComponents;
@property (retain, nonatomic) CNComposeRecipientOriginContext *originContext;
@property (nonatomic, readonly, getter=isRemovableFromSearchResults) _Bool removableFromSearchResults;
@property (nonatomic, readonly) _Bool showsAccessoryButton;
@property (nonatomic, readonly) _Bool isGroup;
@property (nonatomic, readonly) unsigned long long sourceType;
@property (nonatomic, readonly) _Bool isSuggestedRecipient;
@property (nonatomic, readonly) _Bool showsChevronButton;
@property (nonatomic, readonly) _Bool isDirectoryServerResult;
@property (nonatomic, readonly) NSString *normalizedAddress;
@property (nonatomic, readonly) NSString *commentedAddress;
@property (nonatomic, readonly) NSString *uncommentedAddress;
@property (nonatomic, readonly) unsigned long long kind;
@property (nonatomic, readonly) NSString *placeholderName;
@property (nonatomic, readonly) NSString *shortName;

+ (_Bool)supportsSecureCoding;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)os_log;
+ (id)descriptorsForRequiredKeysForContact;
+ (id)composeRecipientWithAutocompleteResult:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (id)children;
- (id)labeledValueIdentifier;
- (id)initWithContact:(id)arg1 address:(id)arg2 kind:(unsigned long long)arg3;
- (id)_unformattedAddress;
- (id)sortedChildren;
- (id)childrenWithCompleteMatches;
- (_Bool)wasCompleteMatch;
- (id)completelyMatchedAttributedStrings;
- (id)preferredSendingAddress;
- (id)initWithContact:(id)arg1 address:(id)arg2 displayString:(id)arg3 kind:(unsigned long long)arg4;
- (id)rawDisplayString;

@end
