/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class _MRCommandOptionsProtobuf, _MRNowPlayingPlayerPathProtobuf;

@interface _MRSendCommandMessageProtobuf : PBCodable

{
    int _command;
    _MRCommandOptionsProtobuf *_options;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    struct {
        unsigned int command:1;
    } _has;
}

@property (nonatomic) _Bool hasCommand;
@property (nonatomic) int command;
@property (nonatomic, readonly) _Bool hasOptions;
@property (retain, nonatomic) _MRCommandOptionsProtobuf *options;
@property (nonatomic, readonly) _Bool hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)commandAsString:(int)arg1;
- (int)StringAsCommand:(id)arg1;

@end
