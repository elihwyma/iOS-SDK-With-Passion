/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/Swift-Protocol.h>

@protocol ASDSoftwareUpdateProtocol <Swift>

- (unsigned short)clearExpiredUpdateHistoryWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getUpdatesWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)hideApplicationBadgeForPendingUpdates;
- (unsigned short)reloadFromServerWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)removeUpdateBulletins;
- (unsigned short)showApplicationBadgeForPendingUpdates;
- (unsigned short)refreshUpdatesWithCompletionBlock:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)reloadFromServerInBackgroundWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)refreshUpdateCountWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)reloadManagedUpdatesWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)updateAllWithOrder:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getManagedUpdatesWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getUpdatesMetricsWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getUpdatesIncludingMetricsWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)showApplicationUpdatesBulletin;
- (unsigned short)updateAllWithJobResults: /* Error: Ran out of types for this method. */;
- (unsigned short)migrateUpdatesStoreWithCompletionBlock: /* Error: Ran out of types for this method. */;

@end
