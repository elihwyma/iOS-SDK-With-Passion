/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@protocol HDHealthDataCollector <Swift>

@property _Bool disabled;

- (unsigned short)updateHistoricalDataForcedUpdate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)collectionStartedForType:collectionInterval: /* Error: Ran out of types for this method. */;
- (unsigned short)updateCollectionInterval:forType: /* Error: Ran out of types for this method. */;
- (unsigned short)collectionStoppedForType: /* Error: Ran out of types for this method. */;
- (unsigned short)updateHistoricalData;
- (unsigned short)updateHistoricalDataWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)dataCollectorDiagnosticDescription;

@end
