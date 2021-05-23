/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/Swift-Protocol.h>

@interface EDPETQuotaReachedEvent : PBCodable <Swift>

{
    unsigned long long _droppedEventsCount;
    unsigned long long _timestamp;
    unsigned int _sequenceNumber;
    int _timezoneOffset;
    struct {
        unsigned int droppedEventsCount:1;
        unsigned int timestamp:1;
        unsigned int sequenceNumber:1;
        unsigned int timezoneOffset:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasSequenceNumber;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) _Bool hasTimezoneOffset;
@property (nonatomic) int timezoneOffset;
@property (nonatomic) _Bool hasDroppedEventsCount;
@property (nonatomic) unsigned long long droppedEventsCount;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (int)messageFrameType;

@end
