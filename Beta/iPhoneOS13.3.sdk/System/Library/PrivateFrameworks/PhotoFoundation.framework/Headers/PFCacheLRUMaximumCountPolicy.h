/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFCachePolicy.h>

@class NSMutableArray, NSMutableSet, NSObject;

@protocol OS_dispatch_queue;

@interface PFCacheLRUMaximumCountPolicy : PFCachePolicy

{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _maximumCount;
    NSMutableSet *_considerationSet;
    NSMutableArray *_orderedConsiderationList;
}

+ (id)policyWithMaximumCount:(unsigned long long)arg1;

- (id)description;
- (void)didAddCacheEntry:(id)arg1;
- (void)didRemoveCacheEntry:(id)arg1;
- (id)willAddOrReplaceEntry:(id)arg1 add:(_Bool)arg2 contents:(id)arg3;
- (void)didGetCacheEntry:(id)arg1;
- (unsigned long long)capacityHint;
- (void)didRemoveAllCacheEntries;
- (id)initWithMaximumCount:(unsigned long long)arg1;
- (void)_buildConsiderationSet:(id)arg1;
- (id)_keyToEvict:(id)arg1;

@end
