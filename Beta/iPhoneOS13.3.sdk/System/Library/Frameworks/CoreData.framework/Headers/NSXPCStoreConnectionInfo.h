/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSXPCStoreServerPerConnectionCache;

@interface NSXPCStoreConnectionInfo : NSObject

{
    NSDictionary *_entitlements;
    NSXPCStoreServerPerConnectionCache *_cache;
    CDStruct_4c969caf _token;
    id _userInfo;
    int _lock;
}

- (void)dealloc;
- (id)description;
- (id)userInfo;
- (CDStruct_4c969caf)auditToken;
- (void)setUserInfo:(id)arg1;
- (id)entitlements;
- (id)cache;
- (id)persistentStoreCoordinator;
- (id)initForToken:(CDStruct_4c969caf)arg1 entitlementNames:(id)arg2 cache:(id)arg3;

@end
