/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDAWDHealthKitExperimentalCondition : PBCodable <Swift>

{
    long long _testCondition;
    NSString *_experimentIdentifier;
    struct {
        unsigned int testCondition:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasExperimentIdentifier;
@property (retain, nonatomic) NSString *experimentIdentifier;
@property (nonatomic) _Bool hasTestCondition;
@property (nonatomic) long long testCondition;

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
