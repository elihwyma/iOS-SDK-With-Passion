/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDCodableSemanticDate : PBCodable <Swift>

{
    double _date;
    NSString *_keyPath;
    struct {
        unsigned int date:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasKeyPath;
@property (retain, nonatomic) NSString *keyPath;
@property (nonatomic) _Bool hasDate;
@property (nonatomic) double date;

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
