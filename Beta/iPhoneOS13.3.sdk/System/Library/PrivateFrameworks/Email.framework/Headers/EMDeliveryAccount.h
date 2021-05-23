/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMAccount.h>

@class NSString;

@interface EMDeliveryAccount : EMAccount

{
    _Bool _primaryiCloudAccount;
    NSString *_name;
    NSString *_username;
    NSString *_hostname;
    unsigned long long _maximumMessageBytes;
}

@property (nonatomic) unsigned long long maximumMessageBytes;
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
