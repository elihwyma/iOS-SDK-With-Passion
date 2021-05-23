/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDCodableMedicalDate : PBCodable <Swift>

{
    long long _form;
    double _underlyingDate;
    NSString *_originalTimeZoneString;
    struct {
        unsigned int form:1;
        unsigned int underlyingDate:1;
    } _has;
}

@property (nonatomic) _Bool hasForm;
@property (nonatomic) long long form;
@property (nonatomic) _Bool hasUnderlyingDate;
@property (nonatomic) double underlyingDate;
@property (nonatomic, readonly) _Bool hasOriginalTimeZoneString;
@property (retain, nonatomic) NSString *originalTimeZoneString;

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
