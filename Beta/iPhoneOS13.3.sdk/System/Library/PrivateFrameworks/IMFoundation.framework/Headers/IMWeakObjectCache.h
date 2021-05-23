/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface IMWeakObjectCache : NSObject

{
    NSMutableDictionary *_weakObjectCache;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _tableLock;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)objectForKey:(id)arg1;
- (id)copyOrSetObject:(id)arg1 forKey:(id)arg2;
- (id)copyObjectForKey:(id)arg1;
- (void)removeObject:(id)arg1 key:(id)arg2;

@end
