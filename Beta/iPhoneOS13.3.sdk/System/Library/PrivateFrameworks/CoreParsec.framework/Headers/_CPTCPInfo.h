/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface _CPTCPInfo : PBCodable

{
    unsigned int _avgRTT;
    unsigned int _connectAttempts;
    unsigned int _connectSuccesses;
    unsigned int _minRTT;
    unsigned int _varRTT;
    unsigned long long _cellRXPackets;
    unsigned long long _cellTXPackets;
    unsigned long long _rxBytes;
    unsigned long long _rxDuplicateBytes;
    unsigned long long _rxOutOfOrderBytes;
    unsigned long long _rxPackets;
    unsigned long long _txBytes;
    unsigned long long _txPackets;
    unsigned long long _txRetransmitPackets;
    unsigned long long _wifiRXPackets;
    unsigned long long _wifiTXPackets;
    unsigned long long _wiredRXPackets;
    unsigned long long _wiredTXPackets;
    NSString *_statsType;
    unsigned long long _txRetransmitBytes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned int avgRTT;
@property (nonatomic) unsigned long long cellRXPackets;
@property (nonatomic) unsigned long long cellTXPackets;
@property (nonatomic) unsigned int connectAttempts;
@property (nonatomic) unsigned int connectSuccesses;
@property (nonatomic) unsigned int minRTT;
@property (nonatomic) unsigned long long rxBytes;
@property (nonatomic) unsigned long long rxDuplicateBytes;
@property (nonatomic) unsigned long long rxOutOfOrderBytes;
@property (nonatomic) unsigned long long rxPackets;
@property (nonatomic) unsigned long long txBytes;
@property (nonatomic) unsigned long long txPackets;
@property (nonatomic) unsigned long long txRetransmitPackets;
@property (nonatomic) unsigned int varRTT;
@property (nonatomic) unsigned long long wifiRXPackets;
@property (nonatomic) unsigned long long wifiTXPackets;
@property (nonatomic) unsigned long long wiredRXPackets;
@property (nonatomic) unsigned long long wiredTXPackets;
@property (copy, nonatomic) NSString *statsType;
@property (nonatomic) unsigned long long txRetransmitBytes;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithTelemetryDictionary:(id)arg1;

@end
