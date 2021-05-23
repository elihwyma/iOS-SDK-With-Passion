/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@interface GKTable : NSObject

{
    struct _gktableitem {
        unsigned int _field1;
        id _field2;
        double _field3;
        double _field4;
    } *_items;
    unsigned long long _count;
    unsigned long long _size;
    struct _opaque_pthread_mutex_t _lock;
}

@property (readonly) unsigned long long count;

- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (id)objectForKey:(unsigned int)arg1;
- (void)removeObjectForKey:(unsigned int)arg1;
- (void)lock;
- (void)unlock;
- (void)setObject:(id)arg1 forKey:(unsigned int)arg2;
- (id)allObjects;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)print;
- (id)initWithSize:(unsigned long long)arg1;
- (void)touchObject:(id)arg1;
- (void)touchObjectForKey:(unsigned int)arg1;

@end
