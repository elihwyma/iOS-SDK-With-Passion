/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <IDS/Swift-Protocol.h>

@protocol ENGroupContextCacheMiddleware <Swift>

- (unsigned short)middlewareCacheCostForContext: /* Error: Ran out of types for this method. */;
- (unsigned short)groupContext:cacheGroup:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)groupContext:cachedGroupWithID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)groupContext:latestCachedGroupWithStableID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)groupContext:fetchAllKnownGroups: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAllKnownGroupsForGroupContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteCachedValueForForGroupContext:withGroupID:completion: /* Error: Ran out of types for this method. */;

@end
