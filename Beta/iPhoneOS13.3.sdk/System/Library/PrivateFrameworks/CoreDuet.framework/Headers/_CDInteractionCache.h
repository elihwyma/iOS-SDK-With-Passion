/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableOrderedSet, NSPredicate, _CDInteractionStore;

@interface _CDInteractionCache : NSObject

{
    struct os_unfair_lock_s _lock;
    _CDInteractionStore *_interactionStore;
    unsigned long long _size;
    NSPredicate *_predicate;
    CDUnknownBlockType _filterBlock;
    NSMutableOrderedSet *_mutableInteractions;
}

@property (nonatomic, readonly) NSMutableOrderedSet *mutableInteractions;
@property (nonatomic, readonly) _CDInteractionStore *interactionStore;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) CDUnknownBlockType filterBlock;
@property (copy, nonatomic, readonly) NSArray *interactions;

- (void)_refetch;
- (void)interactionsRecorded:(id)arg1;
- (void)refetch;
- (void)_cacheInteractions:(id)arg1;
- (id)initWithInteractionStore:(id)arg1 size:(unsigned long long)arg2 queryPredicate:(id)arg3 filterBlock:(CDUnknownBlockType)arg4;

@end
