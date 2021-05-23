/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface AWDSymptomsNetworkLowInternetModeRecord : PBCodable

{
    unsigned long long _limConnTimeoutRatePercent;
    unsigned long long _limDLMaxBWBps;
    unsigned long long _limPacketLossRatePercent;
    unsigned long long _limPacketOOORatePercent;
    unsigned long long _limRTTAvgMilliseconds;
    unsigned long long _limRTTMinMilliseconds;
    unsigned long long _limRTTVarMilliseconds;
    unsigned long long _limULMaxBWBps;
    unsigned long long _timestamp;
    unsigned int _limDLDetected;
    unsigned int _limInterfaceType;
    NSData *_limSignature;
    unsigned int _limULDetected;
    struct {
        unsigned int limConnTimeoutRatePercent:1;
        unsigned int limDLMaxBWBps:1;
        unsigned int limPacketLossRatePercent:1;
        unsigned int limPacketOOORatePercent:1;
        unsigned int limRTTAvgMilliseconds:1;
        unsigned int limRTTMinMilliseconds:1;
        unsigned int limRTTVarMilliseconds:1;
        unsigned int limULMaxBWBps:1;
        unsigned int timestamp:1;
        unsigned int limDLDetected:1;
        unsigned int limInterfaceType:1;
        unsigned int limULDetected:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasLimSignature;
@property (retain, nonatomic) NSData *limSignature;
@property (nonatomic) _Bool hasLimDLMaxBWBps;
@property (nonatomic) unsigned long long limDLMaxBWBps;
@property (nonatomic) _Bool hasLimULMaxBWBps;
@property (nonatomic) unsigned long long limULMaxBWBps;
@property (nonatomic) _Bool hasLimPacketLossRatePercent;
@property (nonatomic) unsigned long long limPacketLossRatePercent;
@property (nonatomic) _Bool hasLimPacketOOORatePercent;
@property (nonatomic) unsigned long long limPacketOOORatePercent;
@property (nonatomic) _Bool hasLimRTTVarMilliseconds;
@property (nonatomic) unsigned long long limRTTVarMilliseconds;
@property (nonatomic) _Bool hasLimRTTMinMilliseconds;
@property (nonatomic) unsigned long long limRTTMinMilliseconds;
@property (nonatomic) _Bool hasLimRTTAvgMilliseconds;
@property (nonatomic) unsigned long long limRTTAvgMilliseconds;
@property (nonatomic) _Bool hasLimConnTimeoutRatePercent;
@property (nonatomic) unsigned long long limConnTimeoutRatePercent;
@property (nonatomic) _Bool hasLimDLDetected;
@property (nonatomic) unsigned int limDLDetected;
@property (nonatomic) _Bool hasLimULDetected;
@property (nonatomic) unsigned int limULDetected;
@property (nonatomic) _Bool hasLimInterfaceType;
@property (nonatomic) unsigned int limInterfaceType;

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
