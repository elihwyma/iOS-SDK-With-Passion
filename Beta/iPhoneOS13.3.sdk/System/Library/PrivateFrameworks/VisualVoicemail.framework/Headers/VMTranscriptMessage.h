/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VisualVoicemail/Swift-Protocol.h>

@class NSData;

@interface VMTranscriptMessage : PBCodable <Swift>

{
    unsigned int _protocolVersion;
    NSData *_transcriptionData;
    CDStruct_f86102d7 _has;
}

@property (nonatomic) _Bool hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic, readonly) _Bool hasTranscriptionData;
@property (retain, nonatomic) NSData *transcriptionData;

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
