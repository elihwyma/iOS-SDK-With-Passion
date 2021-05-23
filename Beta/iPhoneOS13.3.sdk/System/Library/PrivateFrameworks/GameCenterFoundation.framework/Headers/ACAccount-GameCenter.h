/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Accounts/ACAccount.h>

@interface ACAccount (GameCenter)

- (id)_gkCredentialsForEnvironment:(long long)arg1;
- (id)_gkTokenForEnvironment:(long long)arg1;
- (id)_gkPerEnvironmentTokens;
- (id)_gkPlayerInternal;
- (id)_gkPropertyForKey:(id)arg1 environment:(long long)arg2;
- (id)_gkModifiedDateForProperty:(id)arg1 environment:(long long)arg2;
- (id)_gkCredentials;
- (_Bool)_gkIsPrimaryForEnvironment:(long long)arg1;
- (void)_gkSetToken:(id)arg1 forEnvironment:(long long)arg2;
- (void)_gkSetPlayerInternal:(id)arg1;
- (id)_gkCredentialForEnvironment:(long long)arg1;
- (void)_gkSetProperty:(id)arg1 forKey:(id)arg2 environment:(long long)arg3;

@end
