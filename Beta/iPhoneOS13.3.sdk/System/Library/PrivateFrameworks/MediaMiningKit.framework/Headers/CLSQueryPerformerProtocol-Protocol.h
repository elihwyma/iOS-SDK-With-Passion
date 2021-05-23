/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/Swift-Protocol.h>

@class NSObject;

@protocol OS_os_log;

@protocol CLSQueryPerformerProtocol <Swift>

@property (nonatomic, readonly) _Bool isCancelled;
@property (nonatomic) CDStruct_95c2efd7 statistics;
@property (nonatomic) double precision;
@property (nonatomic) NSObject<OS_os_log> *loggingConnection;

+ (unsigned short)queryWithTemplate:forRegions: /* Error: Ran out of types for this method. */;
+ (unsigned short)numberOfRegionsPerBatch;
+ (unsigned short)defaultPrecision;

- (unsigned short)cancel;
- (unsigned short)regions;
- (unsigned short)submitWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldQueryItemsForRegion:selectedRegions: /* Error: Ran out of types for this method. */;
- (unsigned short)cacheItems: /* Error: Ran out of types for this method. */;
- (unsigned short)logAggdGeoLookupCounterAndDurationWithLookupDuration: /* Error: Ran out of types for this method. */;
- (unsigned short)logAggdGeoLookupFailureResult;

@end
