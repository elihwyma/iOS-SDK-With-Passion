/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/Swift-Protocol.h>

@protocol FBSApplicationDataStoreRepositoryClient <Swift>

- (unsigned short)invalidate;
- (unsigned short)addObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)removeObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)addPrefetchedKeys: /* Error: Ran out of types for this method. */;
- (unsigned short)prefetchedObjectIfAvailableForKey:application:outObject: /* Error: Ran out of types for this method. */;
- (unsigned short)removeObjectForKey:forApplication:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)removePrefetchedKeys:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)synchronizeWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)availableDataStores;
- (unsigned short)objectForKey:forApplication: /* Error: Ran out of types for this method. */;
- (unsigned short)setObject:forKey:forApplication:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllObjectsForApplication:withCompletion: /* Error: Ran out of types for this method. */;

@end
