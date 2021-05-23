/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VisualVoicemail/Swift-Protocol.h>

@interface AWDVisualVoicemailTranscriptionRated : PBCodable <Swift>

{
    unsigned long long _timestamp;
    _Bool _accurate;
    struct {
        unsigned int timestamp:1;
        unsigned int accurate:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasAccurate;
@property (nonatomic) _Bool accurate;

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
