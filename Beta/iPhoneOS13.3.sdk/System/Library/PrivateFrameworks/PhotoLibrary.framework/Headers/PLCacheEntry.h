/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <Foundation/NSObject.h>

@interface PLCacheEntry : NSObject

{
    id _object;
    struct lruEntry *_entry;
}

- (void)dealloc;
- (id)object;
- (void)setObject:(id)arg1;
- (struct lruEntry *)lruListEntry;

@end
