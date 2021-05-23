/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@interface GKList : NSObject

{
    unsigned int *_items;
    unsigned long long _count;
    unsigned long long _size;
    struct _opaque_pthread_mutex_t _lock;
}

@property (readonly) unsigned long long count;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (void)print;
- (id)initWithSize:(unsigned long long)arg1;
- (void)addID:(unsigned int)arg1;
- (void)copyItemsInto:(id)arg1;
- (_Bool)hasID:(unsigned int)arg1;
- (void)addIDsFromList:(id)arg1;
- (void)removeID:(unsigned int)arg1;
- (void)removeAllIDs;
- (id)allMatchingObjectsFromTable:(id)arg1;

@end
