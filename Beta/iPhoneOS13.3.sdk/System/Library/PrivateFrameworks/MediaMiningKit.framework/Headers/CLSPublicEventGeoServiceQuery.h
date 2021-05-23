/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@protocol GEOMapServiceSpatialEventLookupTicket, OS_dispatch_queue;

@interface CLSPublicEventGeoServiceQuery : NSObject

{
    _Bool _isCancelled;
    NSArray *_timeLocationTuples;
    double _radius;
    NSDictionary *_parametersByTimeLocationTupleIdentifier;
    id <GEOMapServiceSpatialEventLookupTicket> _ticket;
    NSDictionary *_resolvedPublicEventsForTimeLocationTuples;
    NSDictionary *_invalidationTokens;
    NSObject<OS_dispatch_queue> *_geoQueue;
}

@property (nonatomic, readonly) NSArray *timeLocationTuples;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) _Bool isCancelled;
@property (nonatomic, readonly) NSDictionary *parametersByTimeLocationTupleIdentifier;
@property (nonatomic, readonly) id <GEOMapServiceSpatialEventLookupTicket> ticket;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *geoQueue;
@property (retain, nonatomic) NSDictionary *resolvedPublicEventsForTimeLocationTuples;
@property (retain, nonatomic) NSDictionary *invalidationTokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)maximumBatchSize;

- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1;
- (void)prepareForRetry;
- (id)initWithTimeLocationTuples:(id)arg1 radius:(double)arg2;
- (id)_publicEventsForGeoEvent:(id)arg1 matchingParameters:(id)arg2;
- (id)_parametersByTimeLocationTupleIdentifierForTimeLocationTuples:(id)arg1;

@end
