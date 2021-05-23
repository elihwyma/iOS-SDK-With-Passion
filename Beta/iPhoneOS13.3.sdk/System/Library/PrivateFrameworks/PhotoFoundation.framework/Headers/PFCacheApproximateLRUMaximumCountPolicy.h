/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFCachePolicy.h>

@class NSObject;

@protocol OS_dispatch_queue;

@interface PFCacheApproximateLRUMaximumCountPolicy : PFCachePolicy

{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _maximumCount;
    unsigned int _seed;
    unsigned long long _tick;
    unsigned long long _tickMaximum;
    unsigned long long _considerationCount;
    id *_considerationKeys;
}

+ (id)policyWithMaximumCount:(unsigned long long)arg1;

- (void)dealloc;
- (id)description;
- (id)cacheEntryWithKey:(id)arg1 value:(id)arg2;
- (void)didAddCacheEntry:(id)arg1;
- (void)didRemoveCacheEntry:(id)arg1;
- (id)willAddOrReplaceEntry:(id)arg1 add:(_Bool)arg2 contents:(id)arg3;
- (void)didGetCacheEntry:(id)arg1;
- (unsigned long long)capacityHint;
- (void)didRemoveAllCacheEntries;
- (id)initWithMaximumCount:(unsigned long long)arg1;
- (void)_rebuildConsiderationKeys:(id)arg1;

@end
