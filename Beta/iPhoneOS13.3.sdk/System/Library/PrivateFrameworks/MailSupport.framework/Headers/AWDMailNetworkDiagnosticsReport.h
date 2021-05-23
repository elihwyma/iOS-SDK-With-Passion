/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDMailNetworkDiagnosticsReport : PBCodable

{
    unsigned long long _numActiveCalls;
    unsigned long long _numBackgroundWifiClients;
    unsigned long long _timestamp;
    NSString *_dataIndicator;
    int _dataInterface;
    unsigned int _reachabilityFlags;
    _Bool _cellData;
    _Bool _dnsEnabled;
    _Bool _roamingAllowed;
    _Bool _wifiEnabled;
    struct {
        unsigned int numActiveCalls:1;
        unsigned int numBackgroundWifiClients:1;
        unsigned int timestamp:1;
        unsigned int dataInterface:1;
        unsigned int reachabilityFlags:1;
        unsigned int cellData:1;
        unsigned int dnsEnabled:1;
        unsigned int roamingAllowed:1;
        unsigned int wifiEnabled:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasReachabilityFlags;
@property (nonatomic) unsigned int reachabilityFlags;
@property (nonatomic) _Bool hasDnsEnabled;
@property (nonatomic) _Bool dnsEnabled;
@property (nonatomic) _Bool hasWifiEnabled;
@property (nonatomic) _Bool wifiEnabled;
@property (nonatomic) _Bool hasDataInterface;
@property (nonatomic) int dataInterface;
@property (nonatomic) _Bool hasCellData;
@property (nonatomic) _Bool cellData;
@property (nonatomic, readonly) _Bool hasDataIndicator;
@property (retain, nonatomic) NSString *dataIndicator;
@property (nonatomic) _Bool hasRoamingAllowed;
@property (nonatomic) _Bool roamingAllowed;
@property (nonatomic) _Bool hasNumActiveCalls;
@property (nonatomic) unsigned long long numActiveCalls;
@property (nonatomic) _Bool hasNumBackgroundWifiClients;
@property (nonatomic) unsigned long long numBackgroundWifiClients;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
