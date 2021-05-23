/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSData, NSMutableArray;

@interface HDCodableObjectAuthorization : PBCodable <Swift>

{
    NSMutableArray *_authorizations;
    NSData *_objectUUID;
}

@property (nonatomic, readonly) _Bool hasObjectUUID;
@property (retain, nonatomic) NSData *objectUUID;
@property (retain, nonatomic) NSMutableArray *authorizations;

+ (Class)authorizationsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addAuthorizations:(id)arg1;
- (unsigned long long)authorizationsCount;
- (void)clearAuthorizations;
- (id)authorizationsAtIndex:(unsigned long long)arg1;

@end
