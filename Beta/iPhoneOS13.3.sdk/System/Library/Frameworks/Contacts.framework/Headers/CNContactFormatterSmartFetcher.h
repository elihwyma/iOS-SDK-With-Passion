/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNSmartPropertyFetcher.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface CNContactFormatterSmartFetcher : CNSmartPropertyFetcher

{
    _Bool _ignoresNickname;
    _Bool _ignoresOrganization;
    NSSet *_mandatoryNameProperties;
    NSDictionary *_fallBackNamePropertyByNameKey;
}

@property (copy, nonatomic) NSSet *mandatoryNameProperties;
@property (copy, nonatomic) NSDictionary *fallBackNamePropertyByNameKey;
@property (nonatomic) _Bool ignoresNickname;
@property (nonatomic) _Bool ignoresOrganization;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_cn_requiredKeys;
- (id)_cn_optionalKeys;
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;
- (id)_cn_ignorableKeys;
- (void)setupNameKeys;

@end
