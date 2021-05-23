/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionClassCache : NSObject

{
    struct _opaque_pthread_mutex_t _lock;
    NSMutableSet *_cache;
}

- (id)init;
- (void)dealloc;
- (void)clear;
- (_Bool)containsClass:(Class)arg1;
- (void)addClass:(Class)arg1;

@end
