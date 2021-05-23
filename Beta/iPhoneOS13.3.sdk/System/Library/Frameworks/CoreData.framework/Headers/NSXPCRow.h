/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPersistentCacheRow.h>

__attribute__((visibility("hidden")))
@interface NSXPCRow : NSPersistentCacheRow

{
    id _node;
}

- (void)dealloc;
- (id)node;
- (id)objectID;
- (id)initWithNode:(id)arg1;

@end
