/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSDictionary, NSString;

@interface _CPTuscanyConnectionInfo : PBCodable

{
    _Bool _isMultipath;
    _Bool _TFOsucceeded;
    _Bool _isTFOProbeSucceeded;
    int _pathType;
    int _fallbackReason;
    int _fallbackReasonCategory;
    int _edgeType;
    unsigned int _multipathSubflowCount;
    unsigned int _multipathConnectedSubflowCount;
    unsigned int _multipathPrimarySubflowInterfaceIndex;
    int _IPType;
    int _interfaceType;
    unsigned int _minimumRTT;
    int _tunnelConnectionError;
    unsigned int _initialBytesLeftOver;
    double _fallbackDelay;
    NSString *_edgeAddress;
    NSDictionary *_multipathSubflowSwitchCounts;
    double _firstTxByteTimeStamp;
    double _firstTxByteDelay;
    double _connectionDelay;
    double _timeIntervalSinceLastUsage;
    double _timeToFirstByte;
    NSDictionary *_tcpInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int pathType;
@property (nonatomic) int fallbackReason;
@property (nonatomic) int fallbackReasonCategory;
@property (nonatomic) double fallbackDelay;
@property (nonatomic) int edgeType;
@property (copy, nonatomic) NSString *edgeAddress;
@property (nonatomic) _Bool isMultipath;
@property (nonatomic) unsigned int multipathSubflowCount;
@property (nonatomic) unsigned int multipathConnectedSubflowCount;
@property (nonatomic) unsigned int multipathPrimarySubflowInterfaceIndex;
@property (copy, nonatomic) NSDictionary *multipathSubflowSwitchCounts;
@property (nonatomic) double firstTxByteTimeStamp;
@property (nonatomic) double firstTxByteDelay;
@property (nonatomic) double connectionDelay;
@property (nonatomic) _Bool TFOsucceeded;
@property (nonatomic) int IPType;
@property (nonatomic) int interfaceType;
@property (nonatomic) unsigned int minimumRTT;
@property (nonatomic) double timeIntervalSinceLastUsage;
@property (nonatomic) double timeToFirstByte;
@property (nonatomic) int tunnelConnectionError;
@property (nonatomic) _Bool isTFOProbeSucceeded;
@property (nonatomic) unsigned int initialBytesLeftOver;
@property (copy, nonatomic) NSDictionary *tcpInfo;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)setMultipathSubflowSwitchCounts:(int)arg1 forKey:(id)arg2;
- (void)setTcpInfo:(id)arg1 forKey:(id)arg2;
- (_Bool)getMultipathSubflowSwitchCounts:(int *)arg1 forKey:(id)arg2;
- (_Bool)getTcpInfo:(id *)arg1 forKey:(id)arg2;

@end
