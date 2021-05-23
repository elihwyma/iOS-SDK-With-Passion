/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDSymptomsNetworkDiagnosticFrameworkSessionState : PBCodable

{
    unsigned long long _stateHeldForSecs;
    unsigned long long _timestamp;
    int _inState;
    NSString *_symptomName;
    struct {
        unsigned int stateHeldForSecs:1;
        unsigned int timestamp:1;
        unsigned int inState:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasInState;
@property (nonatomic) int inState;
@property (nonatomic) _Bool hasStateHeldForSecs;
@property (nonatomic) unsigned long long stateHeldForSecs;
@property (nonatomic, readonly) _Bool hasSymptomName;
@property (retain, nonatomic) NSString *symptomName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)inStateAsString:(int)arg1;
- (int)StringAsInState:(id)arg1;

@end
