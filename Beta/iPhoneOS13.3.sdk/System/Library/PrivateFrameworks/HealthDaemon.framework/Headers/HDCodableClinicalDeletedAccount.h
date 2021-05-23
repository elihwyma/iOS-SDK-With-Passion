/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSData;

@interface HDCodableClinicalDeletedAccount : PBCodable <Swift>

{
    double _deletionDate;
    NSData *_syncIdentifier;
    struct {
        unsigned int deletionDate:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasSyncIdentifier;
@property (retain, nonatomic) NSData *syncIdentifier;
@property (nonatomic) _Bool hasDeletionDate;
@property (nonatomic) double deletionDate;

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
