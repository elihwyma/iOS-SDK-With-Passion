/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData;

@interface BLTPBAckInitialSequenceNumberRequest : PBRequest

{
    NSData *_sessionIdentifier;
    unsigned int _sessionState;
    _Bool _assert;
    struct {
        unsigned int sessionState:1;
        unsigned int assert:1;
    } _has;
}

@property (nonatomic) _Bool hasAssert;
@property (nonatomic) _Bool assert;
@property (nonatomic, readonly) _Bool hasSessionIdentifier;
@property (retain, nonatomic) NSData *sessionIdentifier;
@property (nonatomic) _Bool hasSessionState;
@property (nonatomic) unsigned int sessionState;

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
