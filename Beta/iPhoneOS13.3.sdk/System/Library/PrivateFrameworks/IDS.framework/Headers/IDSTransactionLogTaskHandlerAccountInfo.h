/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class ENAccountIdentity, NSDictionary, NSString;

@interface IDSTransactionLogTaskHandlerAccountInfo : NSObject

{
    ENAccountIdentity *_accountIdentity;
    NSDictionary *_aliasToAccountsMap;
    NSString *_serviceName;
}

@property (nonatomic, readonly) ENAccountIdentity *accountIdentity;
@property (nonatomic, readonly) NSDictionary *aliasToAccountsMap;
@property (nonatomic, readonly) NSString *serviceName;

- (id)initWithAccountIdentity:(id)arg1 aliasToAccountsMap:(id)arg2 serviceName:(id)arg3;
- (id)accountForAlias:(id)arg1;

@end
