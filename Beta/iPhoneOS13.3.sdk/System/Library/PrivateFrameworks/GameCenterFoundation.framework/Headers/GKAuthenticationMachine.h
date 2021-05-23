/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

#import <GameCenterFoundation/Swift-Protocol.h>

@class NSString;

@interface GKAuthenticationMachine : NSObject <Swift>

{
    long long _loginCancelledCount;
    NSString *_accountName;
    long long _serverEnvironment;
}

@property (nonatomic) long long loginCancelledCount;
@property (retain, nonatomic) NSString *accountName;
@property (nonatomic) long long serverEnvironment;

+ (_Bool)supportsSecureCoding;
+ (void)migratePreSundanceAccountInformation;
+ (void)migratePreBlacktailAccountInformation;
+ (id)authMachineForEnvironment:(long long)arg1;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
