/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface BLTPBTransportData : PBCodable

{
    unsigned long long _sequenceNumber;
    NSData *_md5;
    NSData *_sessionIdentifier;
    unsigned int _sessionState;
    _Bool _isInitialSequenceNumber;
    struct {
        unsigned int sequenceNumber:1;
        unsigned int sessionState:1;
        unsigned int isInitialSequenceNumber:1;
    } _has;
}

@property (nonatomic) _Bool hasSequenceNumber;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic) _Bool hasIsInitialSequenceNumber;
@property (nonatomic) _Bool isInitialSequenceNumber;
@property (nonatomic, readonly) _Bool hasSessionIdentifier;
@property (retain, nonatomic) NSData *sessionIdentifier;
@property (nonatomic) _Bool hasSessionState;
@property (nonatomic) unsigned int sessionState;
@property (nonatomic, readonly) _Bool hasMd5;
@property (retain, nonatomic) NSData *md5;

+ (id)transportDataWithSequenceNumberManager:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)sessionUUID;
- (unsigned long long)backwardsCompatibleSessionState;
- (long long)setSequenceNumberOnManager:(id)arg1;

@end
