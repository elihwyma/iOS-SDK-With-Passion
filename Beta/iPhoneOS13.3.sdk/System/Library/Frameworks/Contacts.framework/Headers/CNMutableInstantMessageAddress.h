/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNInstantMessageAddress.h>

@class NSString;

@interface CNMutableInstantMessageAddress : CNInstantMessageAddress

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *service;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)freeze;

@end
