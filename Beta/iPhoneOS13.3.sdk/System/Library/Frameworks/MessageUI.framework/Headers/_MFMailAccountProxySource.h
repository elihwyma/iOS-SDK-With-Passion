/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLock;

@interface _MFMailAccountProxySource : NSObject

{
    NSLock *_lock;
    NSArray *_accountProxies;
    int _lastSourceAccountManagementQueried;
    _Bool _registeredForNotifications;
    int _notifyToken;
}

+ (id)defaultInstance;

- (id)init;
- (void)dealloc;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_deregisterForNotifications_nts;
- (void)_registerForNotifications_nts;
- (void)_resetAccountsChanged:(_Bool)arg1;
- (id)accountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;

@end
