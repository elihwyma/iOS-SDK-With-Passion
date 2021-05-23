/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobAudioSettings : PBCodable

{
    unsigned int _audioUnitModel;
    unsigned int _payloadFlags;
    unsigned int _rtpSSRC;
    unsigned int _secondaryFlags;
    unsigned int _supportFlags;
    _Bool _useSBR;
    struct {
        unsigned int audioUnitModel:1;
    } _has;
}

@property (nonatomic, readonly) _Bool allowAudioRecording;
@property (nonatomic, readonly) _Bool allowAudioSwitching;
@property (nonatomic) unsigned int rtpSSRC;
@property (nonatomic) _Bool hasAudioUnitModel;
@property (nonatomic) unsigned int audioUnitModel;
@property (nonatomic) unsigned int supportFlags;
@property (nonatomic) unsigned int payloadFlags;
@property (nonatomic) unsigned int secondaryFlags;
@property (nonatomic) _Bool useSBR;

+ (_Bool)isAudioPayloadSupported:(int)arg1;
+ (int)negotiationPayloadFromPayload:(int)arg1;
+ (int)payloadFromNegotiationPayload:(int)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)newMediaNegotiatorAudioConfiguration;
- (id)initWithAudioConfiguration:(id)arg1;
- (void)printWithLogFile:(void *)arg1;

@end
