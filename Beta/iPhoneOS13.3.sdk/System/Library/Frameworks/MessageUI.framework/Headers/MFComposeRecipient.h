/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteResult, CNContact, MFComposeRecipientOriginContext, NSArray, NSString;

@interface MFComposeRecipient : NSObject

{
    void *_record;
    int _recordID;
    int _property;
    int _identifier;
    NSString *_address;
    NSString *_label;
    NSString *_countryCode;
    NSString *_displayString;
    unsigned long long _sourceType;
    NSArray *_cachedCompleteMatches;
    NSArray *_cachedMatchedStrings;
    NSArray *_cachedSortedMembers;
    CNAutocompleteResult *_autocompleteResult;
    CNContact *_contact;
    NSString *_contactIdentifier;
    NSString *_valueIdentifier;
    NSString *_compositeName;
    NSString *_unlocalizedLabel;
    MFComposeRecipientOriginContext *_originContext;
    unsigned long long _kind;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;
@property (retain, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSString *displayString;
@property (copy, nonatomic) NSString *valueIdentifier;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *unlocalizedLabel;
@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) CNAutocompleteResult *autocompleteResult;
@property (retain, nonatomic) MFComposeRecipientOriginContext *originContext;
@property (nonatomic, readonly, getter=isRemovableFromSearchResults) _Bool removableFromSearchResults;
@property (nonatomic, readonly) _Bool showsAccessoryButton;
@property (nonatomic, readonly) _Bool isGroup;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic, readonly) _Bool isSuggestedRecipient;
@property (nonatomic, readonly) _Bool isDirectoryServerResult;
@property (copy, nonatomic) NSString *address;
@property (nonatomic, readonly) NSString *normalizedAddress;
@property (nonatomic, readonly) NSString *commentedAddress;
@property (nonatomic, readonly) NSString *uncommentedAddress;
@property (nonatomic, readonly) unsigned long long kind;
@property (nonatomic, readonly) NSString *placeholderName;
@property (nonatomic, readonly) NSString *compositeName;
@property (nonatomic, readonly) NSString *shortName;

+ (_Bool)supportsSecureCoding;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)recipientWithRecord:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
+ (id)mf_recipientWithGALResult:(id)arg1;
+ (id)recipientWithProperty:(int)arg1 address:(id)arg2;
+ (id)_requiredKeyDescriptors;
+ (id)composeRecipientWithAutocompleteResult:(id)arg1;
+ (id)recipientWithRecord:(void *)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)identifier;
- (void)setIdentifier:(int)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (int)recordID;
- (id)children;
- (int)property;
- (void *)record;
- (id)labeledValueIdentifier;
- (id)initWithContact:(id)arg1 address:(id)arg2 kind:(unsigned long long)arg3;
- (id)initWithRecord:(void *)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4 address:(id)arg5;
- (id)_unformattedAddress;
- (void)setRecord:(void *)arg1 recordID:(int)arg2 identifier:(int)arg3;
- (id)sortedChildren;
- (id)childrenWithCompleteMatches;
- (_Bool)wasCompleteMatch;
- (id)completelyMatchedAttributedStrings;
- (id)preferredSendingAddress;

@end
