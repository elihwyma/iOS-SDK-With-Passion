/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, NWAWDLibnetcoreCellularFallbackReport, NWAWDLibnetcoreConnectionStatisticsReport;

__attribute__((visibility("hidden")))
@interface NWAWDLibnetcoreTCPConnectionReport : PBCodable

{
    unsigned long long _iPAddressAttemptCount;
    unsigned long long _timestamp;
    NWAWDLibnetcoreCellularFallbackReport *_cellularFallbackReport;
    NSString *_clientIdentifier;
    NSMutableArray *_connectionAttemptStatisticsReports;
    NWAWDLibnetcoreConnectionStatisticsReport *_connectionStatisticsReport;
    int _reportReason;
    NSString *_sourceAppIdentifier;
    _Bool _delegated;
    struct {
        unsigned int iPAddressAttemptCount:1;
        unsigned int timestamp:1;
        unsigned int reportReason:1;
        unsigned int delegated:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasClientIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (nonatomic) _Bool hasDelegated;
@property (nonatomic) _Bool delegated;
@property (nonatomic) _Bool hasReportReason;
@property (nonatomic) int reportReason;
@property (nonatomic, readonly) _Bool hasConnectionStatisticsReport;
@property (retain, nonatomic) NWAWDLibnetcoreConnectionStatisticsReport *connectionStatisticsReport;
@property (nonatomic, readonly) _Bool hasCellularFallbackReport;
@property (retain, nonatomic) NWAWDLibnetcoreCellularFallbackReport *cellularFallbackReport;
@property (nonatomic) _Bool hasIPAddressAttemptCount;
@property (nonatomic) unsigned long long iPAddressAttemptCount;
@property (retain, nonatomic) NSMutableArray *connectionAttemptStatisticsReports;
@property (nonatomic, readonly) _Bool hasSourceAppIdentifier;
@property (retain, nonatomic) NSString *sourceAppIdentifier;

+ (Class)connectionAttemptStatisticsReportsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)reportReasonAsString:(int)arg1;
- (int)StringAsReportReason:(id)arg1;
- (void)clearConnectionAttemptStatisticsReports;
- (void)addConnectionAttemptStatisticsReports:(id)arg1;
- (unsigned long long)connectionAttemptStatisticsReportsCount;
- (id)connectionAttemptStatisticsReportsAtIndex:(unsigned long long)arg1;

@end
