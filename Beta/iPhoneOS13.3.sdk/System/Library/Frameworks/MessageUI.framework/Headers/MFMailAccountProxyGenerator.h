/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSString, _MFMailAccountProxySource;

@interface MFMailAccountProxyGenerator : NSObject

{
    _MFMailAccountProxySource *_proxySource;
    _Bool _allowsRestrictedAccounts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)defaultMailAccountProxyForDeliveryOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(_Bool)arg2 originatingBundleID:(id)arg3 sourceAccountManagement:(int)arg4;
- (id)initWithAllowsRestrictedAccounts:(_Bool)arg1;
- (id)allAccountProxies;
- (id)activeAccountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(_Bool)arg2;

@end
