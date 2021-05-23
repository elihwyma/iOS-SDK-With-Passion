/*
 Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

#import <NetworkStatistics/NWSSnapshot.h>

@class NSString;

@interface NWSInterfaceSnapshot : NWSSnapshot

{
    NSString *_interfaceName;
    NSString *_interfaceDescription;
    struct nstat_ifnet_descriptor _descriptor;
    unsigned long long _linkQualityMetric;
    unsigned long long _ulMaxBandwidth;
    unsigned long long _ulEffectiveBandwidth;
    unsigned long long _ulBytesLost;
    unsigned long long _ulMinLatency;
    unsigned long long _ulEffectiveLatency;
    unsigned long long _ulMaxLatency;
    unsigned long long _ulReTxtLevel;
    unsigned long long _dlMaxBandwidth;
    unsigned long long _dlEffectiveBandwidth;
    unsigned long long _cellUlMinQueueSize;
    unsigned long long _cellUlAvgQueueSize;
    unsigned long long _cellUlMaxQueueSize;
    unsigned long long _cellConfigInactivityTime;
    unsigned long long _cellConfigBackoffTime;
    unsigned long long _wifiUlErrorRate;
    unsigned long long _wifiDlMinLatency;
    unsigned long long _wifiDlEffectiveLatency;
    unsigned long long _wifiDlMaxLatency;
    unsigned long long _wifiDlErrorRate;
    unsigned long long _wifiConfigFrequency;
    unsigned long long _wifiConfigMulticastRate;
    unsigned long long _wifiScanCount;
    unsigned long long _wifiScanDuration;
}

@property unsigned long long linkQualityMetric;
@property unsigned long long ulMaxBandwidth;
@property unsigned long long ulEffectiveBandwidth;
@property unsigned long long ulBytesLost;
@property unsigned long long ulMinLatency;
@property unsigned long long ulEffectiveLatency;
@property unsigned long long ulMaxLatency;
@property unsigned long long ulReTxtLevel;
@property unsigned long long dlMaxBandwidth;
@property unsigned long long dlEffectiveBandwidth;
@property unsigned long long cellUlMinQueueSize;
@property unsigned long long cellUlAvgQueueSize;
@property unsigned long long cellUlMaxQueueSize;
@property unsigned long long cellConfigInactivityTime;
@property unsigned long long cellConfigBackoffTime;
@property unsigned long long wifiUlErrorRate;
@property unsigned long long wifiDlMinLatency;
@property unsigned long long wifiDlEffectiveLatency;
@property unsigned long long wifiDlMaxLatency;
@property unsigned long long wifiDlErrorRate;
@property unsigned long long wifiConfigFrequency;
@property unsigned long long wifiConfigMulticastRate;
@property unsigned long long wifiScanCount;
@property unsigned long long wifiScanDuration;
@property (readonly) NSString *interfaceName;
@property (readonly) NSString *interfaceDescription;
@property (readonly) unsigned int interfaceType;
@property (readonly) unsigned int interfaceIndex;
@property (readonly) unsigned long long threshold;

- (id)description;
- (id)provider;
- (id)traditionalDictionary;
- (void)_invalidateCommonCounts;
- (void)_invalidateCellCounts;
- (void)_invalidateWifiCounts;
- (void)_invalidateAllExtraCounts;
- (void)_handleCellExtra:(struct nstat_ifnet_desc_cellular_status *)arg1;
- (void)_handleWifiExtra:(struct nstat_ifnet_desc_wifi_status *)arg1;
- (void)_handleDescriptor:(struct nstat_ifnet_descriptor *)arg1;
- (id)initWithCounts:(const struct nstat_counts *)arg1 interfaceDescriptor:(struct nstat_ifnet_descriptor *)arg2 sourceIdent:(unsigned long long)arg3 seqno:(unsigned long long)arg4;

@end
