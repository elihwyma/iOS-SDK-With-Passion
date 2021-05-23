/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface _MRNowPlayingPlayerProtobuf : PBCodable

{
    int _audioSessionType;
    NSString *_displayName;
    NSString *_identifier;
    struct {
        unsigned int audioSessionType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) _Bool hasAudioSessionType;
@property (nonatomic) int audioSessionType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)audioSessionTypeAsString:(int)arg1;
- (int)StringAsAudioSessionType:(id)arg1;

@end
