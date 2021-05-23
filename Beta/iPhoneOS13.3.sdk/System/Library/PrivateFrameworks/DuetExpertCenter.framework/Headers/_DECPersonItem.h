/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <DuetExpertCenter/_DECItem.h>

@class CNContact, CNContactProperty, NSString;

@interface _DECPersonItem : _DECItem

{
    NSString *_contactIdentifier;
    CNContact *_contact;
    CNContactProperty *_contactProperty;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) CNContactProperty *contactProperty;
@property (nonatomic, readonly) NSString *contactIdentifier;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)category;
+ (id)_contactStore;
+ (id)personWithContactProperty:(id)arg1;
+ (id)personWithContact:(id)arg1;
+ (id)personWithContactIdentifier:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactProperty:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;
- (id)initWithContact:(id)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (_Bool)_isEqualToDECPersonItem:(id)arg1;

@end
