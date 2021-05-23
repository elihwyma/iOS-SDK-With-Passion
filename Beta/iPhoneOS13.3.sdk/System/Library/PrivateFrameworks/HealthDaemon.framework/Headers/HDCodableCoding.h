/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDCodableCoding : PBCodable <Swift>

{
    NSString *_code;
    NSString *_system;
    NSString *_version;
}

@property (nonatomic, readonly) _Bool hasSystem;
@property (retain, nonatomic) NSString *system;
@property (nonatomic, readonly) _Bool hasVersion;
@property (retain, nonatomic) NSString *version;
@property (nonatomic, readonly) _Bool hasCode;
@property (retain, nonatomic) NSString *code;

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
