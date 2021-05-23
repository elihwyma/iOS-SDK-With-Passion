/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNSocialProfile.h>

@class NSArray, NSString;

@interface CNMutableSocialProfile : CNSocialProfile

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *displayname;
@property (copy, nonatomic) NSArray *bundleIdentifiers;
@property (copy, nonatomic) NSString *teamIdentifier;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)freeze;

@end
