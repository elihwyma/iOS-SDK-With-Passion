/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Accounts/ACAccount.h>

@class NSArray, NSNumber, NSString;

@interface ACAccount (ContactsFoundation)

@property (copy, nonatomic) NSNumber *_cn_dsid;
@property (copy, nonatomic) NSString *_cn_altDSID;
@property (copy, nonatomic) NSString *_cn_principalPath;
@property (copy, nonatomic) NSString *_cn_appleID;
@property (copy, nonatomic) NSString *_cn_firstName;
@property (copy, nonatomic) NSString *_cn_lastName;
@property (nonatomic, readonly) _Bool _cn_isPrimaryAccount;
@property (nonatomic, readonly) _Bool _cn_isLDAP;
@property (nonatomic, readonly) _Bool _cn_isCardDAV;
@property (nonatomic, readonly) _Bool _cn_isChildDelegateAccount;
@property (copy, nonatomic, readonly) NSString *_cn_appleAccountAppleID;
@property (copy, nonatomic, readonly) NSArray *_cn_appleAccountAppleIDAliases;

- (void)setPropertiesFromDelegateInfo:(id)arg1;

@end
