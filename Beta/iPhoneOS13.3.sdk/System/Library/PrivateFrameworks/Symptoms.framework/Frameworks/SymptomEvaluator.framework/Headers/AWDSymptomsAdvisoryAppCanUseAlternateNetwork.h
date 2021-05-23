/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDSymptomsAdvisoryAppCanUseAlternateNetwork : PBCodable

{
    unsigned long long _allFlows;
    unsigned long long _altUsage;
    unsigned long long _jumboFlows;
    unsigned long long _timestamp;
    unsigned long long _wifiUsage;
    unsigned long long _wwanUsage;
    int _bailOutOf;
    NSString *_bundleName;
    int _deliberation;
    int _rationale;
    struct {
        unsigned int allFlows:1;
        unsigned int altUsage:1;
        unsigned int jumboFlows:1;
        unsigned int timestamp:1;
        unsigned int wifiUsage:1;
        unsigned int wwanUsage:1;
        unsigned int bailOutOf:1;
        unsigned int deliberation:1;
        unsigned int rationale:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasBundleName;
@property (retain, nonatomic) NSString *bundleName;
@property (nonatomic) _Bool hasBailOutOf;
@property (nonatomic) int bailOutOf;
@property (nonatomic) _Bool hasDeliberation;
@property (nonatomic) int deliberation;
@property (nonatomic) _Bool hasRationale;
@property (nonatomic) int rationale;
@property (nonatomic) _Bool hasWwanUsage;
@property (nonatomic) unsigned long long wwanUsage;
@property (nonatomic) _Bool hasWifiUsage;
@property (nonatomic) unsigned long long wifiUsage;
@property (nonatomic) _Bool hasAltUsage;
@property (nonatomic) unsigned long long altUsage;
@property (nonatomic) _Bool hasAllFlows;
@property (nonatomic) unsigned long long allFlows;
@property (nonatomic) _Bool hasJumboFlows;
@property (nonatomic) unsigned long long jumboFlows;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)bailOutOfAsString:(int)arg1;
- (int)StringAsBailOutOf:(id)arg1;
- (id)deliberationAsString:(int)arg1;
- (int)StringAsDeliberation:(id)arg1;
- (id)rationaleAsString:(int)arg1;
- (int)StringAsRationale:(id)arg1;

@end
