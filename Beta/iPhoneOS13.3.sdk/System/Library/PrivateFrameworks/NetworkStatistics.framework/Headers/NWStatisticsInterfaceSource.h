/*
 Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

@interface NWStatisticsInterfaceSource

{
    struct nstat_ifnet_descriptor _descriptor;
}

- (id)description;
- (id)_currentSnapshot;
- (id)initWithManager:(id)arg1 interface:(long long)arg2 threshold:(long long)arg3;
- (int)handleDescriptor:(void *)arg1 length:(unsigned long long)arg2 events:(unsigned long long)arg3;

@end
