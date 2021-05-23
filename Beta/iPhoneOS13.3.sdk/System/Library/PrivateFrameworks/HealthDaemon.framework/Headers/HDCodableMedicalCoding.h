/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDCodableMedicalCoding : PBCodable <Swift>

{
    NSString *_code;
    NSString *_codingSystem;
    NSString *_codingVersion;
    NSString *_displayString;
}

@property (nonatomic, readonly) _Bool hasCodingSystem;
@property (retain, nonatomic) NSString *codingSystem;
@property (nonatomic, readonly) _Bool hasCodingVersion;
@property (retain, nonatomic) NSString *codingVersion;
@property (nonatomic, readonly) _Bool hasCode;
@property (retain, nonatomic) NSString *code;
@property (nonatomic, readonly) _Bool hasDisplayString;
@property (retain, nonatomic) NSString *displayString;

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
