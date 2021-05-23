/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDCodableFHIRIdentifier : PBCodable <Swift>

{
    NSString *_identifier;
    NSString *_resourceType;
}

@property (nonatomic, readonly) _Bool hasResourceType;
@property (retain, nonatomic) NSString *resourceType;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;

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
