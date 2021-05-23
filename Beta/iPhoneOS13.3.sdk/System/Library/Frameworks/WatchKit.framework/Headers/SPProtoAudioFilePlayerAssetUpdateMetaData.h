/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SPProtoAudioFilePlayerAssetUpdateMetaData : PBCodable

{
    double _duration;
    NSString *_albumTitle;
    NSString *_artist;
    NSString *_identifier;
    NSString *_sandboxExtensionToken;
    NSString *_title;
    NSString *_uRL;
    struct {
        unsigned int duration:1;
    } _has;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasURL;
@property (retain, nonatomic) NSString *uRL;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) double duration;
@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasAlbumTitle;
@property (retain, nonatomic) NSString *albumTitle;
@property (nonatomic, readonly) _Bool hasArtist;
@property (retain, nonatomic) NSString *artist;
@property (nonatomic, readonly) _Bool hasSandboxExtensionToken;
@property (retain, nonatomic) NSString *sandboxExtensionToken;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)sockPuppetMessage;

@end
