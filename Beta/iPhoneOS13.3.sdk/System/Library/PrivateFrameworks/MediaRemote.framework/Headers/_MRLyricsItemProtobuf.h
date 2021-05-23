/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, _MRLyricsTokenProtobuf;

@interface _MRLyricsItemProtobuf : PBCodable

{
    NSString *_lyrics;
    _MRLyricsTokenProtobuf *_token;
    _Bool _userProvided;
    struct {
        unsigned int userProvided:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasLyrics;
@property (retain, nonatomic) NSString *lyrics;
@property (nonatomic) _Bool hasUserProvided;
@property (nonatomic) _Bool userProvided;
@property (nonatomic, readonly) _Bool hasToken;
@property (retain, nonatomic) _MRLyricsTokenProtobuf *token;

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
