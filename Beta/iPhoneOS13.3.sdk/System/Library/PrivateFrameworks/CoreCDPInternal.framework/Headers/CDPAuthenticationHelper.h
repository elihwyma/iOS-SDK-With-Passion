/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <Foundation/NSObject.h>

@interface CDPAuthenticationHelper : NSObject

+ (void)silentAuthenticationForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (id)_contextForPrimaryAccountSilentAuth;
+ (void)_authWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)_authContextForContext:(id)arg1;
+ (id)_contextForPrimaryAccount;
+ (void)silentAuthenticationForPrimaryAccountWithCompletion:(CDUnknownBlockType)arg1;

@end
