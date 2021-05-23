/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBCodable.h>

@class SYPeer, SYVectorClock;

@interface SYMessageHeader : PBCodable

{
    unsigned long long _sequenceNumber;
    double _timeout;
    double _timestamp;
    SYPeer *_sender;
    SYVectorClock *_state;
    unsigned int _version;
    struct {
        unsigned int timeout:1;
    } _has;
}

@property (nonatomic) double timestamp;
@property (retain, nonatomic) SYPeer *sender;
@property (retain, nonatomic) SYVectorClock *state;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic) _Bool hasTimeout;
@property (nonatomic) double timeout;

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
