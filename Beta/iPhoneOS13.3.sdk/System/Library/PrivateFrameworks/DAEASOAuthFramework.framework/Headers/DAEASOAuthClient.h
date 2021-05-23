/*
 Image: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
 */

#import <Foundation/NSObject.h>

@interface DAEASOAuthClient : NSObject

+ (id)clientRedirect;
+ (id)clientIDForOAuthType:(unsigned long long)arg1;
+ (id)defaultScopeForOAuthType:(unsigned long long)arg1;
+ (id)clientRedirectForOAuthType:(unsigned long long)arg1;
+ (id)scopeForUpgradingFromBasicCreds;

@end
