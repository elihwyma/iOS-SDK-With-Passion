/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDCodableEntityIdentifier : PBCodable <Swift>

{
    long long _identifier;
    NSString *_schema;
    struct {
        unsigned int identifier:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasSchema;
@property (retain, nonatomic) NSString *schema;
@property (nonatomic) _Bool hasIdentifier;
@property (nonatomic) long long identifier;

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
