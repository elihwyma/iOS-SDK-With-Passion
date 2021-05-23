/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPersistentStoreCache.h>

@class NSSQLCore;

__attribute__((visibility("hidden")))
@interface NSSQLRowCache : NSPersistentStoreCache

{
    NSSQLCore *_sqlCore;
    int _debug;
}

+ (void)initialize;

- (void)dealloc;
- (id)sqlCore;
- (id)initWithPersistentStore:(id)arg1;

@end
