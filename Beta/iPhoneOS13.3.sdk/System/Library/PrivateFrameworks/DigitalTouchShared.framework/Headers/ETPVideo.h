/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface ETPVideo : PBCodable

{
    NSData *_introMessageData;
    int _mediaType;
    NSData *_playingMessagesData;
    struct {
        unsigned int mediaType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIntroMessageData;
@property (retain, nonatomic) NSData *introMessageData;
@property (nonatomic, readonly) _Bool hasPlayingMessagesData;
@property (retain, nonatomic) NSData *playingMessagesData;
@property (nonatomic) _Bool hasMediaType;
@property (nonatomic) int mediaType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)mediaTypeAsString:(int)arg1;
- (int)StringAsMediaType:(id)arg1;

@end
