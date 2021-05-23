/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@protocol HKDataCollectorClientInterface

- (unsigned short)clientRemote_synchronizeWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_beginCollectionWithConfiguration:lastPersistedDatum:registrationUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_collectionConfigurationDidChange: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_finishedPersistenceForBatch:error: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_receivedBatch:error: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_collectThroughDate:completion: /* Error: Ran out of types for this method. */;

@end
