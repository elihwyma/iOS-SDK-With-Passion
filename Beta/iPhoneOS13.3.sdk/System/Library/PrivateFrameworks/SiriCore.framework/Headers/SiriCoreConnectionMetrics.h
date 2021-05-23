/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SiriCoreConnectionMetrics : NSObject

{
    NSNumber *_timeUntilOpen;
    NSNumber *_timeUntilFirstByteRead;
    NSNumber *_attemptCount;
    NSNumber *_metricsCount;
    NSNumber *_meanPing;
    NSNumber *_pingCount;
    NSNumber *_unacknowledgedPingCount;
    NSDictionary *_tcpInfoMetricsByInterfaceName;
    NSNumber *_subflowCount;
    NSNumber *_connectedSubflowCount;
    NSString *_primarySubflowInterfaceName;
    NSDictionary *_subflowSwitchCounts;
    SiriCoreConnectionMetrics *_remoteMetrics;
    NSString *_connectionMethod;
    NSString *_connectionEdgeID;
    NSArray *_connectionMethodHistory;
    NSString *_connectionEdgeType;
    NSNumber *_connectionFallbackReason;
    NSNumber *_connectionDelay;
    NSNumber *_firstTxByteDelay;
    NSString *_carrierName;
    NSNumber *_signalStrengthBars;
    NSString *_providerStyle;
    NSString *_policyId;
    NSDictionary *_flowNetworkInterfaceType;
    NSString *_wifiPhyMode;
    NSString *_wifiChannelInfo;
    NSNumber *_rssi;
    NSNumber *_snr;
    NSNumber *_isCaptive;
    NSDictionary *_symptomsBasedNetworkQuality;
    NSNumber *_dnsResolutionTime;
    NSNumber *_connectionStartTimeToDNSResolutionTimeMsec;
    NSNumber *_connectionEstablishmentTimeMsec;
    NSNumber *_connectionStartTimeToConnectionEstablishmentTimeMsec;
    NSNumber *_tlsHandshakeTimeMsec;
    NSNumber *_connectionStartTimeToTLSHandshakeTimeMsec;
    NSNumber *_idsLastMessageDelay;
    NSNumber *_idsLastSocketDelay;
    NSNumber *_idsLastSocketOpenError;
    NSString *_tlsVersion;
    NSNumber *_simSubscriptions;
}

@property (copy, nonatomic) NSNumber *timeUntilOpen;
@property (copy, nonatomic) NSNumber *timeUntilFirstByteRead;
@property (copy, nonatomic) NSNumber *attemptCount;
@property (copy, nonatomic) NSNumber *metricsCount;
@property (copy, nonatomic) NSNumber *meanPing;
@property (copy, nonatomic) NSNumber *pingCount;
@property (copy, nonatomic) NSNumber *unacknowledgedPingCount;
@property (copy, nonatomic, setter=setTCPInfoMetricsByInterfaceName:) NSDictionary *tcpInfoMetricsByInterfaceName;
@property (copy, nonatomic) NSNumber *subflowCount;
@property (copy, nonatomic) NSNumber *connectedSubflowCount;
@property (copy, nonatomic) NSString *primarySubflowInterfaceName;
@property (copy, nonatomic) NSDictionary *subflowSwitchCounts;
@property (retain, nonatomic) SiriCoreConnectionMetrics *remoteMetrics;
@property (copy, nonatomic) NSString *connectionMethod;
@property (copy, nonatomic) NSString *connectionEdgeID;
@property (copy, nonatomic) NSArray *connectionMethodHistory;
@property (copy, nonatomic) NSString *connectionEdgeType;
@property (copy, nonatomic) NSNumber *connectionFallbackReason;
@property (copy, nonatomic) NSNumber *connectionDelay;
@property (copy, nonatomic) NSNumber *firstTxByteDelay;
@property (copy, nonatomic) NSString *carrierName;
@property (copy, nonatomic) NSNumber *signalStrengthBars;
@property (copy, nonatomic) NSString *providerStyle;
@property (copy, nonatomic) NSString *policyId;
@property (copy, nonatomic) NSDictionary *flowNetworkInterfaceType;
@property (copy, nonatomic) NSString *wifiPhyMode;
@property (copy, nonatomic) NSString *wifiChannelInfo;
@property (copy, nonatomic) NSNumber *rssi;
@property (copy, nonatomic) NSNumber *snr;
@property (copy, nonatomic) NSNumber *isCaptive;
@property (copy, nonatomic) NSDictionary *symptomsBasedNetworkQuality;
@property (copy, nonatomic) NSNumber *dnsResolutionTime;
@property (copy, nonatomic) NSNumber *connectionStartTimeToDNSResolutionTimeMsec;
@property (copy, nonatomic) NSNumber *connectionEstablishmentTimeMsec;
@property (copy, nonatomic) NSNumber *connectionStartTimeToConnectionEstablishmentTimeMsec;
@property (copy, nonatomic) NSNumber *tlsHandshakeTimeMsec;
@property (copy, nonatomic) NSNumber *connectionStartTimeToTLSHandshakeTimeMsec;
@property (copy, nonatomic) NSNumber *idsLastMessageDelay;
@property (copy, nonatomic) NSNumber *idsLastSocketDelay;
@property (copy, nonatomic) NSNumber *idsLastSocketOpenError;
@property (copy, nonatomic) NSString *tlsVersion;
@property (copy, nonatomic) NSNumber *simSubscriptions;

- (void)setConnectionMetricsFromStreamForPOP:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setConnectionMetricsFromStreamForDirect:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_setConnectionMetricsFromNSPControlConnection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_setConnectionMetricsTCPInfo:(id)arg1;
- (void)setConnectionMetricsFromNWConnectionForPOP:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setConnectionMetricsFromNWConnectionForDirect:(id)arg1 isMPTCP:(_Bool)arg2 attemptedEndpoints:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)setConnectionMetricsFromStream:(id)arg1 isPop:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setConnectionMetricsFromConnection:(id)arg1 isPop:(_Bool)arg2 isMPTCP:(_Bool)arg3 attemptedEndpoints:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setConnectionMetricsForIDS:(double)arg1 messageDelay:(double)arg2 openErrorCode:(unsigned long long)arg3;
- (id)getConnectionMetricsDescription;

@end
