/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@interface PFCachePolicy : NSObject

- (id)cacheEntryWithKey:(id)arg1 value:(id)arg2;
- (void)didAddCacheEntry:(id)arg1;
- (void)didRemoveCacheEntry:(id)arg1;
- (id)willAddOrReplaceEntry:(id)arg1 add:(_Bool)arg2 contents:(id)arg3;
- (void)didGetCacheEntry:(id)arg1;
- (unsigned long long)capacityHint;
- (void)didRemoveAllCacheEntries;

@end
