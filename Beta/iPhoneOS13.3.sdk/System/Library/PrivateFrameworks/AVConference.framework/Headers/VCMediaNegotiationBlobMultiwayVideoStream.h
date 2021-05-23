/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobMultiwayVideoStream : PBCodable

{
    unsigned int _frameRate;
    unsigned int _keyFrameInterval;
    unsigned int _maxMediaBitrate;
    unsigned int _maxNetworkBitrate;
    unsigned int _maxPacketsPerSecond;
    unsigned int _metadata;
    unsigned int _payload;
    unsigned int _qualityIndex;
    unsigned int _repairedMaxNetworkBitrate;
    unsigned int _repairedStreamID;
    unsigned int _ssrc;
    unsigned int _streamID;
    unsigned int _supportedVideoFormats;
    struct {
        unsigned int maxMediaBitrate:1;
        unsigned int maxNetworkBitrate:1;
        unsigned int maxPacketsPerSecond:1;
        unsigned int metadata:1;
        unsigned int repairedMaxNetworkBitrate:1;
        unsigned int repairedStreamID:1;
    } _has;
}

@property (nonatomic, readonly) _Bool isSubStream;
@property (nonatomic) unsigned int ssrc;
@property (nonatomic) _Bool hasMaxNetworkBitrate;
@property (nonatomic) unsigned int maxNetworkBitrate;
@property (nonatomic) unsigned int payload;
@property (nonatomic) unsigned int streamID;
@property (nonatomic) _Bool hasMetadata;
@property (nonatomic) unsigned int metadata;
@property (nonatomic) unsigned int qualityIndex;
@property (nonatomic) unsigned int supportedVideoFormats;
@property (nonatomic) unsigned int frameRate;
@property (nonatomic) unsigned int keyFrameInterval;
@property (nonatomic) _Bool hasMaxMediaBitrate;
@property (nonatomic) unsigned int maxMediaBitrate;
@property (nonatomic) _Bool hasMaxPacketsPerSecond;
@property (nonatomic) unsigned int maxPacketsPerSecond;
@property (nonatomic) _Bool hasRepairedStreamID;
@property (nonatomic) unsigned int repairedStreamID;
@property (nonatomic) _Bool hasRepairedMaxNetworkBitrate;
@property (nonatomic) unsigned int repairedMaxNetworkBitrate;

+ (int)payloadForVideoPayload:(int)arg1;
+ (_Bool)convertVideoFormat:(int)arg1 width:(int *)arg2 height:(int *)arg3;
+ (int)videoFormatForWidth:(int)arg1 height:(int)arg2;
+ (int)videoPayloadForPayload:(int)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)newMultiwayVideoStream;
- (id)initWithStreamConfig:(id)arg1;
- (void)printWithLogFile:(void *)arg1;

@end
