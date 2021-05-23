/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol GEOMapServiceTicket, OS_os_log;

@interface CLSLocationQueryPerformer : NSObject

{
    _Bool _isCancelled;
    NSArray *_geoLocations;
    id <GEOMapServiceTicket> _ticket;
    NSArray *_regions;
    double _precision;
    NSObject<OS_os_log> *_loggingConnection;
    CDStruct_95c2efd7 _statistics;
}

@property (nonatomic, readonly) NSArray *geoLocations;
@property (nonatomic, readonly) id <GEOMapServiceTicket> ticket;
@property (copy, nonatomic, readonly) NSArray *regions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isCancelled;
@property (nonatomic) CDStruct_95c2efd7 statistics;
@property (nonatomic) double precision;
@property (nonatomic) NSObject<OS_os_log> *loggingConnection;

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
- (id)initWithRegions:(id)arg1 precision:(double)arg2;

@end
