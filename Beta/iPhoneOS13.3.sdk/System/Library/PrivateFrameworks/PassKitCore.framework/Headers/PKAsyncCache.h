/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSCache, NSMapTable, NSMutableDictionary;

@interface PKAsyncCache : NSObject

{
    struct os_unfair_lock_s _lock;
    NSCache *_itemByKey;
    NSMapTable *_weakItemByKey;
    NSMutableDictionary *_outstandingRetrievals;
}

- (id)init;
- (id)initWithCache:(id)arg1;
- (void)_executeRetrievalBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)retrieveItemForKey:(id)arg1 synchronous:(_Bool)arg2 retrievalBlock:(CDUnknownBlockType)arg3 deliveryBlock:(CDUnknownBlockType)arg4;

@end
