/*
 Image: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

@protocol SYDDaemonProtocol

- (unsigned short)setObject:forKey:inStoreWithIdentifier:type:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)removeObjectForKey:inStoreWithIdentifier:type:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)objectForKey:inStoreWithIdentifier:type:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)dictionaryRepresentationForStoreWithIdentifier:type:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)changeDictionarySinceChangeToken:inStoreWithIdentifier:type:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)synchronizeStoreWithIdentifier:type:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteDataFromDiskForStoreIdentifier:type:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)registerForChangeNotificationsForStoreWithIdentifier:type:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)processAccountChangesWithCompletionHandler: /* Error: Ran out of types for this method. */;

@end
