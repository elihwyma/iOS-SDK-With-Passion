/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/Swift-Protocol.h>

@class NSString;

@protocol CNVCardNameDataSource <Swift>

@property (readonly) NSString *firstName;
@property (readonly) NSString *lastName;
@property (readonly) NSString *middleName;
@property (readonly) NSString *title;
@property (readonly) NSString *suffix;
@property (readonly) NSString *companyName;
@property (readonly) _Bool isCompany;

@end
