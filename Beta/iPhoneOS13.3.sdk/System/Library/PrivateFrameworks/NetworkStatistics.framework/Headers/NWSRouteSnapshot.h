/*
 Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

#import <NetworkStatistics/NWSSnapshot.h>

@class NSData;

@interface NWSRouteSnapshot : NWSSnapshot

{
    NSData *_destination;
    NSData *_mask;
    NSData *_gateway;
    struct nstat_route_descriptor _descriptor;
}

@property (readonly) unsigned long long routeID;
@property (readonly) unsigned long long parentID;
@property (readonly) unsigned long long gatewayID;
@property (readonly) NSData *destination;
@property (readonly) NSData *mask;
@property (readonly) NSData *gateway;
@property (readonly) unsigned int interfaceIndex;
@property (readonly) unsigned int flags;
@property (readonly) double rttMinimum;
@property (readonly) double rttAverage;
@property (readonly) double rttVariation;
@property (readonly) unsigned int rxDuplicateBytes;
@property (readonly) unsigned int rxOutOfOrderBytes;
@property (readonly) unsigned int txRetransmittedBytes;
@property (readonly) unsigned int connectAttempts;
@property (readonly) unsigned int connectSuccesses;

- (id)description;
- (id)traditionalDictionary;
- (void)_initWithDescriptor:(struct nstat_route_descriptor *)arg1;
- (id)initWithCounts:(const struct nstat_counts *)arg1 routeDescriptor:(struct nstat_route_descriptor *)arg2 sourceIdent:(unsigned long long)arg3 seqno:(unsigned long long)arg4;

@end
