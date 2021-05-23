/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Accounts/ACAccount.h>

@class NSDictionary, NSString;

@interface ACAccount (CloudKitAdditions)

@property (nonatomic, readonly) ACAccount *ck_cloudKitAccount;
@property (nonatomic, readonly) NSString *ck_identifier;
@property (nonatomic, readonly) NSDictionary *ck_accountProperties;
@property (nonatomic, readonly) NSDictionary *ck_dataclassProperties;
@property (nonatomic, readonly) NSString *ck_personaIdentifier;

@end
