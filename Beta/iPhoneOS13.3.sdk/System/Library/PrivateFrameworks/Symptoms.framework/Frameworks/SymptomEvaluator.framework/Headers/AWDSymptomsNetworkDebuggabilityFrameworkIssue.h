/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AWDSymptomsNetworkDebuggabilityFrameworkIssue : PBCodable

{
    CDStruct_95bda58d _ndfAppSymptoms;
    CDStruct_95bda58d _ndfNetworkTypes;
    unsigned long long _ndfCount;
    unsigned long long _ndfDampeningFactor;
    unsigned long long _ndfDuration;
    long long _ndfLQM;
    long long _ndfSymptomPoint;
    unsigned long long _timestamp;
    NSMutableArray *_ndfAppNames;
    int _ndfSessionType;
    NSMutableArray *_ndfSignatures;
    int _ndfTriggerType;
    struct {
        unsigned int ndfCount:1;
        unsigned int ndfDampeningFactor:1;
        unsigned int ndfDuration:1;
        unsigned int ndfLQM:1;
        unsigned int ndfSymptomPoint:1;
        unsigned int timestamp:1;
        unsigned int ndfSessionType:1;
        unsigned int ndfTriggerType:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) unsigned long long ndfNetworkTypesCount;
@property (nonatomic, readonly) int *ndfNetworkTypes;
@property (nonatomic) _Bool hasNdfCount;
@property (nonatomic) unsigned long long ndfCount;
@property (nonatomic) _Bool hasNdfDuration;
@property (nonatomic) unsigned long long ndfDuration;
@property (nonatomic) _Bool hasNdfDampeningFactor;
@property (nonatomic) unsigned long long ndfDampeningFactor;
@property (nonatomic) _Bool hasNdfTriggerType;
@property (nonatomic) int ndfTriggerType;
@property (retain, nonatomic) NSMutableArray *ndfAppNames;
@property (nonatomic, readonly) unsigned long long ndfAppSymptomsCount;
@property (nonatomic, readonly) int *ndfAppSymptoms;
@property (nonatomic) _Bool hasNdfLQM;
@property (nonatomic) long long ndfLQM;
@property (nonatomic) _Bool hasNdfSessionType;
@property (nonatomic) int ndfSessionType;
@property (retain, nonatomic) NSMutableArray *ndfSignatures;
@property (nonatomic) _Bool hasNdfSymptomPoint;
@property (nonatomic) long long ndfSymptomPoint;

+ (Class)ndfAppNameType;
+ (Class)ndfSignatureType;

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
- (void)addNdfAppName:(id)arg1;
- (void)addNdfSignature:(id)arg1;
- (void)clearNdfNetworkTypes;
- (int)ndfNetworkTypeAtIndex:(unsigned long long)arg1;
- (void)addNdfNetworkType:(int)arg1;
- (unsigned long long)ndfAppNamesCount;
- (void)clearNdfAppNames;
- (id)ndfAppNameAtIndex:(unsigned long long)arg1;
- (void)clearNdfAppSymptoms;
- (int)ndfAppSymptomAtIndex:(unsigned long long)arg1;
- (void)addNdfAppSymptom:(int)arg1;
- (unsigned long long)ndfSignaturesCount;
- (void)clearNdfSignatures;
- (id)ndfSignatureAtIndex:(unsigned long long)arg1;
- (void)setNdfNetworkTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)ndfNetworkTypesAsString:(int)arg1;
- (int)StringAsNdfNetworkTypes:(id)arg1;
- (id)ndfTriggerTypeAsString:(int)arg1;
- (int)StringAsNdfTriggerType:(id)arg1;
- (void)setNdfAppSymptoms:(int *)arg1 count:(unsigned long long)arg2;
- (id)ndfAppSymptomsAsString:(int)arg1;
- (int)StringAsNdfAppSymptoms:(id)arg1;
- (id)ndfSessionTypeAsString:(int)arg1;
- (int)StringAsNdfSessionType:(id)arg1;

@end
