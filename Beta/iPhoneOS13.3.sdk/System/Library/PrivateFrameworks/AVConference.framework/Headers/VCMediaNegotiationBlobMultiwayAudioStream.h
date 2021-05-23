/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobMultiwayAudioStream : PBCodable

{
    unsigned int _maxMediaBitrate;
    unsigned int _maxNetworkBitrate;
    float _maxPacketsPerSecond;
    unsigned int _qualityIndex;
    unsigned int _repairedMaxNetworkBitrate;
    unsigned int _repairedStreamID;
    unsigned int _ssrc;
    unsigned int _streamID;
    unsigned int _supportedPayloads;
    struct {
        unsigned int maxMediaBitrate:1;
        unsigned int maxNetworkBitrate:1;
        unsigned int maxPacketsPerSecond:1;
        unsigned int repairedMaxNetworkBitrate:1;
        unsigned int repairedStreamID:1;
        unsigned int supportedPayloads:1;
    } _has;
}

@property (nonatomic) unsigned int ssrc;
@property (nonatomic) _Bool hasMaxNetworkBitrate;
@property (nonatomic) unsigned int maxNetworkBitrate;
@property (nonatomic) _Bool hasSupportedPayloads;
@property (nonatomic) unsigned int supportedPayloads;
@property (nonatomic) unsigned int streamID;
@property (nonatomic) unsigned int qualityIndex;
@property (nonatomic) _Bool hasMaxMediaBitrate;
@property (nonatomic) unsigned int maxMediaBitrate;
@property (nonatomic) _Bool hasMaxPacketsPerSecond;
@property (nonatomic) float maxPacketsPerSecond;
@property (nonatomic) _Bool hasRepairedStreamID;
@property (nonatomic) unsigned int repairedStreamID;
@property (nonatomic) _Bool hasRepairedMaxNetworkBitrate;
@property (nonatomic) unsigned int repairedMaxNetworkBitrate;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)newMultiwayAudioStream;
- (id)initWithStreamConfig:(id)arg1;
- (void)printWithLogFile:(void *)arg1;
- (void)setPayloadFlagsWithPayloads:(id)arg1;

@end
