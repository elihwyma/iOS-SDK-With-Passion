/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDSymptomsSignificantOperationalEvent : PBCodable

{
    long long _errorCode;
    unsigned long long _timestamp;
    NSString *_alternateName;
    int _error;
    NSString *_errorDomain;
    int _name;
    int _status;
    struct {
        unsigned int errorCode:1;
        unsigned int timestamp:1;
        unsigned int error:1;
        unsigned int name:1;
        unsigned int status:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasName;
@property (nonatomic) int name;
@property (nonatomic, readonly) _Bool hasAlternateName;
@property (retain, nonatomic) NSString *alternateName;
@property (nonatomic) _Bool hasError;
@property (nonatomic) int error;
@property (nonatomic, readonly) _Bool hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) _Bool hasErrorCode;
@property (nonatomic) long long errorCode;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (id)nameAsString:(int)arg1;
- (int)StringAsName:(id)arg1;
- (id)errorAsString:(int)arg1;
- (int)StringAsError:(id)arg1;

@end
