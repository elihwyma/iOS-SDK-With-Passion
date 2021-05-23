/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class _NSXPCConnectionExportInfo;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionExportedObjectTable : NSObject

{
    struct _opaque_pthread_mutex_t _lock;
    _NSXPCConnectionExportInfo *_proxy1;
    struct __CFDictionary *_proxyNumberToObject;
    struct __CFDictionary *_objectToProxyNumber;
    unsigned long long _next;
    _Bool _valid;
    NSObject<OS_dispatch_group> *_replyGroup;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)exportedObjectForProxyNumber:(unsigned long long)arg1;
- (id)interfaceForProxyNumber:(unsigned long long)arg1;
- (void)incrementOutstandingReplyCount;
- (void)decrementOutstandingReplyCount;
- (void)setExportedObject:(id)arg1 forProxyNumber:(unsigned long long)arg2;
- (void)setInterface:(id)arg1 forProxyNumber:(unsigned long long)arg2;
- (void)receivedReleaseForProxyNumber:(unsigned long long)arg1 userQueue:(id)arg2;
- (void)releaseExportedObject:(unsigned long long)arg1;
- (unsigned long long)proxyNumberForExportedObject:(id)arg1 interface:(id)arg2;

@end
