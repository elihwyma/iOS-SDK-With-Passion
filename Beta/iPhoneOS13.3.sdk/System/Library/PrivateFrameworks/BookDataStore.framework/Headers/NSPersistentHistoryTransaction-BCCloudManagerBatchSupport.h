/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <CoreData/NSPersistentHistoryTransaction.h>

@interface NSPersistentHistoryTransaction (BCCloudManagerBatchSupport)

- (_Bool)bds_atOffset:(long long *)arg1 getAtMost:(long long)arg2 moc:(id)arg3 entityClass:(Class)arg4 privacyDelegate:(id)arg5 updated:(id *)arg6 tombstones:(id *)arg7;

@end
