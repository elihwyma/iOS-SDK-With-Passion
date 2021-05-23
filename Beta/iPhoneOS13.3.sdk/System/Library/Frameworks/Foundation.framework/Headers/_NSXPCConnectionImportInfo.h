/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionImportInfo : NSObject

{
    unsigned long long _generationCount;
    struct __CFDictionary *_proxyNumberToCount;
    void *_secTaskRef;
    struct os_unfair_lock_s _lock;
    _Bool _secTaskClearedOnce;
}

- (id)init;
- (void)dealloc;
- (void)_clearEntitlementCache;
- (id)_valueForEntitlement:(id)arg1 auditToken:(CDStruct_4c969caf)arg2;
- (void)addProxy:(id)arg1;
- (_Bool)removeProxy:(id)arg1;

@end
