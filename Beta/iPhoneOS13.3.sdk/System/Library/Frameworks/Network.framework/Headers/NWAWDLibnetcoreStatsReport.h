/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NWAWDLibnetcoreMPTCPStatsReport, NWAWDLibnetcoreMbufStatsReport, NWAWDLibnetcoreNetworkdStatsReport, NWAWDLibnetcoreTCPECNStatsReport, NWAWDLibnetcoreTCPStatsReport, NWAWDLibnetcoreTCPTFOStatsReport, NWAWDNWAPIUsage;

__attribute__((visibility("hidden")))
@interface NWAWDLibnetcoreStatsReport : PBCodable

{
    unsigned long long _timestamp;
    NWAWDLibnetcoreMbufStatsReport *_mbufStatisticsReport;
    NWAWDLibnetcoreMPTCPStatsReport *_mptcpStatisticsReport;
    NWAWDLibnetcoreNetworkdStatsReport *_networkdStatisticsReport;
    NWAWDNWAPIUsage *_nwAPIUsageReport;
    unsigned int _reportReason;
    NSMutableArray *_tcpECNInterfaceReports;
    NWAWDLibnetcoreTCPECNStatsReport *_tcpECNStatisticsReport;
    NWAWDLibnetcoreTCPStatsReport *_tcpStatisticsReport;
    NWAWDLibnetcoreTCPTFOStatsReport *_tcpTFOStatisticsReport;
    struct {
        unsigned int timestamp:1;
        unsigned int reportReason:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasReportReason;
@property (nonatomic) unsigned int reportReason;
@property (nonatomic, readonly) _Bool hasMbufStatisticsReport;
@property (retain, nonatomic) NWAWDLibnetcoreMbufStatsReport *mbufStatisticsReport;
@property (nonatomic, readonly) _Bool hasTcpStatisticsReport;
@property (retain, nonatomic) NWAWDLibnetcoreTCPStatsReport *tcpStatisticsReport;
@property (nonatomic, readonly) _Bool hasTcpECNStatisticsReport;
@property (retain, nonatomic) NWAWDLibnetcoreTCPECNStatsReport *tcpECNStatisticsReport;
@property (nonatomic, readonly) _Bool hasTcpTFOStatisticsReport;
@property (retain, nonatomic) NWAWDLibnetcoreTCPTFOStatsReport *tcpTFOStatisticsReport;
@property (nonatomic, readonly) _Bool hasNetworkdStatisticsReport;
@property (retain, nonatomic) NWAWDLibnetcoreNetworkdStatsReport *networkdStatisticsReport;
@property (retain, nonatomic) NSMutableArray *tcpECNInterfaceReports;
@property (nonatomic, readonly) _Bool hasNwAPIUsageReport;
@property (retain, nonatomic) NWAWDNWAPIUsage *nwAPIUsageReport;
@property (nonatomic, readonly) _Bool hasMptcpStatisticsReport;
@property (retain, nonatomic) NWAWDLibnetcoreMPTCPStatsReport *mptcpStatisticsReport;

+ (Class)tcpECNInterfaceReportType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearTcpECNInterfaceReports;
- (void)addTcpECNInterfaceReport:(id)arg1;
- (unsigned long long)tcpECNInterfaceReportsCount;
- (id)tcpECNInterfaceReportAtIndex:(unsigned long long)arg1;

@end
