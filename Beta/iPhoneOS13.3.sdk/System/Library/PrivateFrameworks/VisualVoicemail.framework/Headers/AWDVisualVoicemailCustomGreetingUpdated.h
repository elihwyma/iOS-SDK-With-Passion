/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VisualVoicemail/Swift-Protocol.h>

@interface AWDVisualVoicemailCustomGreetingUpdated : PBCodable <Swift>

{
    unsigned long long _failureReason;
    unsigned long long _result;
    unsigned long long _timestamp;
    struct {
        unsigned int failureReason:1;
        unsigned int result:1;
        unsigned int timestamp:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasResult;
@property (nonatomic) unsigned long long result;
@property (nonatomic) _Bool hasFailureReason;
@property (nonatomic) unsigned long long failureReason;

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
