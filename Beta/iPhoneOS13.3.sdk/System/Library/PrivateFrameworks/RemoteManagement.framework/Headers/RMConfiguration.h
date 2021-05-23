/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

#import <NSObject.h>

@class NSData, NSDictionary, NSString, RMConfigurationAccount;

@interface RMConfiguration : NSObject

{
    NSString *_type;
    NSString *_identifier;
    NSString *_serverToken;
    NSData *_content;
    RMConfigurationAccount *_account;
    NSDictionary *_assetByIdentifier;
}

@property (copy, nonatomic, readonly) NSString *type;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *serverToken;
@property (copy, nonatomic, readonly) NSData *content;
@property (copy, nonatomic, readonly) RMConfigurationAccount *account;
@property (copy, nonatomic, readonly) NSDictionary *assetByIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToConfiguration:(id)arg1;
- (id)initWithType:(id)arg1 identifier:(id)arg2 serverToken:(id)arg3 content:(id)arg4 account:(id)arg5 assetByIdentifier:(id)arg6;

@end
