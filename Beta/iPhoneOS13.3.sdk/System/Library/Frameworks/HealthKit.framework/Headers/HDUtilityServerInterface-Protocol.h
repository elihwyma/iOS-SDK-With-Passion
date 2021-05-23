/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/Swift-Protocol.h>

@protocol HDUtilityServerInterface <Swift>

- (unsigned short)remote_generateFakeDataForActivityType:minutes:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_startFakingDataWithActivityType:speed:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_stopFakingDataWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchDiagnosticsWithKeys:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_createFakeAppleSourceWithBundleIdentifier:name:productType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchAllDevicesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_saveDataObjects:sourceBundleIdentifier:sourceVersion:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_select:from:where:groupBy:orderBy:limit:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_dropEntitlement:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_restoreEntitlement:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_runAWDTask:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_resetAWDTask:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_observeDataCollectionForType:interval:inBackground:hasRunningWorkout: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_stopObservingDataCollectionForType: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchURLForAnalyticsFileWithName:completion: /* Error: Ran out of types for this method. */;

@end
