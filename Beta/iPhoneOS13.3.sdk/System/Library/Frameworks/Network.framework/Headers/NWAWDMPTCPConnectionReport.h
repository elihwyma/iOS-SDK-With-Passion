/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface NWAWDMPTCPConnectionReport : PBCodable

{
    double _establishmentTime;
    double _postConnectSessionLifetime;
    unsigned long long _timestamp;
    NSString *_clientId;
    int _establishmentFailureError;
    NSString *_establishmentInterfaceName;
    int _establishmentSynRetransmits;
    NSMutableArray *_interfaceReports;
    int _postConnectSubflowAttemptCount;
    int _postConnectSubflowMaxSubflowCount;
    int _subflowSwitchingCount;
    NSMutableArray *_subflowSwitchingReports;
    _Bool _establishmentCellularFallback;
    _Bool _establishmentForcedTcpFallback;
    _Bool _establishmentSuccess;
    _Bool _establishmentTcpFallback;
    _Bool _postConnectMultiHomed;
    _Bool _postConnectSingleHomed;
    struct {
        unsigned int establishmentTime:1;
        unsigned int postConnectSessionLifetime:1;
        unsigned int timestamp:1;
        unsigned int establishmentFailureError:1;
        unsigned int establishmentSynRetransmits:1;
        unsigned int postConnectSubflowAttemptCount:1;
        unsigned int postConnectSubflowMaxSubflowCount:1;
        unsigned int subflowSwitchingCount:1;
        unsigned int establishmentCellularFallback:1;
        unsigned int establishmentForcedTcpFallback:1;
        unsigned int establishmentSuccess:1;
        unsigned int establishmentTcpFallback:1;
        unsigned int postConnectMultiHomed:1;
        unsigned int postConnectSingleHomed:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasClientId;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic, readonly) _Bool hasEstablishmentInterfaceName;
@property (retain, nonatomic) NSString *establishmentInterfaceName;
@property (nonatomic) _Bool hasEstablishmentSuccess;
@property (nonatomic) _Bool establishmentSuccess;
@property (nonatomic) _Bool hasEstablishmentFailureError;
@property (nonatomic) int establishmentFailureError;
@property (nonatomic) _Bool hasEstablishmentTcpFallback;
@property (nonatomic) _Bool establishmentTcpFallback;
@property (nonatomic) _Bool hasEstablishmentCellularFallback;
@property (nonatomic) _Bool establishmentCellularFallback;
@property (nonatomic) _Bool hasEstablishmentTime;
@property (nonatomic) double establishmentTime;
@property (nonatomic) _Bool hasEstablishmentSynRetransmits;
@property (nonatomic) int establishmentSynRetransmits;
@property (nonatomic) _Bool hasEstablishmentForcedTcpFallback;
@property (nonatomic) _Bool establishmentForcedTcpFallback;
@property (nonatomic) _Bool hasPostConnectMultiHomed;
@property (nonatomic) _Bool postConnectMultiHomed;
@property (nonatomic) _Bool hasPostConnectSingleHomed;
@property (nonatomic) _Bool postConnectSingleHomed;
@property (nonatomic) _Bool hasPostConnectSubflowAttemptCount;
@property (nonatomic) int postConnectSubflowAttemptCount;
@property (nonatomic) _Bool hasPostConnectSubflowMaxSubflowCount;
@property (nonatomic) int postConnectSubflowMaxSubflowCount;
@property (nonatomic) _Bool hasPostConnectSessionLifetime;
@property (nonatomic) double postConnectSessionLifetime;
@property (nonatomic) _Bool hasSubflowSwitchingCount;
@property (nonatomic) int subflowSwitchingCount;
@property (retain, nonatomic) NSMutableArray *interfaceReports;
@property (retain, nonatomic) NSMutableArray *subflowSwitchingReports;

+ (Class)interfaceReportsType;
+ (Class)subflowSwitchingReportsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearInterfaceReports;
- (void)addInterfaceReports:(id)arg1;
- (unsigned long long)interfaceReportsCount;
- (id)interfaceReportsAtIndex:(unsigned long long)arg1;
- (void)clearSubflowSwitchingReports;
- (void)addSubflowSwitchingReports:(id)arg1;
- (unsigned long long)subflowSwitchingReportsCount;
- (id)subflowSwitchingReportsAtIndex:(unsigned long long)arg1;

@end
