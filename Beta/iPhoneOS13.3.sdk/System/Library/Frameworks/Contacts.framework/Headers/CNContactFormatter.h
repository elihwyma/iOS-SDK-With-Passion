/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSFormatter.h>

#import <Contacts/Swift-Protocol.h>

@class NSPersonNameComponentsFormatter;

@interface CNContactFormatter : NSFormatter <Swift>

{
    _Bool _ignoresOrganization;
    _Bool _ignoresNickname;
    _Bool _emphasizesPrimaryNameComponent;
    NSPersonNameComponentsFormatter *_nameFormatter;
    long long _style;
    unsigned long long _fallbackStyle;
    long long _sortOrder;
}

@property (retain, readonly) NSPersonNameComponentsFormatter *nameFormatter;
@property (nonatomic) _Bool ignoresOrganization;
@property (nonatomic) _Bool ignoresNickname;
@property (nonatomic) unsigned long long fallbackStyle;
@property (nonatomic) _Bool emphasizesPrimaryNameComponent;
@property (nonatomic) long long sortOrder;
@property (nonatomic) long long style;

+ (_Bool)supportsSecureCoding;
+ (id)descriptorForRequiredKeysForStyle:(long long)arg1;
+ (id)stringFromContact:(id)arg1 style:(long long)arg2;
+ (_Bool)styleSupportsFallBackToFullNameStyle:(long long)arg1;
+ (id)attributedStringFromContact:(id)arg1 style:(long long)arg2 defaultAttributes:(id)arg3;
+ (id)descriptorForRequiredKeysForNameOrder;
+ (long long)nameOrderForContact:(id)arg1;
+ (id)descriptorForRequiredKeysForDelimiter;
+ (id)delimiterForContact:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)descriptorForRequiredKeys;
- (id)stringFromContact:(id)arg1;
- (id)attributedStringFromContact:(id)arg1 defaultAttributes:(id)arg2;
- (id)stringFromContact:(id)arg1 attributes:(id)arg2;
- (id)fullNameForContact:(id)arg1 attributes:(id)arg2 style:(long long)arg3;
- (id)shortNameForContact:(id)arg1 attributes:(id)arg2;
- (id)avatarNameForContact:(id)arg1 attributes:(id)arg2;
- (id)abbreviatedNameForContact:(id)arg1 attributes:(id)arg2;
- (void)appendValueForProperties:(id)arg1 fromContact:(id)arg2 toString:(id)arg3 delimiter:(id)arg4 attributes:(id)arg5 fallback:(_Bool)arg6;
- (void)appendValue:(id)arg1 derivedFromPropertyName:(id)arg2 toString:(id)arg3 delimiter:(id)arg4 attributes:(id)arg5;
- (id)stringFromPotentiallySuggestedContact:(id)arg1 relatedToProperty:(id)arg2;

@end
