/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableSource, NSData, NSMutableArray;

@interface HDCodableSourceAuthorization : PBCodable <Swift>

{
    NSMutableArray *_authorizations;
    NSData *_backupUUID;
    HDCodableSource *_source;
    NSData *_sourceUUID;
}

@property (nonatomic, readonly) _Bool hasSourceUUID;
@property (retain, nonatomic) NSData *sourceUUID;
@property (retain, nonatomic) NSMutableArray *authorizations;
@property (nonatomic, readonly) _Bool hasBackupUUID;
@property (retain, nonatomic) NSData *backupUUID;
@property (nonatomic, readonly) _Bool hasSource;
@property (retain, nonatomic) HDCodableSource *source;

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
- (id)decodedSourceUUID;
- (id)decodedBackupUUID;

@end
