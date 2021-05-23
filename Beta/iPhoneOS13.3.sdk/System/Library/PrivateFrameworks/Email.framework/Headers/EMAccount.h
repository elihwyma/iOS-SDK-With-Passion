/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMObject.h>

@class NSString;

@interface EMAccount : EMObject

{
    _Bool _primaryiCloudAccount;
    NSString *_name;
    NSString *_username;
    NSString *_hostname;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *username;
@property (copy, nonatomic, readonly) NSString *hostname;
@property (nonatomic, readonly, getter=isPrimaryiCloudAccount) _Bool primaryiCloudAccount;

+ (_Bool)supportsSecureCoding;
+ (id)predicateForReceivingAccounts;
+ (id)predicateForDeliveryAccounts;
+ (id)sortDescriptorForNameAscending:(_Bool)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)ef_publicDescription;

@end
