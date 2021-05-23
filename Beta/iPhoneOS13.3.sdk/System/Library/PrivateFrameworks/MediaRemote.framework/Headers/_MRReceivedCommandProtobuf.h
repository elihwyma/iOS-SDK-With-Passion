/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, _MRCommandOptionsProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRReceivedCommandAppOptionsProtobuf;

@interface _MRReceivedCommandProtobuf : PBCodable

{
    long long _destinationAppProcessID;
    _MRReceivedCommandAppOptionsProtobuf *_appOptions;
    int _command;
    NSString *_destinationAppDisplayID;
    _MRCommandOptionsProtobuf *_options;
    int _originUID;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    NSString *_remoteControlInterfaceID;
    NSString *_senderAppDisplayID;
    struct {
        unsigned int destinationAppProcessID:1;
        unsigned int command:1;
        unsigned int originUID:1;
    } _has;
}

@property (nonatomic) _Bool hasCommand;
@property (nonatomic) int command;
@property (nonatomic, readonly) _Bool hasOptions;
@property (retain, nonatomic) _MRCommandOptionsProtobuf *options;
@property (nonatomic) _Bool hasOriginUID;
@property (nonatomic) int originUID;
@property (nonatomic, readonly) _Bool hasSenderAppDisplayID;
@property (retain, nonatomic) NSString *senderAppDisplayID;
@property (nonatomic, readonly) _Bool hasDestinationAppDisplayID;
@property (retain, nonatomic) NSString *destinationAppDisplayID;
@property (nonatomic) _Bool hasDestinationAppProcessID;
@property (nonatomic) long long destinationAppProcessID;
@property (nonatomic, readonly) _Bool hasRemoteControlInterfaceID;
@property (retain, nonatomic) NSString *remoteControlInterfaceID;
@property (nonatomic, readonly) _Bool hasAppOptions;
@property (retain, nonatomic) _MRReceivedCommandAppOptionsProtobuf *appOptions;
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
