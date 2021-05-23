/*
 Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

@interface NWStatisticsQUICSource

{
    struct nstat_tcp_descriptor _descriptor;
    unsigned long long _eventFlags;
}

- (id)description;
- (id)_currentSnapshot;
- (int)handleDescriptor:(void *)arg1 length:(unsigned long long)arg2 events:(unsigned long long)arg3;

@end
