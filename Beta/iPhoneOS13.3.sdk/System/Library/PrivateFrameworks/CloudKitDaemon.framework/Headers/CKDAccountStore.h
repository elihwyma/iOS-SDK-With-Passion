/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CKDAccountStore : NSObject

+ (id)sharedAccountStore;
+ (id)personaAwarePrimaryAppleAccountFromAccounts:(id)arg1 defaultPrimaryAccount:(id)arg2;

- (id)init;

@end
