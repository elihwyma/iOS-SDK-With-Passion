/*
 Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CDPAuthProvider;

@interface CDPAuthProviderProxy : NSObject

{
    id <CDPAuthProvider> _authProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)proxyWithAuthProvider:(id)arg1;

- (void)cdpContext:(id)arg1 performSilentRecoveryTokenRenewal:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 verifyMasterKey:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
