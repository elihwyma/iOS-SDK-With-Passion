/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSArray, NSString;

@interface CNInstantMessageAddress : NSObject <Swift>

{
    NSString *_username;
    NSString *_service;
    NSString *_userIdentifier;
    NSString *_teamIdentifier;
    NSArray *_bundleIdentifiers;
}

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *teamIdentifier;
@property (copy, nonatomic) NSArray *bundleIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)localizedStringForKey:(id)arg1;
+ (id)localizedStringForService:(id)arg1;
+ (id)instantMessageAddressWithDictionaryRepresentation:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (_Bool)isValid:(id *)arg1;
- (id)initWithUsername:(id)arg1 userIdentifier:(id)arg2 service:(id)arg3 teamIdentifier:(id)arg4 bundleIdentifiers:(id)arg5;
- (id)initWithUsername:(id)arg1 service:(id)arg2;

@end
