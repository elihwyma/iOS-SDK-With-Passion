/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDCodableQuantity : PBCodable <Swift>

{
    double _value;
    NSString *_unitString;
    CDStruct_01ef6375 _has;
}

@property (nonatomic) _Bool hasValue;
@property (nonatomic) double value;
@property (nonatomic, readonly) _Bool hasUnitString;
@property (retain, nonatomic) NSString *unitString;

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
