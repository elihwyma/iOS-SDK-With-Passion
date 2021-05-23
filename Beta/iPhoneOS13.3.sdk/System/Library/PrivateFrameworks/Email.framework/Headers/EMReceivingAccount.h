/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMAccount.h>

@class EMDeliveryAccount, NSArray, NSString;

@interface EMReceivingAccount : EMAccount

{
    _Bool _primaryiCloudAccount;
    _Bool _sourceIsManaged;
    _Bool _shouldArchiveByDefault;
    NSString *_name;
    NSString *_username;
    NSString *_hostname;
    EMDeliveryAccount *_deliveryAccount;
    NSArray *_emailAddresses;
    NSString *_statisticsKind;
}

@property (retain, nonatomic) EMDeliveryAccount *deliveryAccount;
@property (retain, nonatomic) NSArray *emailAddresses;
@property (nonatomic) _Bool sourceIsManaged;
@property (nonatomic) _Bool shouldArchiveByDefault;
@property (copy, nonatomic) NSString *statisticsKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *hostname;
@property (nonatomic, getter=isPrimaryiCloudAccount) _Bool primaryiCloudAccount;

+ (_Bool)supportsSecureCoding;

- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInitName:(id)arg1 hostname:(id)arg2 builder:(CDUnknownBlockType)arg3;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 hostname:(id)arg3 builder:(CDUnknownBlockType)arg4;

@end
