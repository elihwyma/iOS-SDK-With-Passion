/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLSBusinessCategoryCache, NSArray, NSString;

@protocol GEOMapServiceBatchSpatialLookupTicket, OS_os_log;

@interface CLSBusinessItemGenericQueryPerformer : NSObject

{
    _Bool _isCancelled;
    NSArray *_locationGeoParameters;
    id <GEOMapServiceBatchSpatialLookupTicket> _businessGenericTicket;
    NSArray *_regions;
    double _precision;
    NSObject<OS_os_log> *_loggingConnection;
    CDStruct_95c2efd7 _statistics;
}

@property (nonatomic, readonly) NSArray *locationGeoParameters;
@property (nonatomic, readonly) id <GEOMapServiceBatchSpatialLookupTicket> businessGenericTicket;
@property (copy, nonatomic, readonly) NSArray *regions;
@property (nonatomic, readonly) CLSBusinessCategoryCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isCancelled;
@property (nonatomic) CDStruct_95c2efd7 statistics;
@property (nonatomic) double precision;
@property (nonatomic) NSObject<OS_os_log> *loggingConnection;

+ (id)categories;
+ (id)queryWithTemplate:(id)arg1 forRegions:(id)arg2;
+ (unsigned long long)numberOfRegionsPerBatch;
+ (double)defaultPrecision;

- (id)init;
- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)shouldQueryItemsForRegion:(id)arg1 selectedRegions:(id)arg2;
- (unsigned long long)cacheItems:(id)arg1;
- (void)logAggdGeoLookupCounterAndDurationWithLookupDuration:(id)arg1;
- (void)logAggdGeoLookupFailureResult;
- (id)initWithRegions:(id)arg1 categories:(id)arg2 precision:(double)arg3;

@end
