/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSPersistentStore, NSPersistentStoreCache;

__attribute__((visibility("hidden")))
@interface NSGenerationalRowCache : NSObject

{
    NSPersistentStore *_store;
    NSPersistentStoreCache *_primaryCache;
    NSMutableDictionary *_rowCachesByGenerationToken;
    int _lock;
}

- (void)dealloc;
- (id)initWithStore:(id)arg1;
- (void)removeRowCacheForGenerationWithIdentifier:(id)arg1;
- (id)rowCacheForGeneration:(id)arg1;
- (void)forgetAllExternalData;
- (void)removeRowCacheForGeneration:(id)arg1;

@end
