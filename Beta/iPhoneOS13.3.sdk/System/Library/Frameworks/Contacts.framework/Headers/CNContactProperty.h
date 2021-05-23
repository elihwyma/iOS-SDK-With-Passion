/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class CNContact, NSString;

@interface CNContactProperty : NSObject <Swift>

{
    NSString *_key;
    NSString *_identifier;
    CNContact *_internalContact;
}

@property (retain, nonatomic) CNContact *internalContact;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) id value;
@property (copy, nonatomic, readonly) NSString *label;

+ (_Bool)supportsSecureCoding;
+ (id)contactPropertyWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3;
+ (id)contactPropertyWithContactNoCopy:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)primitiveValue;
- (id)labeledValueForContact:(id)arg1;
- (id)labeledValue;
- (_Bool)isMultiValueProperty;
- (id)sourceContact;
- (int)multiValueIdentifier;

@end
