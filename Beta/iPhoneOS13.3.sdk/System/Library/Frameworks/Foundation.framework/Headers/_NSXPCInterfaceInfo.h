/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSXPCInterfaceInfo : NSObject

{
    unsigned long long _remoteVersion;
    struct os_unfair_lock_s _knownSelectorsLock;
    struct __CFDictionary *_knownSelectors;
    struct __CFDictionary *_methodInfo;
    Class _xpcDOSubclass;
}

@property unsigned long long remoteVersion;

- (id)init;
- (void)dealloc;

@end
