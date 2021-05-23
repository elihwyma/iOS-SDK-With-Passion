/*
 Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

#import <Foundation/NSObject.h>

@interface CDPAccount : NSObject

+ (id)sharedInstance;
+ (_Bool)isICDPEnabledForDSID:(id)arg1 checkWithServer:(_Bool)arg2;
+ (_Bool)isICDPEnabledForDSID:(id)arg1;

- (id)sharedAccountStore;
- (id)authToken;
- (unsigned long long)primaryAccountSecurityLevel;
- (id)primaryAppleAccount;
- (id)contextForPrimaryAccount;
- (id)primaryAccountAltDSID;
- (id)primaryAccountDSID;
- (id)primaryAccountUsername;
- (id)escrowURL;
- (id)iCloudEnv;

@end
