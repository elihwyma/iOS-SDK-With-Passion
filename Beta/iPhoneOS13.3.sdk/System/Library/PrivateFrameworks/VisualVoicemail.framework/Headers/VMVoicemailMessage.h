/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VisualVoicemail/Swift-Protocol.h>

@class NSString, VMAudioMessage, VMTranscriptMessage;

@interface VMVoicemailMessage : PBCodable <Swift>

{
    double _date;
    double _duration;
    VMAudioMessage *_audio;
    NSString *_callbackDestinationID;
    NSString *_dataURL;
    unsigned int _flags;
    unsigned int _identifier;
    unsigned int _protocolVersion;
    NSString *_receiverDestinationID;
    unsigned int _remoteUID;
    NSString *_senderDestinationID;
    VMTranscriptMessage *_transcript;
    NSString *_transcriptionURL;
    struct {
        unsigned int date:1;
        unsigned int duration:1;
        unsigned int flags:1;
        unsigned int identifier:1;
        unsigned int protocolVersion:1;
        unsigned int remoteUID:1;
    } _has;
}

@property (nonatomic) _Bool hasRemoteUID;
@property (nonatomic) unsigned int remoteUID;
@property (nonatomic) _Bool hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) _Bool hasDate;
@property (nonatomic) double date;
@property (nonatomic, readonly) _Bool hasSenderDestinationID;
@property (retain, nonatomic) NSString *senderDestinationID;
@property (nonatomic, readonly) _Bool hasCallbackDestinationID;
@property (retain, nonatomic) NSString *callbackDestinationID;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) double duration;
@property (nonatomic, readonly) _Bool hasDataURL;
@property (retain, nonatomic) NSString *dataURL;
@property (nonatomic) _Bool hasFlags;
@property (nonatomic) unsigned int flags;
@property (nonatomic, readonly) _Bool hasTranscriptionURL;
@property (retain, nonatomic) NSString *transcriptionURL;
@property (nonatomic, readonly) _Bool hasTranscript;
@property (retain, nonatomic) VMTranscriptMessage *transcript;
@property (nonatomic, readonly) _Bool hasAudio;
@property (retain, nonatomic) VMAudioMessage *audio;
@property (nonatomic) _Bool hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic, readonly) _Bool hasReceiverDestinationID;
@property (retain, nonatomic) NSString *receiverDestinationID;

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
