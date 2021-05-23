/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDAWDHealthKitClinicalOntologyIndexingEvent : PBCodable <Swift>

{
    unsigned long long _timestamp;
    NSString *_failingAction;
    NSString *_failingKeyPath;
    CDStruct_b5306035 _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasFailingKeyPath;
@property (retain, nonatomic) NSString *failingKeyPath;
@property (nonatomic, readonly) _Bool hasFailingAction;
@property (retain, nonatomic) NSString *failingAction;

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
