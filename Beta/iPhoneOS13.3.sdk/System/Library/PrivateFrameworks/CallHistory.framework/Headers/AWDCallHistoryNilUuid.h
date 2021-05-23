/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDCallHistoryNilUuid : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _callStatus;
    unsigned int _callType;
    struct {
        unsigned int timestamp:1;
        unsigned int callStatus:1;
        unsigned int callType:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasCallType;
@property (nonatomic) unsigned int callType;
@property (nonatomic) _Bool hasCallStatus;
@property (nonatomic) unsigned int callStatus;

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
