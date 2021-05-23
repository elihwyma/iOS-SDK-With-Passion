/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSArray, NSString;

@interface CNSocialProfile : NSObject <Swift>

{
    NSString *_urlString;
    NSString *_username;
    NSString *_userIdentifier;
    NSString *_service;
    NSString *_displayname;
    NSString *_teamIdentifier;
    NSArray *_bundleIdentifiers;
}

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *displayname;
@property (copy, nonatomic) NSString *teamIdentifier;
@property (copy, nonatomic) NSArray *bundleIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)localizedStringForKey:(id)arg1;
+ (id)localizedStringForService:(id)arg1;
+ (id)socialProfileWithDictionaryRepresentation:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (_Bool)isValid:(id *)arg1;
- (id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayname:(id)arg5 teamIdentifier:(id)arg6 bundleIdentifiers:(id)arg7;
- (_Bool)isEqual:(id)arg1 ignoreURLs:(_Bool)arg2;
- (id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4;
- (id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayname:(id)arg5;

@end
