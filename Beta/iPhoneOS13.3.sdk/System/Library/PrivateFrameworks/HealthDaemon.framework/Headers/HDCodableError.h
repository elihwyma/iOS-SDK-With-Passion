/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDCodableError : PBCodable <Swift>

{
    long long _code;
    NSString *_domain;
    NSString *_localizedDescription;
    struct {
        unsigned int code:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) _Bool hasCode;
@property (nonatomic) long long code;
@property (nonatomic, readonly) _Bool hasLocalizedDescription;
@property (retain, nonatomic) NSString *localizedDescription;

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
