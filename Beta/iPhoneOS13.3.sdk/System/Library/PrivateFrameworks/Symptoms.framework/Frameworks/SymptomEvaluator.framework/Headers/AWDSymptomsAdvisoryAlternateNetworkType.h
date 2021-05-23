/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AWDSymptomsAdvisoryAlternateNetworkType : PBCodable

{
    CDStruct_95bda58d _cellEgressTriggers;
    CDStruct_95bda58d _cellIngressTriggers;
    CDStruct_95bda58d _wifiEgressTriggers;
    CDStruct_95bda58d _wifiIngressTriggers;
    unsigned long long _adviceHeldForSecs;
    unsigned long long _timestamp;
    unsigned int _activationIdentifier;
    int _advice;
    int _advisor;
    int _bailOutOf;
    unsigned int _cellularDataUsage;
    unsigned int _comingFromState;
    int _egressMobilityCode;
    int _egressTrigger;
    unsigned int _egressTriggerMultiplier;
    int _egressTriggerOn;
    unsigned int _egressTriggerPercentagex100;
    NSMutableArray *_egressTriggerSignatures;
    int _ingressMobilityCode;
    int _ingressTrigger;
    unsigned int _ingressTriggerMultiplier;
    int _ingressTriggerOn;
    unsigned int _ingressTriggerPercentagex100;
    NSMutableArray *_ingressTriggerSignatures;
    int _policy;
    unsigned int _transitionsSuppressedByMobility;
    _Bool _kernelProbingActivated;
    struct {
        unsigned int adviceHeldForSecs:1;
        unsigned int timestamp:1;
        unsigned int activationIdentifier:1;
        unsigned int advice:1;
        unsigned int advisor:1;
        unsigned int bailOutOf:1;
        unsigned int cellularDataUsage:1;
        unsigned int comingFromState:1;
        unsigned int egressMobilityCode:1;
        unsigned int egressTrigger:1;
        unsigned int egressTriggerMultiplier:1;
        unsigned int egressTriggerOn:1;
        unsigned int egressTriggerPercentagex100:1;
        unsigned int ingressMobilityCode:1;
        unsigned int ingressTrigger:1;
        unsigned int ingressTriggerMultiplier:1;
        unsigned int ingressTriggerOn:1;
        unsigned int ingressTriggerPercentagex100:1;
        unsigned int policy:1;
        unsigned int transitionsSuppressedByMobility:1;
        unsigned int kernelProbingActivated:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasAdvice;
@property (nonatomic) int advice;
@property (nonatomic) _Bool hasBailOutOf;
@property (nonatomic) int bailOutOf;
@property (nonatomic) _Bool hasAdviceHeldForSecs;
@property (nonatomic) unsigned long long adviceHeldForSecs;
@property (nonatomic) _Bool hasKernelProbingActivated;
@property (nonatomic) _Bool kernelProbingActivated;
@property (nonatomic) _Bool hasIngressTrigger;
@property (nonatomic) int ingressTrigger;
@property (nonatomic) _Bool hasIngressTriggerOn;
@property (nonatomic) int ingressTriggerOn;
@property (nonatomic) _Bool hasIngressTriggerMultiplier;
@property (nonatomic) unsigned int ingressTriggerMultiplier;
@property (nonatomic) _Bool hasIngressTriggerPercentagex100;
@property (nonatomic) unsigned int ingressTriggerPercentagex100;
@property (nonatomic) _Bool hasEgressTrigger;
@property (nonatomic) int egressTrigger;
@property (nonatomic) _Bool hasEgressTriggerOn;
@property (nonatomic) int egressTriggerOn;
@property (nonatomic) _Bool hasEgressTriggerMultiplier;
@property (nonatomic) unsigned int egressTriggerMultiplier;
@property (nonatomic) _Bool hasEgressTriggerPercentagex100;
@property (nonatomic) unsigned int egressTriggerPercentagex100;
@property (retain, nonatomic) NSMutableArray *ingressTriggerSignatures;
@property (retain, nonatomic) NSMutableArray *egressTriggerSignatures;
@property (nonatomic) _Bool hasComingFromState;
@property (nonatomic) unsigned int comingFromState;
@property (nonatomic) _Bool hasIngressMobilityCode;
@property (nonatomic) int ingressMobilityCode;
@property (nonatomic) _Bool hasEgressMobilityCode;
@property (nonatomic) int egressMobilityCode;
@property (nonatomic) _Bool hasTransitionsSuppressedByMobility;
@property (nonatomic) unsigned int transitionsSuppressedByMobility;
@property (nonatomic) _Bool hasCellularDataUsage;
@property (nonatomic) unsigned int cellularDataUsage;
@property (nonatomic) _Bool hasPolicy;
@property (nonatomic) int policy;
@property (nonatomic) _Bool hasAdvisor;
@property (nonatomic) int advisor;
@property (nonatomic) _Bool hasActivationIdentifier;
@property (nonatomic) unsigned int activationIdentifier;
@property (nonatomic, readonly) unsigned long long wifiIngressTriggersCount;
@property (nonatomic, readonly) int *wifiIngressTriggers;
@property (nonatomic, readonly) unsigned long long cellIngressTriggersCount;
@property (nonatomic, readonly) int *cellIngressTriggers;
@property (nonatomic, readonly) unsigned long long wifiEgressTriggersCount;
@property (nonatomic, readonly) int *wifiEgressTriggers;
@property (nonatomic, readonly) unsigned long long cellEgressTriggersCount;
@property (nonatomic, readonly) int *cellEgressTriggers;

+ (Class)ingressTriggerSignatureType;
+ (Class)egressTriggerSignatureType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addIngressTriggerSignature:(id)arg1;
- (void)addEgressTriggerSignature:(id)arg1;
- (unsigned long long)ingressTriggerSignaturesCount;
- (void)clearIngressTriggerSignatures;
- (id)ingressTriggerSignatureAtIndex:(unsigned long long)arg1;
- (unsigned long long)egressTriggerSignaturesCount;
- (void)clearEgressTriggerSignatures;
- (id)egressTriggerSignatureAtIndex:(unsigned long long)arg1;
- (void)clearWifiIngressTriggers;
- (int)wifiIngressTriggersAtIndex:(unsigned long long)arg1;
- (void)addWifiIngressTriggers:(int)arg1;
- (void)clearCellIngressTriggers;
- (int)cellIngressTriggersAtIndex:(unsigned long long)arg1;
- (void)addCellIngressTriggers:(int)arg1;
- (void)clearWifiEgressTriggers;
- (int)wifiEgressTriggersAtIndex:(unsigned long long)arg1;
- (void)addWifiEgressTriggers:(int)arg1;
- (void)clearCellEgressTriggers;
- (int)cellEgressTriggersAtIndex:(unsigned long long)arg1;
- (void)addCellEgressTriggers:(int)arg1;
- (id)adviceAsString:(int)arg1;
- (int)StringAsAdvice:(id)arg1;
- (id)bailOutOfAsString:(int)arg1;
- (int)StringAsBailOutOf:(id)arg1;
- (id)ingressTriggerAsString:(int)arg1;
- (int)StringAsIngressTrigger:(id)arg1;
- (id)ingressTriggerOnAsString:(int)arg1;
- (int)StringAsIngressTriggerOn:(id)arg1;
- (id)egressTriggerAsString:(int)arg1;
- (int)StringAsEgressTrigger:(id)arg1;
- (id)egressTriggerOnAsString:(int)arg1;
- (int)StringAsEgressTriggerOn:(id)arg1;
- (id)ingressMobilityCodeAsString:(int)arg1;
- (int)StringAsIngressMobilityCode:(id)arg1;
- (id)egressMobilityCodeAsString:(int)arg1;
- (int)StringAsEgressMobilityCode:(id)arg1;
- (id)policyAsString:(int)arg1;
- (int)StringAsPolicy:(id)arg1;
- (id)advisorAsString:(int)arg1;
- (int)StringAsAdvisor:(id)arg1;
- (void)setWifiIngressTriggers:(int *)arg1 count:(unsigned long long)arg2;
- (id)wifiIngressTriggersAsString:(int)arg1;
- (int)StringAsWifiIngressTriggers:(id)arg1;
- (void)setCellIngressTriggers:(int *)arg1 count:(unsigned long long)arg2;
- (id)cellIngressTriggersAsString:(int)arg1;
- (int)StringAsCellIngressTriggers:(id)arg1;
- (void)setWifiEgressTriggers:(int *)arg1 count:(unsigned long long)arg2;
- (id)wifiEgressTriggersAsString:(int)arg1;
- (int)StringAsWifiEgressTriggers:(id)arg1;
- (void)setCellEgressTriggers:(int *)arg1 count:(unsigned long long)arg2;
- (id)cellEgressTriggersAsString:(int)arg1;
- (int)StringAsCellEgressTriggers:(id)arg1;

@end
