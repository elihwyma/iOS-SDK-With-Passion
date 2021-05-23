/*
 Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

@class NSData;

@interface NWStatisticsRouteSource

{
    struct nstat_route_descriptor _descriptor;
    NSData *_destination;
}

@property (retain) NSData *destination;

- (id)description;
- (id)_currentSnapshot;
- (id)initWithManager:(id)arg1 destination:(const struct sockaddr *)arg2 mask:(const struct sockaddr *)arg3 interface:(unsigned int)arg4;
- (int)handleDescriptor:(void *)arg1 length:(unsigned long long)arg2 events:(unsigned long long)arg3;

@end
