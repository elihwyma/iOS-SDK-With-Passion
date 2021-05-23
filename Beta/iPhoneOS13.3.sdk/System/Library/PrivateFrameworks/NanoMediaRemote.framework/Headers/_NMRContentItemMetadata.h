/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NMRContentItemMetadata : PBCodable

{
    double _duration;
    NSString *_album;
    NSString *_artist;
    NSString *_title;
    struct {
        unsigned int duration:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasArtist;
@property (retain, nonatomic) NSString *artist;
@property (nonatomic, readonly) _Bool hasAlbum;
@property (retain, nonatomic) NSString *album;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) double duration;

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
